#include "FISAMCTargetDesc.h"
#include "FISAInfo.h"

#include "TargetInfo/FISATargetInfo.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

#define GET_REGINFO_MC_DESC
#include "FISAGenRegisterInfo.inc"

#define GET_INSTRINFO_MC_DESC
#include "FISAGenInstrInfo.inc"

static MCRegisterInfo *createFISAMCRegisterInfo(const Triple &TT) {
  MCRegisterInfo *X = new MCRegisterInfo();
  InitFISAMCRegisterInfo(X, FISA::R0);
  return X;
}

static MCInstrInfo *createFISAMCInstrInfo() {
  MCInstrInfo *X = new MCInstrInfo();
  InitFISAMCInstrInfo(X);
  return X;
}

// We need to define this function for linking succeed
extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeFISATargetMC() {
  Target &TheFISATarget = getTheFISATarget();
  // Register the MC register info.
  TargetRegistry::RegisterMCRegInfo(TheFISATarget, createFISAMCRegisterInfo);
  // Register the MC instruction info.
  TargetRegistry::RegisterMCInstrInfo(TheFISATarget, createFISAMCInstrInfo);
}
