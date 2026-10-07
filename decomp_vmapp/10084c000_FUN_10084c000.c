
undefined8 FUN_10084c000(long *param_1,int param_2)

{
  int iVar1;
  ulong *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (-1 < param_2) {
    iVar6 = (int)(((uint)(param_2 >> 0x1f) >> 0x1a) + param_2) >> 6;
    iVar3 = (int)param_1[1];
    if (iVar3 <= iVar6) {
      iVar1 = iVar6 + 1;
      if ((*(int *)((long)param_1 + 0xc) <= iVar6) && (*(int *)((long)param_1 + 0xc) < iVar1)) {
        lVar4 = FUN_10084b660(param_1);
        if (lVar4 == 0) {
          return 0;
        }
        if (*param_1 != 0) {
          FUN_10081e1a0();
        }
        *param_1 = lVar4;
        *(int *)((long)param_1 + 0xc) = iVar1;
        iVar3 = (int)param_1[1];
      }
      if (iVar3 < iVar1) {
        ___bzero(*param_1 + (long)iVar3 * 8,(ulong)(uint)(iVar6 - iVar3) * 8 + 8);
      }
      *(int *)(param_1 + 1) = iVar1;
    }
    puVar2 = (ulong *)(*param_1 + (long)iVar6 * 8);
    *puVar2 = *puVar2 | 1L << ((byte)param_2 & 0x3f);
    uVar5 = 1;
  }
  return uVar5;
}

