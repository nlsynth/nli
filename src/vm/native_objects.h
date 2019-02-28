// -*- C++ -*-
#ifndef _vm_native_objects_h_
#define _vm_native_objects_h_

#include "vm/common.h"
#include "vm/register.h"  // for RegisterType
#include "vm/method.h"  // for method_func

namespace vm {

class NativeObjects {
public:
  static void InstallNativeRootObjectMethods(VM *vm, Object *obj);
  static void InstallNativeKernelObjectMethods(VM *vm, Object *obj);
  static Method *InstallNativeMethod(VM *vm, Object *obj, const char *name,
				     Method::method_func func,
				     const vector<RegisterType> &ret_types);
  static Method *InstallNativeMethodWithAltImpl(VM *vm, Object *obj,
						const char *name,
						Method::method_func func,
						const vector<RegisterType> &ret_types,
						const char *alt);
  static void InstallEnvNativeMethods(VM *vm, Object *obj);
};

}  // namespace vm

#endif  // _vm_native_objects_h_
