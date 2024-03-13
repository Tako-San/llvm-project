add_llvm_component_group(FISA)

add_llvm_target(FISACodeGen
  FISATargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  Support
  Target
  FISAInfo

  ADD_TO_COMPONENT
  FISA
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)