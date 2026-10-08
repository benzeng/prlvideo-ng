
undefined8 FUN_100c27450(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  
  uVar1 = *(ulong *)(param_2 + (long)(param_3 + -1) * 8);
  uVar2 = *(ulong *)(param_1 + (long)(param_3 + -1) * 8);
  bVar5 = uVar2 < uVar1;
  bVar6 = uVar2 == uVar1;
  if (bVar6) {
    uVar3 = 0;
    if (-1 < param_3 + -2) {
      lVar4 = (long)(param_3 + -2) + 1;
      do {
        uVar1 = *(ulong *)(param_2 + -8 + lVar4 * 8);
        uVar2 = *(ulong *)(param_1 + -8 + lVar4 * 8);
        bVar5 = uVar2 < uVar1;
        bVar6 = uVar2 == uVar1;
        if (!bVar6) goto LAB_100c27486;
        lVar4 = lVar4 + -1;
      } while (0 < lVar4);
    }
  }
  else {
LAB_100c27486:
    uVar3 = 0xffffffff;
    if (!bVar5 && !bVar6) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

