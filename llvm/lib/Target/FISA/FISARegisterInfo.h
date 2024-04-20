#ifndef __LLVM_LIB_TARGET_FISA_FISAREGISTERINFO_HH__
#define __LLVM_LIB_TARGET_FISA_FISAREGISTERINFO_HH__

#define GET_REGINFO_HEADER
#include "FISAGenRegisterInfo.inc"

namespace llvm {

struct FISARegisterInfo : public FISAGenRegisterInfo {
public:
  FISARegisterInfo();
};

} // end namespace llvm

#endif // __LLVM_LIB_TARGET_FISA_FISAREGISTERINFO_HH__
