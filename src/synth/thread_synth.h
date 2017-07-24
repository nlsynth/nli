// -*- C++ -*-
#ifndef _synth_thread_synth_h_
#define _synth_thread_synth_h_

#include "synth/common.h"

#include <map>
#include <set>

using std::map;
using std::set;

namespace synth {

class ThreadSynth {
public:
  ThreadSynth(ObjectSynth *obj_synth,
	      const string &thread_name,
	      const string &method_name,
	      vm::Object *thread_obj);
  virtual ~ThreadSynth();

  static bool HasResource(vm::Object *obj);

  bool Synth();
  bool Scan();
  // One primary thread in an object and takes care of unaccessed resources.
  void SetPrimary();
  bool IsPrimary();
  void CollectUnclaimedMembers();
  void MayGenerateExtIOMethod(vm::Method *method, bool is_output);
  void SetIsTask(bool is_task);
  ObjectSynth *GetObjectSynth();
  void RequestMethod(vm::Object *obj, const string &m);
  void AddName(const string &n);
  IRegister *AllocRegister(const string &prefix);
  MethodContext *GetMethodContext(vm::Object *obj, const string &m);
  ResourceSet *GetResourceSet();
  ITable *GetITable();
  vm::Object *GetThreadObject();
  vector<TableCall> &GetTableCalls();
  const string &GetEntryMethodName();
  static void InjectSubModuleCall(IState *st, IInsn *pseudo_call_insn,
				  ITable *callee_tab);
  static void InjectDataFlowCall(ThreadSynth *thr,
				 IState *st, IInsn *pseudo_call_insn,
				 ITable *callee_tab);
  static void InjectExtStubCall(IState *st, IInsn *pseudo_call_insn,
				const string &name);

private:
  ObjectSynth *obj_synth_;
  const string thread_name_;
  const string entry_method_name_;
  bool is_primary_thread_;
  vector<TableCall> table_calls_;
  // (1). The object (obj_synth_->obj_) for main()
  // (2). Thread object for thread entries.
  // (3). nullptr for sub module call entries.
  vm::Object *thread_obj_;
  ITable *tab_;
  bool is_task_;
  std::unique_ptr<ResourceSet> resource_;
  std::unique_ptr<ResourceSynth> rsynth_;
  struct PerObject {
    // name to method.
    map<string, MethodSynth *> methods_;
  };
  // TODO: fix ordering by something stable instead of pointers to Object.
  map<vm::Object *, PerObject> obj_methods_;
  int reg_name_index_;
  set<string> used_reg_names_;
};

}  // namespace synth

#endif  // _synth_thread_synth_h_
