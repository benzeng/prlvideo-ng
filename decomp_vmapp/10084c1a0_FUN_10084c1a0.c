
undefined8 FUN_10084c1a0(long *param_1,int param_2)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  
  uVar3 = 0;
  if ((-1 < param_2) &&
     (iVar4 = (int)(((uint)(param_2 >> 0x1f) >> 0x1a) + param_2) >> 6, iVar4 < (int)param_1[1])) {
    if (param_2 % 0x40 == 0) {
      *(int *)(param_1 + 1) = iVar4;
    }
    else {
      lVar7 = (long)iVar4;
      iVar4 = iVar4 + 1;
      *(int *)(param_1 + 1) = iVar4;
      puVar1 = (ulong *)(*param_1 + lVar7 * 8);
      *puVar1 = *puVar1 & ~(-1L << ((byte)(param_2 % 0x40) & 0x3f));
    }
    uVar3 = 1;
    if (0 < iVar4) {
      plVar5 = (long *)((long)(iVar4 + -1) * 8 + *param_1);
      do {
        iVar6 = iVar4;
        if (*plVar5 != 0) break;
        plVar5 = plVar5 + -1;
        iVar6 = iVar4 + -1;
        bVar2 = 1 < iVar4;
        iVar4 = iVar6;
      } while (bVar2);
      *(int *)(param_1 + 1) = iVar6;
    }
  }
  return uVar3;
}

