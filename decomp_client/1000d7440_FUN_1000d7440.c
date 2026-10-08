
long FUN_1000d7440(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 0x38);
  piVar1 = (int *)(lVar4 + 0xc);
  iVar3 = *(int *)(lVar4 + 8);
  if (iVar3 < *piVar1) {
    lVar2 = lVar4 + 0x10;
    lVar5 = 0;
    do {
      lVar4 = CONCAT71((int7)((ulong)lVar4 >> 8),1);
      if (**(ulong **)(lVar2 + (long)iVar3 * 8 + lVar5 * 8) == (ulong)*(uint *)(param_1 + 0x80)) {
        return lVar4;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *piVar1 - iVar3);
  }
  return 0;
}

