
void FUN_1003dbde0(long param_1,float *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                  uint param_7,uint param_8)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = DAT_100b44ca0;
  fVar18 = DAT_100b39678;
  iVar13 = param_7 * 2;
  uVar12 = 0;
  if ((param_7 & 1) != 0) {
    iVar10 = *(byte *)(param_1 + (ulong)(((param_5 & 0xff) - 2) + iVar13)) - 0x80;
    iVar16 = *(byte *)(param_1 + (ulong)(((param_6 & 0xff) - 2) + iVar13)) - 0x80;
    iVar6 = (uint)*(byte *)(param_1 + (ulong)(((param_4 & 0xff) - 2) + iVar13)) * 0x12a;
    iVar14 = iVar16 * 0x199 + -0x1220 + iVar6 >> 8;
    iVar16 = iVar16 * -0xd0 + iVar6 + -0x1220 + iVar10 * -100 >> 8;
    iVar6 = iVar10 * 0x204 + -0x1220 + iVar6 >> 8;
    iVar10 = 0;
    if (iVar14 < 0) {
      iVar14 = iVar10;
    }
    if (iVar16 < 0) {
      iVar16 = iVar10;
    }
    if (iVar6 < 0) {
      iVar6 = iVar10;
    }
    fVar19 = DAT_100b39678;
    if (iVar14 < 0xff) {
      fVar19 = (float)iVar14 / DAT_100b44ca0;
    }
    fVar20 = DAT_100b39678;
    if (iVar16 < 0xff) {
      fVar20 = (float)iVar16 / DAT_100b44ca0;
    }
    param_2[3] = 1.0;
    param_2[2] = fVar19;
    param_2[1] = fVar20;
    if (iVar6 < 0xff) {
      fVar18 = (float)iVar6 / fVar1;
    }
    *param_2 = fVar18;
    iVar13 = iVar13 + 2;
    param_8 = param_8 - 1;
    uVar12 = 1;
  }
  fVar1 = DAT_100b44ca0;
  fVar18 = DAT_100b39678;
  uVar2 = param_8 >> 1;
  if (uVar2 != 0) {
    pfVar4 = param_2 + uVar12 * 4 + 7;
    uVar5 = (param_3 & 0xff) + iVar13;
    uVar7 = (param_5 & 0xff) + iVar13;
    uVar15 = (param_6 & 0xff) + iVar13;
    uVar17 = (param_4 & 0xff) + iVar13;
    uVar9 = 0;
    do {
      iVar3 = *(byte *)(param_1 + (ulong)uVar7) - 0x80;
      iVar10 = *(byte *)(param_1 + (ulong)uVar15) - 0x80;
      iVar6 = (uint)*(byte *)(param_1 + (ulong)uVar5) * 0x12a;
      iVar8 = iVar10 * 0x199;
      iVar14 = iVar8 + -0x1220 + iVar6 >> 8;
      iVar11 = iVar3 * -100;
      iVar10 = iVar10 * -0xd0;
      iVar16 = iVar11 + -0x1220 + iVar6 + iVar10 >> 8;
      iVar3 = iVar3 * 0x204;
      iVar6 = iVar3 + -0x1220 + iVar6 >> 8;
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      fVar19 = fVar18;
      if (iVar14 < 0xff) {
        fVar19 = (float)iVar14 / fVar1;
      }
      fVar20 = fVar18;
      if (iVar16 < 0xff) {
        fVar20 = (float)iVar16 / fVar1;
      }
      pfVar4[-4] = 1.0;
      pfVar4[-5] = fVar19;
      pfVar4[-6] = fVar20;
      fVar19 = fVar18;
      if (iVar6 < 0xff) {
        fVar19 = (float)iVar6 / fVar1;
      }
      pfVar4[-7] = fVar19;
      iVar6 = (uint)*(byte *)(param_1 + (ulong)uVar17) * 0x12a;
      iVar14 = iVar6 + -0x1220 + iVar8 >> 8;
      iVar16 = iVar6 + -0x1220 + iVar10 + iVar11 >> 8;
      iVar6 = iVar6 + -0x1220 + iVar3 >> 8;
      if (iVar14 < 0) {
        iVar14 = 0;
      }
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      fVar19 = fVar18;
      if (iVar14 < 0xff) {
        fVar19 = (float)iVar14 / fVar1;
      }
      fVar20 = fVar18;
      if (iVar16 < 0xff) {
        fVar20 = (float)iVar16 / fVar1;
      }
      *pfVar4 = 1.0;
      pfVar4[-1] = fVar19;
      pfVar4[-2] = fVar20;
      fVar19 = fVar18;
      if (iVar6 < 0xff) {
        fVar19 = (float)iVar6 / fVar1;
      }
      pfVar4[-3] = fVar19;
      uVar9 = uVar9 + 1;
      pfVar4 = pfVar4 + 8;
      uVar5 = uVar5 + 4;
      uVar7 = uVar7 + 4;
      uVar15 = uVar15 + 4;
      uVar17 = uVar17 + 4;
    } while (uVar9 < uVar2);
    iVar13 = iVar13 + uVar2 * 4;
    uVar12 = (ulong)((uVar2 * 2 - 2 | (uint)uVar12) + 2);
  }
  fVar1 = DAT_100b44ca0;
  fVar18 = DAT_100b39678;
  if ((param_8 & 1) != 0) {
    iVar16 = *(byte *)(param_1 + (ulong)((param_5 & 0xff) + iVar13)) - 0x80;
    iVar14 = *(byte *)(param_1 + (ulong)((param_6 & 0xff) + iVar13)) - 0x80;
    iVar6 = (uint)*(byte *)(param_1 + (ulong)((param_3 & 0xff) + iVar13)) * 0x12a;
    iVar13 = iVar14 * 0x199 + -0x1220 + iVar6 >> 8;
    iVar14 = iVar14 * -0xd0 + iVar6 + -0x1220 + iVar16 * -100 >> 8;
    iVar16 = iVar16 * 0x204 + -0x1220 + iVar6 >> 8;
    iVar6 = 0;
    if (iVar13 < 0) {
      iVar13 = iVar6;
    }
    if (iVar14 < 0) {
      iVar14 = iVar6;
    }
    if (iVar16 < 0) {
      iVar16 = iVar6;
    }
    fVar19 = DAT_100b39678;
    if (iVar13 < 0xff) {
      fVar19 = (float)iVar13 / DAT_100b44ca0;
    }
    fVar20 = DAT_100b39678;
    if (iVar14 < 0xff) {
      fVar20 = (float)iVar14 / DAT_100b44ca0;
    }
    param_2[uVar12 * 4 + 3] = 1.0;
    param_2[uVar12 * 4 + 2] = fVar19;
    param_2[uVar12 * 4 + 1] = fVar20;
    if (iVar16 < 0xff) {
      fVar18 = (float)iVar16 / fVar1;
    }
    param_2[uVar12 * 4] = fVar18;
  }
  return;
}

