add_llvm_component_library(LLVMFISADesc
  FISAMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  FISAInfo

  ADD_TO_COMPONENT
  FISA
)
