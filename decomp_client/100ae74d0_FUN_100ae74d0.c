
void FUN_100ae74d0(long *param_1,int *param_2)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  int *piVar16;
  long lVar17;
  uint local_34;
  
  uVar6 = _CGMainDisplayID();
  *(undefined4 *)(param_1 + 1) = uVar6;
  uVar3 = *(uint *)(*param_1 + 8);
  uVar15 = uVar3 & 0x7fffffff;
  if (uVar15 < 0x20) {
    uVar15 = 0x20;
    lVar13 = 8;
  }
  else {
    lVar13 = 0;
    if (-1 < (int)uVar3) {
      bVar5 = 0x20 < *(int *)(*param_1 + 4);
      bVar4 = 0x41 < uVar15;
      if (bVar4 && bVar5) {
        uVar15 = 0x20;
      }
      lVar13 = (ulong)(bVar4 && bVar5) << 3;
    }
  }
  FUN_1000bf180(param_1,0x20,uVar15,lVar13);
  puVar9 = (uint *)*param_1;
  if (1 < *puVar9) {
    if ((puVar9[2] & 0x7fffffff) == 0) {
      puVar9 = (uint *)QArrayData::allocate(4,8,0,2);
      *param_1 = (long)puVar9;
    }
    else {
      FUN_1000bf180(param_1,puVar9[1],puVar9[2] & 0x7fffffff,0);
      puVar9 = (uint *)*param_1;
    }
  }
  iVar7 = _CGGetActiveDisplayList(0x20,(long)puVar9 + *(long *)(puVar9 + 4),&local_34);
  *param_2 = iVar7;
  if (iVar7 == 0 && local_34 == 0) {
    puVar9 = (uint *)*param_1;
    if (1 < *puVar9) {
      if ((puVar9[2] & 0x7fffffff) == 0) {
        puVar9 = (uint *)QArrayData::allocate(4,8,0,2);
        *param_1 = (long)puVar9;
      }
      else {
        FUN_1000bf180(param_1,puVar9[1],puVar9[2] & 0x7fffffff,0);
        puVar9 = (uint *)*param_1;
      }
    }
    iVar7 = _CGGetOnlineDisplayList(0x20,(long)puVar9 + *(long *)(puVar9 + 4),&local_34);
    *param_2 = iVar7;
  }
  if (iVar7 != 0) {
    local_34 = 0;
  }
  uVar3 = *(uint *)(*param_1 + 8);
  uVar8 = uVar3 & 0x7fffffff;
  lVar13 = 8;
  uVar15 = local_34;
  if (((int)local_34 <= (int)uVar8) && (lVar13 = 0, uVar15 = uVar8, -1 < (int)uVar3)) {
    bVar4 = (int)local_34 < *(int *)(*param_1 + 4);
    bVar5 = (int)local_34 < (int)(uVar8 >> 1);
    if (bVar5 && bVar4) {
      uVar15 = local_34;
    }
    lVar13 = (ulong)(bVar5 && bVar4) << 3;
  }
  FUN_1000bf180(param_1,local_34,uVar15,lVar13);
  puVar9 = (uint *)*param_1;
  uVar10 = (ulong)puVar9[1];
  if ((int)puVar9[1] < 1) {
    return;
  }
  lVar13 = 0;
LAB_100ae765e:
  lVar1 = lVar13 + 1;
  do {
    if (1 < *puVar9) {
      if ((puVar9[2] & 0x7fffffff) == 0) {
        puVar9 = (uint *)QArrayData::allocate(4,8,0,2);
        *param_1 = (long)puVar9;
      }
      else {
        FUN_1000bf180(param_1,uVar10,puVar9[2] & 0x7fffffff,0);
        puVar9 = (uint *)*param_1;
      }
    }
    uVar6 = *(undefined4 *)((long)puVar9 + lVar13 * 4 + *(long *)(puVar9 + 4));
    iVar7 = _CGDisplayMirrorsDisplay(uVar6);
    lVar14 = *param_1;
    lVar12 = *(long *)(lVar14 + 0x10);
    piVar2 = (int *)(lVar14 + lVar12);
    lVar17 = (long)*(int *)(lVar14 + 4) * 4;
    piVar16 = piVar2;
    if (lVar17 == 0) {
LAB_100ae7700:
      if (piVar16 == piVar2 + *(int *)(lVar14 + 4)) goto LAB_100ae7750;
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","QDesktopWidgetWrap",3,
                      "Display %08x is a mirror of %08x, skipping it!",uVar6,iVar7);
        lVar14 = *param_1;
        lVar12 = *(long *)(lVar14 + 0x10);
      }
      lVar12 = lVar12 + lVar14;
    }
    else {
      do {
        if (*piVar16 == iVar7) goto LAB_100ae7700;
        lVar17 = lVar17 + -4;
        piVar16 = piVar16 + 1;
      } while (lVar17 != 0);
LAB_100ae7750:
      uVar10 = _CGDisplayPixelsWide(uVar6);
      uVar11 = _CGDisplayPixelsHigh(uVar6);
      if ((0x13f < uVar10) && (199 < uVar11)) break;
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("CHRCLIENT","QDesktopWidgetWrap",3,
                      "Display %08x has invalid size (%lu, %lu), skipping it!",uVar6,uVar10,uVar11);
      }
      lVar12 = *param_1 + *(long *)(*param_1 + 0x10);
    }
    FUN_100ae8410(param_1,lVar12 + lVar13 * 4,lVar12 + lVar1 * 4);
    puVar9 = (uint *)*param_1;
    uVar10 = (ulong)(int)puVar9[1];
    if ((long)uVar10 <= lVar13) {
      return;
    }
  } while( true );
  puVar9 = (uint *)*param_1;
  uVar10 = (ulong)(int)puVar9[1];
  lVar13 = lVar1;
  if ((long)uVar10 <= lVar1) {
    return;
  }
  goto LAB_100ae765e;
}

