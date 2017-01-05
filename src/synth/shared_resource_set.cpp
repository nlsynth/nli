#include "synth/shared_resource_set.h"

#include "iroha/i_design.h"
#include "synth/object_synth.h"
#include "synth/thread_synth.h"
#include "vm/insn.h"

namespace synth {

SharedResource::SharedResource() : owner_(nullptr), owner_res_(nullptr) {
}

SharedResource::~SharedResource() {
}

void SharedResource::AddOwnerResource(IResource *res) {
  owner_res_ = res;
}

void SharedResource::AddAccessorResource(IResource *res) {
  accessor_resources_.insert(res);
}

SharedResourceSet::~SharedResourceSet() {
  STLDeleteSecondElements(&obj_resources_);
  for (auto it : value_resources_) {
    auto &m = it.second;
    STLDeleteSecondElements(&m);
  }
}

void SharedResourceSet::ResolveResourceTypes() {
  for (auto it : obj_resources_) {
    ResolveSharedResource(it.second);
  }
  for (auto it : value_resources_) {
    for (auto jt : it.second) {
      ResolveSharedResource(jt.second);
    }
  }
}

void SharedResourceSet::ResolveResourceAccessors() {
  for (auto it : obj_resources_) {
    ResolveSharedResource(it.second);
  }
  for (auto it : value_resources_) {
    for (auto jt : it.second) {
      ResolveSharedResource(jt.second);
    }
  }
}

void SharedResourceSet::ResolveSharedResource(SharedResource *res) {
  for (ThreadSynth *thr : res->ordered_accessors_) {
    if (res->owner_ == nullptr) {
      res->owner_ = thr;
    }
  }
}

void SharedResourceSet::ResolveSharedResourceAccessor(SharedResource *sres) {
  for (IResource *res : sres->accessor_resources_) {
    res->SetSharedRegister(sres->owner_res_);
  }
}

void SharedResourceSet::AddMemberAccessor(ThreadSynth *thr, sym_t name,
					  vm::Insn *insn) {
  SharedResource *res = GetBySlotName(thr->GetObjectSynth()->GetObject(),
				      name);
  res->ordered_accessors_.push_back(thr);
  res->accessors_.insert(thr);
  if (insn->op_ == vm::OP_MEMBER_READ) {
    res->readers_.insert(thr);
  }
  if (insn->op_ == vm::OP_MEMBER_WRITE) {
    res->writers_.insert(thr);
  }
}

void SharedResourceSet::AddObjectAccessor(ThreadSynth *thr, vm::Object *obj,
					  vm::Insn *insn) {
  SharedResource *res = GetByObj(obj);
  res->ordered_accessors_.push_back(thr);
  res->accessors_.insert(thr);
  if (insn->op_ == vm::OP_ARRAY_READ) {
    res->readers_.insert(thr);
  }
  if (insn->op_ == vm::OP_ARRAY_WRITE) {
    res->writers_.insert(thr);
  }
}

SharedResource *SharedResourceSet::GetBySlotName(vm::Object *obj,
						 sym_t name) {
  auto it = value_resources_.find(obj);
  if (it != value_resources_.end()) {
    auto &m = it->second;
    auto jt = m.find(name);
    if (jt != m.end()) {
      return jt->second;
    }
    SharedResource *res = new SharedResource();
    m[name] = res;
    return res;
  }
  SharedResource *res = new SharedResource();
  map<sym_t, SharedResource *> m;
  m[name] = res;
  value_resources_[obj] = m;
  return res;
}

SharedResource *SharedResourceSet::GetByObj(vm::Object *obj) {
  auto it = obj_resources_.find(obj);
  if (it != obj_resources_.end()) {
    return it->second;
  }
  SharedResource *res = new SharedResource();
  obj_resources_[obj] = res;
  return res;
}

}  // namespace synth