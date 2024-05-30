add_llvm_component_library(LLVMFISAInfo
  FISATargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  FISA
)
