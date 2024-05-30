add_llvm_component_group(FISA)

set(LLVM_TARGET_DEFINITIONS FISA.td)
tablegen(LLVM FISAGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM FISAGenInstrInfo.inc -gen-instr-info)

add_public_tablegen_target(FISACommonTableGen)

add_llvm_target(FISACodeGen
  FISATargetMachine.cpp
  FISARegisterInfo.cpp
  FISAInstrInfo.cpp

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