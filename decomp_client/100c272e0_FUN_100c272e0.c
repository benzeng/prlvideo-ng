
undefined8 FUN_100c272e0(long *param_1,int param_2)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 0;
  if (-1 < param_2) {
    iVar7 = (int)(((uint)(param_2 >> 0x1f) >> 0x1a) + param_2) >> 6;
    iVar6 = (int)param_1[1];
    if (iVar7 < iVar6) {
      lVar2 = *param_1;
      puVar1 = (ulong *)(lVar2 + (long)iVar7 * 8);
      *puVar1 = *puVar1 & ~(1L << ((byte)param_2 & 0x3f));
      uVar4 = 1;
      if (0 < iVar6) {
        plVar5 = (long *)(lVar2 + -8 + (long)iVar6 * 8);
        do {
          iVar7 = iVar6;
          if (*plVar5 != 0) break;
          plVar5 = plVar5 + -1;
          iVar7 = iVar6 + -1;
          bVar3 = 1 < iVar6;
          iVar6 = iVar7;
        } while (bVar3);
        *(int *)(param_1 + 1) = iVar7;
      }
    }
  }
  return uVar4;
}

