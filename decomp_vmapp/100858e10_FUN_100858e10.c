
undefined8 FUN_100858e10(ulong *param_1,ulong *param_2,int *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  ulong uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong *local_60;
  
  iVar11 = *param_3;
  if (iVar11 == 0) {
    FUN_10084bbb0(param_1,0);
    return 1;
  }
  iVar15 = (int)param_2[1];
  if (param_2 == param_1) goto LAB_100858f21;
  if (*(int *)((long)param_1 + 0xc) < iVar15) {
    lVar8 = FUN_10084b900();
    if (lVar8 == 0) {
      return 0;
    }
    iVar15 = (int)param_2[1];
  }
  if (0 < iVar15) {
    uVar13 = *param_2;
    uVar21 = *param_1;
    uVar9 = (ulong)iVar15;
    uVar17 = 0;
    if (iVar15 != 0) {
      uVar17 = 0;
      if ((uVar9 & 0xfffffffffffffffc) != 0) {
        if ((uVar13 + (uVar9 - 1) * 8 < uVar21) || (uVar17 = 0, uVar21 + (uVar9 - 1) * 8 < uVar13))
        {
          puVar16 = (undefined8 *)(uVar21 + 0x10);
          puVar14 = (undefined8 *)(uVar13 + 0x10);
          uVar12 = uVar9 & 0xfffffffffffffffc;
          do {
            uVar3 = puVar14[-1];
            uVar4 = *puVar14;
            uVar5 = puVar14[1];
            puVar16[-2] = puVar14[-2];
            puVar16[-1] = uVar3;
            *puVar16 = uVar4;
            puVar16[1] = uVar5;
            puVar16 = puVar16 + 4;
            puVar14 = puVar14 + 4;
            uVar12 = uVar12 - 4;
            uVar17 = uVar9 & 0xfffffffffffffffc;
          } while (uVar12 != 0);
        }
      }
      if (uVar9 == uVar17) goto LAB_100858ef0;
    }
    do {
      *(undefined8 *)(uVar21 + uVar17 * 8) = *(undefined8 *)(uVar13 + uVar17 * 8);
      uVar17 = uVar17 + 1;
    } while ((long)uVar17 < (long)uVar9);
  }
LAB_100858ef0:
  *(int *)(param_1 + 1) = iVar15;
  iVar11 = *param_3;
LAB_100858f21:
  local_60 = param_1 + 1;
  param_1 = (ulong *)*param_1;
  iVar10 = (int)(((uint)(iVar11 >> 0x1f) >> 0x1a) + iVar11) >> 6;
  uVar7 = iVar15 - 1;
  uVar13 = (ulong)uVar7;
  if (iVar10 < (int)uVar7) {
    uVar13 = (ulong)(int)uVar7;
    do {
      uVar21 = param_1[uVar13];
      if (uVar21 != 0) {
        do {
          param_1[uVar13] = 0;
          iVar19 = param_3[1];
          piVar6 = param_3 + 2;
          while (iVar19 != 0) {
            iVar19 = iVar11 - iVar19;
            iVar20 = (int)uVar13 - ((int)(((uint)(iVar19 >> 0x1f) >> 0x1a) + iVar19) >> 6);
            param_1[iVar20] = param_1[iVar20] ^ uVar21 >> ((byte)iVar19 & 0x3f);
            if (iVar19 % 0x40 != 0) {
              param_1[iVar20 + -1] =
                   param_1[iVar20 + -1] ^ uVar21 << (0x40U - (char)(iVar19 % 0x40) & 0x3f);
            }
            iVar19 = *piVar6;
            piVar6 = piVar6 + 1;
          }
          param_1[uVar13 - (long)iVar10] =
               param_1[uVar13 - (long)iVar10] ^ uVar21 >> ((byte)iVar11 & 0x3f);
          if (iVar11 % 0x40 != 0) {
            param_1[(uVar13 - (long)iVar10) + -1] =
                 param_1[(uVar13 - (long)iVar10) + -1] ^
                 uVar21 << (0x40U - (char)(iVar11 % 0x40) & 0x3f);
          }
          uVar21 = param_1[uVar13];
        } while (uVar21 != 0);
      }
      uVar13 = uVar13 - 1;
    } while (iVar10 < (int)uVar13);
  }
  if ((int)uVar13 == iVar10) {
    bVar2 = (byte)(iVar11 % 0x40);
    bVar18 = 0x40 - bVar2;
    uVar13 = param_1[iVar10];
    uVar21 = uVar13 >> (bVar2 & 0x3f);
    if (iVar11 % 0x40 == 0) {
      if (uVar21 != 0) {
        do {
          param_1[iVar10] = 0;
          *param_1 = *param_1 ^ uVar21;
          iVar11 = param_3[1];
          piVar6 = param_3 + 2;
          while (iVar11 != 0) {
            iVar19 = (int)(((uint)(iVar11 >> 0x1f) >> 0x1a) + iVar11) >> 6;
            bVar2 = (byte)(iVar11 % 0x40);
            param_1[iVar19] = param_1[iVar19] ^ uVar21 << (bVar2 & 0x3f);
            uVar13 = uVar21 >> (0x40 - bVar2 & 0x3f);
            if ((iVar11 != (iVar11 / 0x40) * 0x40) && (uVar13 != 0)) {
              param_1[iVar19 + 1] = param_1[iVar19 + 1] ^ uVar13;
            }
            iVar11 = *piVar6;
            piVar6 = piVar6 + 1;
          }
          uVar21 = param_1[iVar10];
        } while (uVar21 != 0);
      }
    }
    else if (uVar21 != 0) {
      do {
        param_1[iVar10] = (uVar13 << (bVar18 & 0x3f)) >> (bVar18 & 0x3f);
        *param_1 = *param_1 ^ uVar21;
        iVar19 = param_3[1];
        piVar6 = param_3 + 2;
        while (iVar19 != 0) {
          iVar20 = (int)(((uint)(iVar19 >> 0x1f) >> 0x1a) + iVar19) >> 6;
          bVar2 = (byte)(iVar19 % 0x40);
          param_1[iVar20] = param_1[iVar20] ^ uVar21 << (bVar2 & 0x3f);
          uVar13 = uVar21 >> (0x40 - bVar2 & 0x3f);
          if ((iVar19 != (iVar19 / 0x40) * 0x40) && (uVar13 != 0)) {
            param_1[iVar20 + 1] = param_1[iVar20 + 1] ^ uVar13;
          }
          iVar19 = *piVar6;
          piVar6 = piVar6 + 1;
        }
        uVar13 = param_1[iVar10];
        uVar21 = uVar13 >> ((byte)(iVar11 % 0x40) & 0x3f);
      } while (uVar21 != 0);
    }
  }
  if (0 < iVar15) {
    param_1 = param_1 + (int)uVar7;
    do {
      iVar11 = iVar15;
      if (*param_1 != 0) break;
      param_1 = param_1 + -1;
      iVar11 = iVar15 + -1;
      bVar1 = 1 < iVar15;
      iVar15 = iVar11;
    } while (bVar1);
    *(int *)local_60 = iVar11;
  }
  return 1;
}

