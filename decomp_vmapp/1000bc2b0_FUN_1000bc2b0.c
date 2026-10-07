
undefined8 FUN_1000bc2b0(long param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 == 10) {
    (**(code **)(**(long **)(param_1 + 0x1950) + 0x128))(*(long **)(param_1 + 0x1950),4);
    iVar2 = FUN_1000a8ed0(param_1);
    if (iVar2 == 0) {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","GetActiveVcpusMask()",
                    "VirtualPCStates.cpp",0x8c7,"stateVmProblemReportTimer");
    }
    cVar1 = FUN_1000a7bc0(param_1);
    if (cVar1 == '\0') {
      FUN_1008e3970("","vm",0,"ASSERT( %s ) occured in %s:%d [%s]","IsAnyVcpuThreadRunning()",
                    "VirtualPCStates.cpp",0x8c8,"stateVmProblemReportTimer");
    }
    FUN_1000a79f0(param_1,0x200008000000,1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

