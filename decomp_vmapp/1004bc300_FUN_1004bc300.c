
void FUN_1004bc300(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double *pdVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  undefined4 *extraout_RDX;
  ulong uVar20;
  ulong extraout_RDX_00;
  undefined4 *extraout_RDX_01;
  undefined4 *puVar21;
  undefined8 extraout_RDX_02;
  ulong extraout_RDX_03;
  int iVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  byte local_48;
  byte local_47;
  byte local_46;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  
  iVar4 = param_3[6];
  iVar5 = param_3[7];
  iVar6 = param_3[4];
  iVar7 = param_3[5];
  iVar22 = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x58);
  iVar25 = *(int *)(param_2 + 100) - *(int *)(param_2 + 0x5c);
  puVar21 = param_3;
  if (*(char *)(param_2 + 0x21) != '\0') {
    FUN_1004bcf20(param_1,param_2,iVar22);
    param_4 = 0;
    puVar21 = extraout_RDX;
  }
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  if (param_4 == 0) {
    puVar1 = param_1 + 0x46;
    puVar15 = (uint *)param_1[0x46];
    if ((int)puVar15[1] < 1) {
      uVar27 = puVar15[2] & 0x7fffffff;
      uVar26 = uVar27;
      if (uVar27 < 0x10) {
        uVar26 = 0x10;
      }
      FUN_1004beb50(puVar1,0x10,uVar26,-(uVar27 < 0x10) & 8);
      puVar15 = (uint *)*puVar1;
      puVar21 = extraout_RDX_01;
    }
    auVar29._8_8_ = puVar21;
    auVar29._0_8_ = puVar15;
    if (1 < *puVar15) {
      if ((puVar15[2] & 0x7fffffff) == 0) {
        auVar29 = QArrayData::allocate(0x10,8,0,2);
        *puVar1 = auVar29._0_8_;
      }
      else {
        FUN_1004beb50(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
        auVar29._8_8_ = extraout_RDX_02;
        auVar29._0_8_ = *puVar1;
      }
    }
    uVar20 = auVar29._8_8_;
    lVar23 = auVar29._0_8_;
    lVar24 = *(long *)(lVar23 + 0x10);
    *(undefined4 *)(lVar23 + lVar24 + 4) = 0;
    *(undefined4 *)(lVar23 + lVar24) = 0;
    *(int *)(lVar23 + lVar24 + 8) = iVar22;
    *(int *)(lVar23 + lVar24 + 0xc) = iVar25;
    uVar28 = 1;
  }
  else {
    uVar12 = (*DAT_1011ccc98)(param_4);
    pdVar13 = (double *)(*DAT_1011ccca8)(uVar12);
    if (pdVar13 == (double *)0x0) {
      (*DAT_1011ccca0)(uVar12);
      goto LAB_1004bc95e;
    }
    puVar1 = param_1 + 0x46;
    lVar24 = 0;
    uVar20 = 0x10;
    do {
      uVar28 = uVar20;
      puVar15 = (uint *)*puVar1;
      lVar23 = (long)(int)puVar15[1];
      if (lVar23 <= (long)(uVar28 - 0x10)) {
        uVar26 = puVar15[2];
        if ((long)((ulong)uVar26 & 0x7fffffff) < (long)uVar28) {
          lVar18 = 8;
          uVar20 = uVar28 & 0xffffffff;
        }
        else {
          uVar27 = uVar26 & 0x7fffffff;
          uVar20 = (ulong)uVar27;
          lVar18 = 0;
          if (-1 < (int)uVar26) {
            bVar9 = (long)uVar28 < (long)(ulong)(uVar27 >> 1);
            uVar20 = (ulong)uVar27;
            if (bVar9 && (long)uVar28 < lVar23) {
              uVar20 = uVar28 & 0xffffffff;
            }
            lVar18 = (ulong)(bVar9 && (long)uVar28 < lVar23) << 3;
          }
        }
        FUN_1004beb50(puVar1,uVar28 & 0xffffffff,uVar20,lVar18);
        puVar15 = (uint *)*puVar1;
      }
      if (1 < *puVar15) {
        if ((puVar15[2] & 0x7fffffff) == 0) {
          puVar15 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar1 = puVar15;
        }
        else {
          FUN_1004beb50(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
          puVar15 = (uint *)*puVar1;
        }
      }
      iVar17 = (int)(*pdVar13 - (double)*(int *)(param_2 + 0x58));
      lVar23 = *(long *)(puVar15 + 4);
      *(int *)((long)puVar15 + lVar24 + lVar23) = iVar17;
      iVar19 = (int)(pdVar13[1] - (double)*(int *)(param_2 + 0x5c));
      *(int *)((long)puVar15 + lVar24 + 4 + lVar23) = iVar19;
      *(int *)((long)puVar15 + lVar24 + 8 + lVar23) = (int)((double)iVar17 + pdVar13[2]);
      *(int *)((long)puVar15 + lVar24 + 0xc + lVar23) = (int)((double)iVar19 + pdVar13[3]);
      pdVar13 = (double *)(*DAT_1011ccca8)(uVar12);
      lVar24 = lVar24 + 0x10;
      uVar20 = uVar28 + 1;
    } while (pdVar13 != (double *)0x0);
    uVar28 = uVar28 - 0xf;
    (*DAT_1011ccca0)(uVar12);
    uVar20 = extraout_RDX_00;
    if ((int)uVar28 == 0) goto LAB_1004bc95e;
  }
  local_40 = 0;
  local_3c = 0;
  puVar1 = param_1 + 0x47;
  iVar17 = *(int *)(param_1[0x47] + 4);
  uVar26 = (uint)uVar28;
  local_38 = iVar22;
  local_34 = iVar25;
  if (iVar17 < (int)uVar26) {
    uVar27 = *(uint *)(param_1[0x47] + 8);
    uVar10 = uVar27 & 0x7fffffff;
    lVar24 = 8;
    uVar20 = uVar28 & 0xffffffff;
    if ((int)uVar26 <= (int)uVar10) {
      lVar24 = 0;
      if (-1 < (int)uVar27) {
        bVar9 = (int)uVar26 < (int)(uVar10 >> 1);
        if (bVar9 && (int)uVar26 < iVar17) {
          uVar10 = uVar26;
        }
        lVar24 = (ulong)(bVar9 && (int)uVar26 < iVar17) << 3;
      }
      uVar20 = (ulong)uVar10;
    }
    FUN_1004bed20(puVar1,uVar28 & 0xffffffff,uVar20,lVar24);
    uVar20 = extraout_RDX_03;
  }
  if (0 < (int)uVar26) {
    puVar2 = param_1 + 0x46;
    lVar24 = 0;
    uVar28 = uVar28 & 0xffffffff;
    do {
      puVar15 = (uint *)*puVar1;
      if (1 < *puVar15) {
        if ((puVar15[2] & 0x7fffffff) == 0) {
          puVar15 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar1 = puVar15;
        }
        else {
          FUN_1004bed20(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
          puVar15 = (uint *)*puVar1;
        }
      }
      lVar23 = *(long *)(puVar15 + 4);
      puVar16 = (uint *)*puVar2;
      if (1 < *puVar16) {
        if ((puVar16[2] & 0x7fffffff) == 0) {
          puVar16 = (uint *)QArrayData::allocate(0x10,8,0,2);
          *puVar2 = puVar16;
        }
        else {
          FUN_1004beb50(puVar2,puVar16[1],puVar16[2] & 0x7fffffff,0);
          puVar16 = (uint *)*puVar2;
        }
      }
      iVar17 = param_3[4];
      lVar18 = *(long *)(puVar16 + 4);
      *(float *)((long)puVar15 + lVar24 + lVar23) =
           (float)((*(int *)((long)puVar16 + lVar24 + lVar18) * (iVar4 - iVar6)) / iVar22 + iVar17);
      iVar19 = param_3[5];
      *(float *)((long)puVar15 + lVar24 + 4 + lVar23) =
           (float)((*(int *)((long)puVar16 + lVar24 + 4 + lVar18) * (iVar5 - iVar7)) / iVar25 +
                  iVar19);
      *(float *)((long)puVar15 + lVar24 + 8 + lVar23) =
           (float)((*(int *)((long)puVar16 + lVar24 + 8 + lVar18) * (iVar4 - iVar6)) / iVar22 +
                  iVar17);
      iVar17 = *(int *)((long)puVar16 + lVar24 + 0xc + lVar18) * (iVar5 - iVar7);
      uVar20 = (long)iVar17 % (long)iVar25 & 0xffffffff;
      *(float *)((long)puVar15 + lVar24 + 0xc + lVar23) = (float)(iVar17 / iVar25 + iVar19);
      lVar24 = lVar24 + 0x10;
      uVar27 = (int)uVar28 - 1;
      uVar28 = (ulong)uVar27;
    } while (uVar27 != 0);
  }
  uVar14 = FUN_1002adb30(*param_1,*(undefined8 *)(param_2 + 0x18),uVar20);
  bVar3 = *(byte *)(param_3 + 2);
  local_46 = bVar3 & 1;
  local_47 = bVar3 >> 2 & 1;
  local_48 = bVar3 >> 1 & 1;
  local_45 = *(undefined1 *)(param_3 + 3);
  local_44 = *(undefined1 *)((long)param_3 + 0xd);
  local_43 = *(undefined1 *)((long)param_3 + 0xe);
  local_42 = *(undefined1 *)((long)param_3 + 0xf);
  uVar12 = *param_1;
  uVar11 = *param_3;
  uVar8 = param_3[1];
  puVar15 = (uint *)param_1[0x47];
  if (1 < *puVar15) {
    if ((puVar15[2] & 0x7fffffff) == 0) {
      puVar15 = (uint *)QArrayData::allocate(0x10,8,0,2);
      *puVar1 = puVar15;
    }
    else {
      FUN_1004bed20(puVar1,puVar15[1],puVar15[2] & 0x7fffffff,0);
      puVar15 = (uint *)*puVar1;
    }
  }
  lVar24 = *(long *)(puVar15 + 4);
  puVar16 = (uint *)param_1[0x46];
  if (1 < *puVar16) {
    puVar1 = param_1 + 0x46;
    if ((puVar16[2] & 0x7fffffff) == 0) {
      puVar16 = (uint *)QArrayData::allocate(0x10,8,0,2);
      *puVar1 = puVar16;
    }
    else {
      FUN_1004beb50(puVar1,puVar16[1],puVar16[2] & 0x7fffffff,0);
      puVar16 = (uint *)*puVar1;
    }
  }
  FUN_1002b0c50(uVar12,uVar11,uVar8,param_3 + 8,&local_40,(long)puVar15 + lVar24,
                (long)puVar16 + *(long *)(puVar16 + 4),uVar26,&local_48);
  FUN_1002b0fc0(*param_1,*(undefined8 *)(param_2 + 0x18));
  FUN_1002adb30(*param_1,uVar14);
LAB_1004bc95e:
  if (*(char *)(param_2 + 0x21) != '\0') {
    uVar11 = (*DAT_1011ccc38)();
    (*DAT_1011ccd18)(uVar11,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),1,0);
    if (*(int *)(param_2 + 0x10) != 0) {
      (*DAT_1011ccce0)(uVar11,*(undefined4 *)(param_2 + 8));
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}

