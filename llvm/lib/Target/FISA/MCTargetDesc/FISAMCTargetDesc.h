#ifndef __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAMCTARGETDESC_HH__
#define __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAMCTARGETDESC_HH__

// Defines symbolic names for FISA registers.  This defines a mapping from
// register name to register number.
#define GET_REGINFO_ENUM
#include "FISAGenRegisterInfo.inc"

// Defines symbolic names for the Sim instructions.
#define GET_INSTRINFO_ENUM
#include "FISAGenInstrInfo.inc"

#endif // __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAMCTARGETDESC_HH__
