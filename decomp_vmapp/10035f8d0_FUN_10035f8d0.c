
void FUN_10035f8d0(long param_1,long param_2,uint param_3,undefined4 param_4,undefined8 param_5,
                  long param_6,long param_7,uint param_8,uint param_9,uint param_10,long param_11)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 in_stack_ffffffffffffff68;
  long lVar25;
  undefined4 uVar26;
  undefined8 in_stack_ffffffffffffff70;
  long lVar27;
  undefined4 uVar28;
  
  uVar26 = (undefined4)((ulong)in_stack_ffffffffffffff68 >> 0x20);
  uVar28 = (undefined4)((ulong)in_stack_ffffffffffffff70 >> 0x20);
  lVar11 = param_6;
  uVar9 = param_8;
  lVar13 = param_7;
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x9b8 + (ulong)param_10 * 0x8f0) == 0) {
    cVar2 = *(char *)(*(long *)(param_1 + 0x38) + 0x870);
    FUN_100384680(*(undefined8 *)(param_1 + 0x28));
    if (cVar2 != '\0') goto LAB_10035f956;
    bVar8 = false;
joined_r0x00010035f98f:
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      lVar25 = lVar13;
      lVar27 = param_11;
      FUN_100389f90(*(undefined8 *)(param_1 + 0x20),param_2,lVar11,param_3,param_4,param_5,lVar13,
                    param_11);
      uVar26 = (undefined4)((ulong)lVar25 >> 0x20);
      uVar28 = (undefined4)((ulong)lVar27 >> 0x20);
      lVar11 = lVar11 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
    (*DAT_1011c5d48)();
    if (!bVar8) goto LAB_10035fc82;
  }
  else {
    FUN_100384680(*(undefined8 *)(param_1 + 0x28));
LAB_10035f956:
    if (((param_9 & 1) == 0) && (bVar8 = true, *(char *)(param_1 + 0x10) == '\0'))
    goto joined_r0x00010035f98f;
    (*DAT_1011c5d48)();
  }
  uVar9 = 2;
  if ((*(uint *)(param_11 + 0x10) & 0x10000000) != 0) {
    uVar9 = *(uint *)(param_11 + 0x10) >> 0x1c & 2;
  }
  uVar17 = 0;
  uVar10 = (ulong)param_3;
  if ((*(ushort *)(param_2 + 0xb0) & 1) != 0) {
    uVar10 = uVar17;
  }
  if (uVar10 < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3)) {
    uVar17 = *(ulong *)(*(long *)(param_2 + 0x40) + uVar10 * 8);
  }
  iVar3 = *(int *)(uVar17 + 0x14);
  uVar14 = *(uint *)(param_2 + 0xc) >> ((byte)param_4 & 0x1f);
  fVar24 = DAT_100b39678;
  if (uVar14 != 0) {
    fVar24 = (float)uVar14;
  }
  uVar14 = *(uint *)(param_2 + 0x10) >> ((byte)param_4 & 0x1f);
  fVar23 = DAT_100b39678;
  if (uVar14 != 0) {
    fVar23 = (float)uVar14;
  }
  uVar10 = (ulong)param_8;
  if ((ulong)(*(long *)(param_1 + 0x68) - *(long *)(param_1 + 0x60) >> 4) < uVar10) {
    FUN_100365d90((long *)(param_1 + 0x60));
    lVar11 = *(long *)(param_1 + 0x80);
    uVar15 = lVar11 - *(long *)(param_1 + 0x78) >> 4;
    if (uVar15 < uVar10) {
      FUN_100365f00(param_1 + 0x78);
    }
    else if ((uVar10 < uVar15) &&
            (lVar13 = *(long *)(param_1 + 0x78) + uVar10 * 0x10, lVar11 != lVar13)) {
      *(ulong *)(param_1 + 0x80) = (~((lVar11 + -0x10) - lVar13) & 0xfffffffffffffff0U) + lVar11;
    }
  }
  if (param_8 != 0) {
    lVar11 = 0;
    uVar14 = param_8;
    do {
      fVar18 = (float)*(uint *)(param_6 + 4 + lVar11);
      fVar19 = (float)*(uint *)(param_6 + 0xc + lVar11);
      if ((*(byte *)(uVar17 + 0xac) & 4) != 0) {
        fVar18 = fVar23 - fVar18;
        fVar19 = fVar23 - fVar19;
      }
      auVar21._0_4_ = (float)*(uint *)(param_6 + lVar11);
      lVar13 = *(long *)(param_1 + 0x60);
      if (iVar3 == 0x84f5) {
        *(float *)(lVar13 + lVar11) = auVar21._0_4_;
        *(float *)(lVar13 + 4 + lVar11) = fVar18;
        *(float *)(lVar13 + 8 + lVar11) = (float)*(uint *)(param_6 + 8 + lVar11);
        *(float *)(lVar13 + 0xc + lVar11) = fVar19;
      }
      else {
        fVar22 = (float)*(uint *)(param_6 + 8 + lVar11);
        auVar20._4_4_ = fVar22;
        auVar20._0_4_ = auVar21._0_4_;
        auVar20._8_4_ = fVar22;
        auVar20._12_4_ = fVar19;
        auVar21._8_8_ = auVar20._8_8_;
        auVar21._4_4_ = fVar18;
        auVar4._4_4_ = fVar23;
        auVar4._0_4_ = fVar24;
        auVar4._8_4_ = fVar24;
        auVar4._12_4_ = fVar23;
        auVar21 = divps(auVar21,auVar4);
        *(undefined1 (*) [16])(lVar13 + lVar11) = auVar21;
      }
      puVar16 = (undefined4 *)(param_7 + lVar11);
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar7 = puVar16[3];
      puVar1 = (undefined4 *)(*(long *)(param_1 + 0x78) + lVar11);
      *puVar1 = *puVar16;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      lVar11 = lVar11 + 0x10;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  uVar9 = (param_9 & 1) << 4 | (param_9 & 2) * 2 + 4 | uVar9;
  uVar14 = *(uint *)(uVar17 + 0x1c);
  if ((int)uVar14 < 0x66) {
    if (uVar14 < 9) {
      uVar12 = 0x10a;
LAB_10035fc4e:
      if ((uVar12 >> (uVar14 & 0x1f) & 1) != 0) {
        uVar9 = uVar9 | 1;
        *(byte *)(uVar17 + 0x2c) = *(byte *)(uVar17 + 0x2c) | 3;
      }
    }
  }
  else {
    uVar14 = uVar14 - 0x66;
    if (uVar14 < 0xd) {
      uVar12 = 0x1015;
      goto LAB_10035fc4e;
    }
  }
  FUN_1002b0360(*(undefined8 *)(param_1 + 0x38),param_10,*(undefined4 *)(uVar17 + 0xc),
                *(undefined4 *)(uVar17 + 0x14),*(undefined8 *)(param_1 + 0x60),
                *(undefined8 *)(param_1 + 0x78),CONCAT44(uVar26,param_8),CONCAT44(uVar28,uVar9));
LAB_10035fc82:
  if (param_8 != 0) {
    puVar16 = (undefined4 *)(param_7 + 0xc);
    do {
      FUN_1002ac6b0(*(undefined8 *)(param_1 + 0x38),param_10,puVar16[-3],puVar16[-2],puVar16[-1],
                    *puVar16);
      puVar16 = puVar16 + 4;
      param_8 = param_8 - 1;
    } while (param_8 != 0);
  }
  return;
}

