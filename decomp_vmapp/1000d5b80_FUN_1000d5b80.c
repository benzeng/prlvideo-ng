
undefined1 FUN_1000d5b80(long param_1)

{
  char cVar1;
  
  FUN_1008e3970("","vm",0,"CSwapMem::MainRoutine() started");
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x38))();
  if ((cVar1 != '\0') && (cVar1 = FUN_100555200(param_1 + 0x20), cVar1 != '\0')) {
    FUN_1008e3970("","vm",0,"CSwapMem::MainRoutine() done");
    return 1;
  }
  FUN_1008e3970("","vm",0,"CSwapMem::MainRoutine() failed");
  if (*(int *)(param_1 + 0x14) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x80020000;
  }
  return 0;
}

