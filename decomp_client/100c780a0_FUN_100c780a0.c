
ulong FUN_100c780a0(int *param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  if (param_1 != (int *)0x0) {
    bVar2 = true;
    if ((param_1[1] != 0x10a) && (bVar2 = false, param_1[1] != 10)) {
      return 0xffffffffffffffff;
    }
    iVar1 = *param_1;
    uVar4 = 0xffffffff;
    if ((long)iVar1 < 9) {
      uVar4 = 0;
      if (*(long *)(param_1 + 2) != 0) {
        uVar5 = 0;
        if (0 < iVar1) {
          lVar3 = 0;
          uVar5 = 0;
          do {
            uVar5 = uVar5 << 8 | (ulong)*(byte *)(*(long *)(param_1 + 2) + lVar3);
            lVar3 = lVar3 + 1;
          } while (lVar3 < iVar1);
        }
        uVar4 = -uVar5;
        if (!bVar2) {
          uVar4 = uVar5;
        }
      }
    }
  }
  return uVar4;
}

