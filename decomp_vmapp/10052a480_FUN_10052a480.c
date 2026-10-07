
long FUN_10052a480(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  uVar1 = FUN_100529f10();
  lVar2 = 0;
  if (*(int *)(lVar3 + (ulong)uVar1) != 0) {
    lVar2 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    }
    uVar1 = FUN_100529f10();
    lVar2 = (ulong)uVar1 + 0x10 + lVar2;
  }
  return lVar2;
}

