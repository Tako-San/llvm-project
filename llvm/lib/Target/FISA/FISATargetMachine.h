#ifndef __LLVM_LIB_TARGET_FISA_FISATARGETMACHINE_HH__
#define __LLVM_LIB_TARGET_FISA_FISATARGETMACHINE_HH__

#include "llvm/Target/TargetMachine.h"
#include <optional>

namespace llvm {
extern Target TheFISATarget;

class FISATargetMachine : public LLVMTargetMachine {
  std::unique_ptr<TargetLoweringObjectFile> TLOF;

public:
  FISATargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    std::optional<Reloc::Model> RM,
                    std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                    bool JIT, bool isLittle);

  FISATargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    std::optional<Reloc::Model> RM,
                    std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                    bool JIT);

  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;
  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
};
} // end namespace llvm

#endif // __LLVM_LIB_TARGET_FISA_FISATARGETMACHINE_HH__
