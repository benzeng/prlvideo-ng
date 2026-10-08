
long FUN_100ae5630(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  }
  uVar1 = FUN_100ae5060();
  lVar3 = 0;
  if (*(int *)((ulong)uVar1 + 4 + lVar4) != 0) {
    lVar3 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    }
    uVar2 = FUN_100ae5060();
    lVar3 = lVar3 + 0x10 + (ulong)*(uint *)(lVar4 + (ulong)uVar1) + (ulong)uVar2;
  }
  return lVar3;
}

