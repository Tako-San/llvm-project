#include "TargetInfo/FISATargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
using namespace llvm;

Target &llvm::getTheFISATarget() {
  static Target TheFISATarget;
  return TheFISATarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeFISATargetInfo() {
  RegisterTarget<Triple::fisa> X(getTheFISATarget(), "FISA", "FISA 32", "FISA");
}