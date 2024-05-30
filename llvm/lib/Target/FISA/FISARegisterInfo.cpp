#include "llvm/CodeGen/TargetInstrInfo.h"

#include "FISARegisterInfo.h"
#include "FISAFrameLowering.h"

using namespace llvm;

#define GET_REGINFO_ENUM
#define GET_REGINFO_TARGET_DESC
#include "FISAGenRegisterInfo.inc"

FISARegisterInfo::FISARegisterInfo() : FISAGenRegisterInfo(FISA::R0) {
}
