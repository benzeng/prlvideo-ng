
undefined1 FUN_10054c270(long param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(param_1 + 0x60) + 0x40))();
    if (iVar1 < 0) {
      uVar2 = 0;
      FUN_1008e3970("","TransMem",0,"CGuestMemoryCompressor::decrypt() failed (%d)");
    }
  }
  return uVar2;
}

