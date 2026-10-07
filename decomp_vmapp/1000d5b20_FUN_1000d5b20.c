
undefined1 FUN_1000d5b20(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x18))();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = 0;
    FUN_1008e3970("","vm",0,"CSwapMem::RestoreVideoMem() failed");
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0x80020000;
      uVar2 = 0;
    }
  }
  return uVar2;
}

