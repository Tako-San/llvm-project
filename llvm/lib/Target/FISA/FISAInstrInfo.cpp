#include "llvm/CodeGen/MachineFrameInfo.h"
#include "llvm/CodeGen/MachineInstrBuilder.h"
#include "llvm/CodeGen/MachineMemOperand.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/ErrorHandling.h"

#include "FISAInstrInfo.h"

using namespace llvm;

#define GET_INSTRINFO_CTOR_DTOR
#include "FISAGenInstrInfo.inc"

// #define DEBUG_TYPE "FISA-inst-info"

FISAInstrInfo::FISAInstrInfo() : FISAGenInstrInfo() {}