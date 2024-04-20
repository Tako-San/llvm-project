include "llvm/Target/Target.td"
include "FISARegisterInfo.td"
include "FISAInstrInfo.td"

def FISAInstrInfo : InstrInfo;
def FISA : Target {
  let InstructionSet = FISAInstrInfo;
}
