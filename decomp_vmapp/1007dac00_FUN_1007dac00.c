
undefined1  [16] FUN_1007dac00(long *param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  
  uVar10 = 0xffffffff;
  uVar9 = param_3;
  if ((param_1 == (long *)0x0) || (param_2 == 0)) goto LAB_1007dad63;
  iVar5 = (int)param_3;
  iVar4 = iVar5 + -1 + param_4;
  uVar9 = (long)iVar4 % (long)param_4 & 0xffffffff;
  iVar7 = -1;
  do {
    iVar7 = iVar7 + 1;
    iVar11 = 1 << ((byte)iVar7 & 0x1f);
  } while (iVar11 < iVar4 / param_4);
  *(int *)(param_1 + 5) = iVar7;
  uVar10 = 0xffffffff;
  if ((iVar5 == 0) || (param_4 == 0)) goto LAB_1007dad63;
  uVar3 = (long)((ulong)(uint)(iVar5 >> 0x1f) << 0x20 | param_3 & 0xffffffff) % (long)param_4;
  uVar9 = uVar3 & 0xffffffff;
  if (((int)uVar3 != 0) ||
     (uVar3 = (ulong)(uint)(iVar5 >> 0x1f) << 0x20 | param_3 & 0xffffffff,
     uVar9 = (long)uVar3 % (long)param_4 & 0xffffffff, iVar11 != (int)((long)uVar3 / (long)param_4))
     ) goto LAB_1007dad63;
  *param_1 = param_2;
  *(int *)(param_1 + 4) = iVar5;
  *(int *)((long)param_1 + 0x24) = param_4;
  *(int *)((long)param_1 + 0x2c) = iVar11;
  param_1[1] = (long)(param_1 + 6);
  lVar6 = (long)iVar11 + 0x30 + (long)param_1;
  param_1[2] = lVar6;
  param_1[3] = (long)iVar11 * 0x10 + lVar6;
  iVar5 = 0x1f;
  if (iVar7 == 0x1f) {
LAB_1007dad10:
    lVar6 = param_1[3];
    lVar8 = -1;
    do {
      *(long *)lVar6 = lVar6;
      *(long *)(lVar6 + 8) = lVar6;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar8 < iVar5);
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
    lVar6 = param_1[2];
    *(long *)lVar6 = lVar6;
    *(long *)(lVar6 + 8) = lVar6;
    lVar6 = 1;
    lVar8 = 0x10;
    if (1 < *(int *)((long)param_1 + 0x2c)) {
      do {
        *(undefined1 *)(param_1[1] + lVar6) = 0;
        lVar1 = param_1[2];
        *(long *)(lVar1 + lVar8) = lVar1 + lVar8;
        *(long *)(lVar1 + 8 + lVar8) = lVar1 + lVar8;
        lVar6 = lVar6 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar6 < *(int *)((long)param_1 + 0x2c));
    }
    iVar5 = (int)param_1[5];
    if (-1 < iVar5) goto LAB_1007dad10;
  }
  *(char *)param_1[1] = (char)iVar5;
  plVar2 = (long *)param_1[2];
  uVar9 = param_1[3];
  lVar8 = (long)(int)param_1[5] * 0x10;
  lVar6 = *(long *)(uVar9 + lVar8);
  *(long **)(lVar6 + 8) = plVar2;
  *plVar2 = lVar6;
  plVar2[1] = uVar9 + lVar8;
  *(long **)(uVar9 + lVar8) = plVar2;
  uVar10 = 0;
LAB_1007dad63:
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = uVar10;
  return auVar12;
}

