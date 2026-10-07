
undefined4 FUN_1004d8470(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar1 = FUN_1004c6130(*(long *)(param_1 + 0x50) + 0x44);
    LOCK();
    iVar2 = *(int *)(param_1 + 0x58);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x58) = iVar1;
      iVar2 = 0;
    }
    UNLOCK();
    if (iVar2 != 0) {
      FUN_1004c6150(*(long *)(param_1 + 0x50) + 0x44,iVar1);
    }
  }
  return *(undefined4 *)(param_1 + 0x58);
}

