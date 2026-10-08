
undefined8 FUN_1009d1960(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar4 = (int)((ulong)(*(long *)(param_1 + 0x10) - lVar1) >> 3);
  if (0 < iVar4) {
    lVar3 = 0;
    do {
      if (*(int *)(**(long **)(lVar1 + lVar3 * 8) + 0xc) == 2) {
        iVar2 = (int)lVar3;
        if (iVar2 < 0) {
          return 0;
        }
        if (iVar4 <= iVar2) {
          return 0;
        }
        return *(undefined8 *)(lVar1 + (long)iVar2 * 8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar4);
  }
  return 0;
}

