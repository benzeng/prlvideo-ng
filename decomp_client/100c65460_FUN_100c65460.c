
uint FUN_100c65460(int *param_1,long param_2,int *param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  iVar7 = *param_1;
  uVar8 = (ulong)iVar7;
  uVar6 = 0;
  iVar11 = 0;
  if ((((0 < (long)uVar8) && (iVar11 = 0, *(char *)(uVar8 + 7 + (long)param_1) == '=')) &&
      (iVar11 = 1, 1 < iVar7)) && (iVar11 = 2, *(char *)(uVar8 + 6 + (long)param_1) != '=')) {
    iVar11 = 1;
  }
  if (param_5 == 0) {
    iVar9 = 0;
    goto LAB_100c65660;
  }
  bVar3 = false;
  if (param_5 < 1) {
    iVar9 = 0;
  }
  else {
    lVar10 = 0;
    iVar9 = 0;
    do {
      iVar7 = (int)uVar8;
      bVar1 = *(byte *)(param_4 + lVar10);
      uVar6 = 0xffffffff;
      if (((char)bVar1 < '\0') || (bVar2 = (&DAT_101dae7f0)[bVar1], bVar2 == 0xff))
      goto LAB_100c65660;
      if (bVar1 == 0x3d) {
        iVar11 = iVar11 + 1;
      }
      else if ((0 < iVar11) && ((bVar2 | 0x13) != 0xf3)) goto LAB_100c65660;
      if (2 < iVar11) goto LAB_100c65660;
      if (bVar1 == 0x2d) {
        bVar3 = true;
        goto LAB_100c65608;
      }
      if ((bVar2 | 0x13) != 0xf3) {
        if (0x3f < iVar7) goto LAB_100c65660;
        uVar8 = (ulong)(iVar7 + 1);
        *(byte *)((long)param_1 + (long)iVar7 + 8) = bVar1;
      }
      if ((int)uVar8 == 0x40) {
        iVar5 = FUN_100c656b0(param_2,param_1 + 2,0x40);
        iVar7 = 0;
        if (iVar5 < 0) {
          uVar6 = 0xffffffff;
          goto LAB_100c65660;
        }
        if (iVar5 < iVar11) {
          uVar6 = 0xffffffff;
          goto LAB_100c65660;
        }
        iVar9 = iVar9 + (iVar5 - iVar11);
        param_2 = param_2 + (iVar5 - iVar11);
        uVar8 = 0;
      }
      lVar10 = lVar10 + 1;
    } while ((int)lVar10 < param_5);
    bVar3 = false;
  }
LAB_100c65608:
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
LAB_100c65647:
    bVar4 = true;
    if (!bVar3) goto LAB_100c6564d;
  }
  else {
    if ((uVar8 & 3) == 0) {
      iVar5 = FUN_100c656b0(param_2,param_1 + 2);
      iVar7 = 0;
      if ((iVar5 < 0) || (iVar5 < iVar11)) {
        uVar6 = 0xffffffff;
        goto LAB_100c65660;
      }
      iVar9 = (iVar9 - iVar11) + iVar5;
      iVar7 = 0;
      goto LAB_100c65647;
    }
    uVar6 = 0xffffffff;
    if (bVar3) goto LAB_100c65660;
LAB_100c6564d:
    bVar4 = iVar11 != 0 && iVar7 == 0;
  }
  uVar6 = bVar4 ^ 1;
LAB_100c65660:
  *param_3 = iVar9;
  *param_1 = iVar7;
  return uVar6;
}

