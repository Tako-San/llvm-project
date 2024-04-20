#ifndef __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAINFO_HH__
#define __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAINFO_HH__

#include "llvm/MC/MCInstrDesc.h"

namespace llvm {

namespace FISAOp {
enum OperandType : unsigned {
  OPERAND_SIMM16 = MCOI::OPERAND_FIRST_TARGET,
};
} // namespace FISAOp

} // end namespace llvm

#endif // __LLVM_LIB_TARGET_FISA_MCTARGETDESC_FISAINFO_HH__
