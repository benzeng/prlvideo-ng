
void FUN_100c14fa0(char *param_1,uint param_2,char *param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char *pcVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  bool bVar21;
  
  *param_1 = '\0';
  uVar14 = param_2;
  if (0x80 < (int)param_2) {
    uVar14 = 0x80;
  }
  if (param_4 < 1) {
    param_4 = 0x400;
  }
  if (0x400 < param_4) {
    param_4 = 0x400;
  }
  if (0 < (int)uVar14) {
    uVar15 = 0x80;
    if ((int)param_2 < 0x80) {
      uVar15 = (ulong)(param_2 - 1) + 1;
    }
    uVar19 = 0x7f;
    if ((int)param_2 < 0x80) {
      uVar19 = (ulong)(param_2 - 1);
    }
    uVar20 = 0;
    if (((uVar15 & 0x1ffffffe0) != 0) &&
       ((param_3 + uVar19 < param_1 || (uVar20 = 0, param_1 + uVar19 < param_3)))) {
      pcVar6 = param_1 + 0x10;
      pcVar12 = param_3 + 0x10;
      uVar19 = uVar15 & 0xffffffffffffffe0;
      do {
        uVar2 = *(undefined8 *)(pcVar12 + -8);
        uVar3 = *(undefined8 *)pcVar12;
        uVar4 = *(undefined8 *)(pcVar12 + 8);
        *(undefined8 *)(pcVar6 + -0x10) = *(undefined8 *)(pcVar12 + -0x10);
        *(undefined8 *)(pcVar6 + -8) = uVar2;
        *(undefined8 *)pcVar6 = uVar3;
        *(undefined8 *)(pcVar6 + 8) = uVar4;
        pcVar6 = pcVar6 + 0x20;
        pcVar12 = pcVar12 + 0x20;
        uVar19 = uVar19 - 0x20;
        uVar20 = uVar15 & 0x1ffffffe0;
      } while (uVar19 != 0);
    }
    if (uVar15 != uVar20) {
      uVar16 = ~param_2;
      uVar18 = 0xffffff7f;
      if (-0x82 < (int)uVar16) {
        uVar18 = uVar16;
      }
      iVar17 = (int)uVar20;
      if ((~uVar18 & 3) != 0) {
        uVar10 = 0xffffff7f;
        if (-0x82 < (int)uVar16) {
          uVar10 = uVar16;
        }
        iVar11 = -(~uVar10 & 3);
        do {
          param_1[uVar20] = param_3[uVar20];
          uVar20 = uVar20 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 != 0);
      }
      if (2 < (-2 - uVar18) - iVar17) {
        param_3 = param_3 + uVar20 + 3;
        pcVar6 = param_1 + uVar20 + 3;
        uVar18 = 0xffffff7f;
        if (-0x82 < (int)uVar16) {
          uVar18 = uVar16;
        }
        iVar17 = (2 - uVar18) - ((int)uVar20 + 3);
        do {
          pcVar6[-3] = param_3[-3];
          pcVar6[-2] = param_3[-2];
          pcVar6[-1] = param_3[-1];
          *pcVar6 = *param_3;
          param_3 = param_3 + 4;
          pcVar6 = pcVar6 + 4;
          iVar17 = iVar17 + -4;
        } while (iVar17 != 0);
      }
    }
    if (0x7f < (int)uVar14) goto LAB_100c151e7;
  }
  cVar5 = param_1[(long)(int)uVar14 + -1];
  lVar8 = 0x80;
  if ((int)param_2 < 0x80) {
    lVar8 = (long)(int)param_2;
  }
  uVar18 = 0xffffff7f;
  if (-0x82 < (int)~param_2) {
    uVar18 = ~param_2;
  }
  iVar17 = 0x80;
  if (0x7f < (int)-uVar18) {
    iVar17 = -uVar18;
  }
  bVar21 = (uVar18 + 1 + iVar17 & 1) != 0;
  if (bVar21) {
    cVar5 = (&DAT_101da8090)[(byte)(cVar5 + *param_1)];
    param_1[lVar8] = cVar5;
    uVar14 = uVar14 + 1;
    lVar8 = lVar8 + 1;
  }
  if (uVar18 + iVar17 != 0) {
    pcVar6 = param_1 + lVar8 + 1;
    pbVar13 = (byte *)(param_1 + (ulong)bVar21 + 1);
    do {
      bVar7 = (&DAT_101da8090)[(byte)(cVar5 + pbVar13[-1])];
      pcVar6[-1] = bVar7;
      cVar5 = (&DAT_101da8090)[(uint)bVar7 + (uint)*pbVar13 & 0xff];
      *pcVar6 = cVar5;
      uVar14 = uVar14 + 2;
      pcVar6 = pcVar6 + 2;
      pbVar13 = pbVar13 + 2;
    } while ((int)uVar14 < 0x80);
  }
LAB_100c151e7:
  iVar17 = param_4 + 7 >> 3;
  lVar8 = -(long)iVar17;
  uVar15 = lVar8 + 0x80;
  bVar7 = (&DAT_101da8090)
          [(uint)(byte)param_1[0x80 - (long)iVar17] & 0xffU >> (-(char)param_4 & 7U)];
  param_1[uVar15] = bVar7;
  lVar9 = 0x7f;
  if ((int)uVar15 != 0) {
    if ((0x80U - iVar17 & 1) != 0) {
      bVar7 = (&DAT_101da8090)[(byte)(bVar7 ^ param_1[(int)(lVar8 + 0x7fU) + iVar17])];
      param_1[lVar8 + 0x7f] = bVar7;
      uVar15 = lVar8 + 0x7fU & 0xffffffff;
    }
    lVar9 = 0x7f;
    if (iVar17 != 0x7f) {
      iVar11 = (int)uVar15;
      lVar8 = 0;
      lVar9 = 0x7f;
      do {
        iVar1 = (int)lVar8;
        bVar7 = (&DAT_101da8090)[(byte)(bVar7 ^ param_1[iVar11 + -1 + iVar17 + iVar1])];
        param_1[iVar11 + -1 + iVar1] = bVar7;
        bVar7 = (&DAT_101da8090)[(byte)(bVar7 ^ param_1[iVar11 + -2 + iVar17 + iVar1])];
        param_1[lVar8 + (long)iVar11 + -2] = bVar7;
        lVar8 = lVar8 + -2;
      } while (-iVar11 != (int)lVar8);
    }
  }
  do {
    *(uint *)(param_1 + lVar9 * 2 + -2) = (uint)CONCAT11(param_1[lVar9],param_1[lVar9 + -1]);
    *(uint *)(param_1 + lVar9 * 2 + -6) = (uint)CONCAT11(param_1[lVar9 + -2],param_1[lVar9 + -3]);
    lVar9 = lVar9 + -4;
  } while (-1 < lVar9);
  return;
}

