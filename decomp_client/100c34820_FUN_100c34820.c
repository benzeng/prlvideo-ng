
bool FUN_100c34820(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  bool bVar10;
  
  FUN_100c27c60(param_4);
  plVar3 = (long *)FUN_100c27e20(param_4);
  bVar10 = false;
  if (plVar3 != (long *)0x0) {
    iVar9 = (int)param_2[1];
    if (*(int *)((long)plVar3 + 0xc) < iVar9 * 2) {
      lVar4 = FUN_100c26b00(plVar3);
      if (lVar4 == 0) goto LAB_100c34a6c;
      iVar9 = (int)param_2[1];
    }
    if (iVar9 < 1) {
      *(int *)(plVar3 + 1) = iVar9 * 2;
    }
    else {
      lVar4 = *param_2;
      lVar1 = *plVar3;
      lVar8 = (long)iVar9 + 1;
      iVar9 = iVar9 * 2 + -1;
      do {
        uVar5 = *(ulong *)(lVar4 + -0x10 + lVar8 * 8);
        *(ulong *)(lVar1 + (long)iVar9 * 8) =
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x21 & 0x78)) << 8 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x25 & 0x78)) << 0x10 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x29 & 0x78)) << 0x18 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x2d & 0x78)) << 0x20 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x31 & 0x78)) << 0x28 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x35 & 0x78)) << 0x30 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x3c) * 8) << 0x38 |
             *(ulong *)(&DAT_101dab540 + (uVar5 >> 0x1d & 0x78));
        uVar5 = *(ulong *)(lVar4 + -0x10 + lVar8 * 8);
        *(ulong *)(lVar1 + (long)(iVar9 + -1) * 8) =
             *(long *)(&DAT_101dab540 + (uVar5 >> 1 & 0x78)) << 8 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 5 & 0x78)) << 0x10 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 9 & 0x78)) << 0x18 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0xd & 0x78)) << 0x20 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x11 & 0x78)) << 0x28 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x15 & 0x78)) << 0x30 |
             *(long *)(&DAT_101dab540 + (uVar5 >> 0x19 & 0x78)) << 0x38 |
             *(ulong *)(&DAT_101dab540 + (uVar5 & 0xf) * 8);
        lVar8 = lVar8 + -1;
        iVar9 = iVar9 + -2;
      } while (1 < lVar8);
      lVar4 = (long)(int)param_2[1];
      uVar5 = lVar4 * 2;
      *(int *)(plVar3 + 1) = (int)uVar5;
      if (0 < lVar4) {
        plVar6 = (long *)(*plVar3 + -8 + lVar4 * 0x10);
        do {
          uVar2 = (uint)uVar5;
          uVar7 = uVar2;
          if (*plVar6 != 0) break;
          plVar6 = plVar6 + -1;
          uVar7 = uVar2 - 1;
          uVar5 = (ulong)uVar7;
        } while (1 < (int)uVar2);
        *(uint *)(plVar3 + 1) = uVar7;
      }
    }
    iVar9 = FUN_100c34010(param_1,plVar3,param_3);
    bVar10 = iVar9 != 0;
  }
LAB_100c34a6c:
  FUN_100c27d40(param_4);
  return bVar10;
}

