#ifndef __LLVM_LIB_TARGET_FISA_FISAINSTRINFO_HH__
#define __LLVM_LIB_TARGET_FISA_FISAINSTRINFO_HH__

#include "llvm/CodeGen/TargetInstrInfo.h"

#include "FISARegisterInfo.h"
#include "MCTargetDesc/FISAInfo.h"

#define GET_INSTRINFO_HEADER
#include "FISAGenInstrInfo.inc"

namespace llvm {

class FISASubtarget;

class FISAInstrInfo : public FISAGenInstrInfo {
public:
  FISAInstrInfo();
};

} // end namespace llvm

#endif // __LLVM_LIB_TARGET_FISA_FISAINSTRINFO_HH__
