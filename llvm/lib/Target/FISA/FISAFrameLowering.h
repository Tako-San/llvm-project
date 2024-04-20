#ifndef __LLVM_LIB_TARGET_FISA_FISAFRAMELOWERING_HH__
#define __LLVM_LIB_TARGET_FISA_FISAFRAMELOWERING_HH__

#include "llvm/CodeGen/TargetFrameLowering.h"

namespace llvm {

class FISAFrameLowering : public TargetFrameLowering {
public:
  explicit FISAFrameLowering()
      : TargetFrameLowering(TargetFrameLowering::StackGrowsDown, Align(4), 0) {
  }

  /// emitProlog/emitEpilog - These methods insert prolog and epilog code into
  /// the function.
  void emitPrologue(MachineFunction &MF,
                    MachineBasicBlock &MBB) const override {}
  void emitEpilogue(MachineFunction &MF,
                    MachineBasicBlock &MBB) const override {}

  /// hasFP - Return true if the specified function should have a dedicated
  /// frame pointer register. For most targets this is true only if the function
  /// has variable sized allocas or if frame pointer elimination is disabled.
  bool hasFP(const MachineFunction &MF) const override { return false; }
};

} // namespace llvm

#endif // __LLVM_LIB_TARGET_FISA_FISAFRAMELOWERING_HH__
