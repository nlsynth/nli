// -*- C++ -*-
#ifndef _writer_cc_state_h_
#define _writer_cc_state_h_

#include "writer/writer.h"

namespace dfg {
class DGraph;
class DInsn;
class DModule;
class DRegister;
class DState;
}  // namespace dfg
using namespace dfg;

namespace writer {

class ClassWriter;
class ModuleTemplate;

class CCState {
public:
  CCState(const DState *state, const DGraph *graph, ClassWriter *cw);

  void PreProcess(ModuleTemplate *tmpl);

  void Output();

private:
  void OutputInsnList();
  void OutputInsn(const DInsn *insn);
  void OutputBitSelInsn(const DInsn *insn);
  void OutputBitConcatInsn(const DInsn *insn);
  void OutputImportedInsn(const DInsn *insn);
  void OutputSRAMInsn(const DInsn *insn);
  void OutputBinOp(const DInsn *insn);
  void OutputUniOp(const DInsn *insn);
  void OutputAssign(const DInsn *insn);
  void OutputBranch(const DInsn *insn);
  void OutputSelectorInsn(const DInsn *insn);
  void OutputChannelWriteInsn(const DInsn *insn);
  void OutputChannelReadInsn(const DInsn *insn);
  void OutputSubModuleCallInsn(const DInsn *insn);
  string RegisterName(const DRegister *reg);
  void OutputImportedInsn(const DRegister *reg);
  void OutputMutliCycleCheck();

  bool IsTerminal() const;
  string SubStateRegName(const DInsn *insn);

  const DState *state_;
  const DGraph *graph_;
  ClassWriter *cw_;
  ostream &os_;

  bool is_multi_cycle_;
  vector<const DInsn *> multi_cycle_insns_;
};

}  // namespace writer

#endif  // _writer_cc_graph_h_
