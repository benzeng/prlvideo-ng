
/* WARNING: Type propagation algorithm not settling */

void FUN_1003d14f0(undefined4 *param_1,long param_2,uint param_3,int param_4,ulong param_5,
                  uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  ulong uVar11;
  byte bVar16;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  bool bVar34;
  int local_d8;
  int local_d0;
  int local_b8;
  uint local_94;
  float local_78 [5];
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  long local_38;
  
  fVar9 = DAT_100b44ca0;
  fVar8 = DAT_100b3f6f0;
  fVar7 = DAT_100b39670;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar25 = (uint)param_5;
  switch(*param_1) {
  case 0x65:
  case 0x66:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar24 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 2;
      uVar32 = -uVar3;
      uVar12 = uVar25 - uVar4;
      uVar10 = 0xfffffffc;
      if (0xfffffffc < uVar12) {
        uVar10 = uVar12;
      }
      iVar21 = 0;
      uVar29 = 0;
      uVar12 = uVar3 - 1;
      local_d0 = uVar3 + 3;
      do {
        uVar28 = 3;
        if (3 < uVar12) {
          uVar28 = uVar12;
        }
        uVar18 = (uVar3 - 1) + iVar21 * -4;
        if (uVar18 < 4) {
          uVar18 = 3;
        }
        iVar22 = -uVar32;
        if (uVar32 < 0xfffffffd) {
          iVar22 = 4;
        }
        uVar1 = *(ushort *)(lVar6 + (ulong)uVar24);
        uVar2 = *(ushort *)(lVar6 + (ulong)(uVar24 + 2));
        local_78[2] = (float)(uVar1 >> 8 & 0xf8) / fVar9;
        local_78[1] = (float)(uVar1 >> 3 & 0xfc) / fVar9;
        local_78[0] = (float)((uVar1 & 0x1f) << 3) / fVar9;
        local_60 = (float)(uVar2 >> 8 & 0xf8) / fVar9;
        local_64 = (float)(uVar2 >> 3 & 0xfc) / fVar9;
        local_78[4] = (float)((uVar2 & 0x1f) << 3) / fVar9;
        local_3c = 0x3f800000;
        local_4c = 0x3f800000;
        local_5c = 0x3f800000;
        local_78[3] = 1.0;
        if ((uint)uVar2 < (uint)uVar1) {
          local_50 = ((local_78[2] + local_78[2] + local_60) / fVar8) / fVar9;
          local_54 = ((local_78[1] + local_78[1] + local_64) / fVar8) / fVar9;
          local_58 = ((local_78[0] + local_78[0] + local_78[4]) / fVar8) / fVar9;
          local_40 = ((local_60 + local_60 + local_78[2]) / fVar8) / fVar9;
          local_44 = ((local_64 + local_64 + local_78[1]) / fVar8) / fVar9;
          local_48 = ((local_78[4] + local_78[4] + local_78[0]) / fVar8) / fVar9;
        }
        else {
          local_50 = ((local_78[2] + local_60) * fVar7) / fVar9;
          local_54 = ((local_78[1] + local_64) * fVar7) / fVar9;
          local_58 = ((local_78[0] + local_78[4]) * fVar7) / fVar9;
          local_40 = 0.0;
          local_3c = 0;
          local_44 = 0.0;
          local_48 = 0.0;
        }
        uVar27 = uVar24 + 4;
        iVar14 = 0;
        uVar20 = (uint)uVar29;
        if (uVar25 < uVar4) {
          iVar14 = 0;
          do {
            uVar31 = (uint)uVar29;
            if (uVar20 < uVar3) {
              bVar16 = *(byte *)(lVar6 + (ulong)uVar27);
              bVar34 = ((uVar3 + 3) - uVar18 & 1) != 0;
              uVar17 = uVar31;
              if (bVar34) {
                uVar5 = *(undefined8 *)(local_78 + (ulong)(bVar16 & 3) * 4);
                *(undefined8 *)(param_2 + 8 + uVar29 * 0x10) =
                     *(undefined8 *)(local_78 + (ulong)(bVar16 & 3) * 4 + 2);
                *(undefined8 *)(param_2 + uVar29 * 0x10) = uVar5;
                bVar16 = bVar16 >> 2;
                uVar17 = uVar31 + 1;
              }
              uVar29 = (ulong)bVar16;
              if (uVar3 + 2 + iVar21 * -4 != uVar18) {
                iVar26 = (local_d0 - uVar28) - (uint)bVar34;
                do {
                  uVar13 = uVar17 + 1;
                  uVar15 = (ulong)((uint)uVar29 & 3);
                  uVar5 = *(undefined8 *)(local_78 + uVar15 * 4);
                  *(undefined8 *)(param_2 + 8 + (ulong)uVar17 * 0x10) =
                       *(undefined8 *)(local_78 + uVar15 * 4 + 2);
                  *(undefined8 *)(param_2 + (ulong)uVar17 * 0x10) = uVar5;
                  uVar17 = uVar17 + 2;
                  lVar30 = (ulong)uVar13 * 0x10;
                  uVar15 = (ulong)((uint)(uVar29 >> 2) & 3);
                  uVar5 = *(undefined8 *)(local_78 + uVar15 * 4);
                  *(undefined8 *)(param_2 + 8 + lVar30) = *(undefined8 *)(local_78 + uVar15 * 4 + 2)
                  ;
                  *(undefined8 *)(param_2 + lVar30) = uVar5;
                  uVar29 = uVar29 >> 4;
                  iVar26 = iVar26 + -2;
                } while (iVar26 != 0);
              }
              uVar31 = uVar31 + iVar22;
              iVar26 = iVar22;
            }
            else {
              iVar26 = 0;
            }
            uVar27 = uVar27 + 1;
            uVar29 = (ulong)(uVar31 + ((param_3 >> 2) - iVar26));
            iVar14 = iVar14 + 1;
          } while (iVar14 != -uVar10);
          uVar27 = uVar24 + (4 - uVar10);
          iVar14 = -uVar10;
        }
        uVar24 = (4 - iVar14) + uVar27;
        uVar20 = uVar20 + 4;
        uVar29 = (ulong)uVar20;
        uVar32 = uVar32 + 4;
        iVar21 = iVar21 + 1;
        local_d0 = local_d0 + -4;
        uVar12 = uVar12 - 4;
      } while (uVar20 < param_6);
    }
    break;
  case 0x67:
  case 0x68:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar24 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar32 = -uVar3;
      uVar12 = uVar25 - uVar4;
      uVar10 = 0xfffffffc;
      if (0xfffffffc < uVar12) {
        uVar10 = uVar12;
      }
      iVar21 = uVar3 + 3;
      uVar28 = uVar3 - 1;
      uVar12 = 0;
      do {
        uVar18 = 3;
        if (3 < uVar28) {
          uVar18 = uVar28;
        }
        iVar22 = -uVar32;
        if (uVar32 < 0xfffffffd) {
          iVar22 = 4;
        }
        uVar29 = *(ulong *)(lVar6 + (ulong)uVar24);
        uVar1 = *(ushort *)(lVar6 + (ulong)(uVar24 + 8));
        uVar2 = *(ushort *)(lVar6 + (ulong)(uVar24 + 10));
        local_78[2] = (float)(uVar1 >> 8 & 0xf8) / fVar9;
        local_78[1] = (float)(uVar1 >> 3 & 0xfc) / fVar9;
        local_78[0] = (float)((uVar1 & 0x1f) << 3) / fVar9;
        local_60 = (float)(uVar2 >> 8 & 0xf8) / fVar9;
        local_64 = (float)(uVar2 >> 3 & 0xfc) / fVar9;
        local_78[4] = (float)((uVar2 & 0x1f) << 3) / fVar9;
        local_3c = 0x3f800000;
        local_4c = 0x3f800000;
        local_5c = 0x3f800000;
        local_78[3] = 1.0;
        if ((uint)uVar2 < (uint)uVar1) {
          local_50 = ((local_78[2] + local_78[2] + local_60) / fVar8) / fVar9;
          local_54 = ((local_78[1] + local_78[1] + local_64) / fVar8) / fVar9;
          local_58 = ((local_78[0] + local_78[0] + local_78[4]) / fVar8) / fVar9;
          local_40 = ((local_60 + local_60 + local_78[2]) / fVar8) / fVar9;
          local_44 = ((local_64 + local_64 + local_78[1]) / fVar8) / fVar9;
          local_48 = ((local_78[4] + local_78[4] + local_78[0]) / fVar8) / fVar9;
        }
        else {
          local_50 = ((local_78[2] + local_60) * fVar7) / fVar9;
          local_54 = ((local_78[1] + local_64) * fVar7) / fVar9;
          local_58 = ((local_78[0] + local_78[4]) * fVar7) / fVar9;
          local_40 = 0.0;
          local_3c = 0;
          local_44 = 0.0;
          local_48 = 0.0;
        }
        uVar20 = uVar24 + 0xc;
        iVar14 = 0;
        if (uVar25 < uVar4) {
          iVar14 = 0;
          uVar27 = uVar12;
          do {
            if (uVar12 < uVar3) {
              uVar17 = (uint)*(byte *)(lVar6 + (ulong)uVar20);
              iVar26 = iVar21 - uVar18;
              uVar31 = uVar27;
              do {
                uVar11 = (ulong)uVar31;
                uVar15 = (ulong)(uVar17 & 3);
                local_78[uVar15 * 4 + 3] = (float)((uVar29 & 0xf) << 4);
                uVar31 = uVar31 + 1;
                uVar5 = *(undefined8 *)(local_78 + uVar15 * 4);
                *(undefined8 *)(param_2 + 8 + uVar11 * 0x10) =
                     *(undefined8 *)(local_78 + uVar15 * 4 + 2);
                *(undefined8 *)(param_2 + uVar11 * 0x10) = uVar5;
                uVar29 = uVar29 >> 4;
                uVar17 = uVar17 >> 2;
                iVar26 = iVar26 + -1;
              } while (iVar26 != 0);
              uVar27 = uVar27 + iVar22;
              iVar26 = iVar22;
            }
            else {
              iVar26 = 0;
            }
            uVar20 = uVar20 + 1;
            uVar27 = uVar27 + ((param_3 >> 2) - iVar26);
            iVar14 = iVar14 + 1;
          } while (iVar14 != -uVar10);
          uVar20 = uVar24 + (0xc - uVar10);
          iVar14 = -uVar10;
        }
        uVar24 = (4 - iVar14) + uVar20;
        uVar12 = uVar12 + 4;
        uVar32 = uVar32 + 4;
        iVar21 = iVar21 + -4;
        uVar28 = uVar28 - 4;
      } while (uVar12 < param_6);
    }
    break;
  case 0x69:
  case 0x6a:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar32 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar24 = -uVar3;
      uVar12 = uVar25 - uVar4;
      uVar10 = 0xfffffffc;
      if (0xfffffffc < uVar12) {
        uVar10 = uVar12;
      }
      iVar21 = uVar3 + 3;
      uVar12 = uVar3 - 1;
      uVar29 = 0;
      do {
        uVar18 = (uint)uVar29;
        uVar28 = 3;
        if (3 < uVar12) {
          uVar28 = uVar12;
        }
        iVar22 = -uVar24;
        if (uVar24 < 0xfffffffd) {
          iVar22 = 4;
        }
        uVar15 = *(ulong *)(lVar6 + (ulong)uVar32);
        uVar1 = *(ushort *)(lVar6 + (ulong)(uVar32 + 8));
        uVar2 = *(ushort *)(lVar6 + (ulong)(uVar32 + 10));
        local_78[2] = (float)(uVar1 >> 8 & 0xf8) / fVar9;
        local_78[1] = (float)(uVar1 >> 3 & 0xfc) / fVar9;
        local_78[0] = (float)((uVar1 & 0x1f) << 3) / fVar9;
        local_60 = (float)(uVar2 >> 8 & 0xf8) / fVar9;
        local_64 = (float)(uVar2 >> 3 & 0xfc) / fVar9;
        local_78[4] = (float)((uVar2 & 0x1f) << 3) / fVar9;
        local_3c = 0x3f800000;
        local_4c = 0x3f800000;
        local_5c = 0x3f800000;
        local_78[3] = 1.0;
        if ((uint)uVar2 < (uint)uVar1) {
          local_50 = ((local_78[2] + local_78[2] + local_60) / fVar8) / fVar9;
          local_54 = ((local_78[1] + local_78[1] + local_64) / fVar8) / fVar9;
          local_58 = ((local_78[0] + local_78[0] + local_78[4]) / fVar8) / fVar9;
          local_40 = ((local_60 + local_60 + local_78[2]) / fVar8) / fVar9;
          local_44 = ((local_64 + local_64 + local_78[1]) / fVar8) / fVar9;
          local_48 = ((local_78[4] + local_78[4] + local_78[0]) / fVar8) / fVar9;
        }
        else {
          local_50 = ((local_78[2] + local_60) * fVar7) / fVar9;
          local_54 = ((local_78[1] + local_64) * fVar7) / fVar9;
          local_58 = ((local_78[0] + local_78[4]) * fVar7) / fVar9;
          local_40 = 0.0;
          local_3c = 0;
          local_44 = 0.0;
          local_48 = 0.0;
        }
        uVar20 = uVar32 + 0xc;
        iVar14 = 0;
        if (uVar25 < uVar4) {
          uVar31 = (uint)uVar15 & 0xff;
          uVar11 = uVar15 >> 0x10;
          uVar27 = (uint)(byte)(uVar15 >> 8);
          iVar14 = 0;
          do {
            iVar26 = (int)uVar29;
            if (uVar18 < uVar3) {
              uVar17 = (uint)*(byte *)(lVar6 + (ulong)uVar20);
              iVar33 = iVar21 - uVar28;
              do {
                uVar13 = (uint)uVar11 & 7;
                if (uVar13 == 1) {
                  uVar15 = (ulong)(uVar17 & 3);
                  local_78[uVar15 * 4 + 3] = (float)uVar27;
                }
                else if ((uVar11 & 7) == 0) {
                  uVar15 = (ulong)(uVar17 & 3);
                  local_78[uVar15 * 4 + 3] = (float)uVar31;
                }
                else if (uVar27 < uVar31) {
                  uVar13 = ((uVar13 - 1) * uVar27 + (8 - uVar13) * uVar31) / 7;
LAB_1003d2125:
                  uVar15 = (ulong)(uVar17 & 3);
                  local_78[uVar15 * 4 + 3] = (float)uVar13;
                }
                else if (uVar13 == 6) {
                  uVar15 = (ulong)(uVar17 & 3);
                  local_78[uVar15 * 4 + 3] = 0.0;
                }
                else {
                  if (uVar13 < 6) {
                    uVar13 = ((uVar13 - 1) * uVar27 + (6 - uVar13) * uVar31) / 5;
                    goto LAB_1003d2125;
                  }
                  uVar15 = (ulong)(uVar17 & 3);
                  local_78[uVar15 * 4 + 3] = 1.0;
                }
                uVar5 = *(undefined8 *)(local_78 + uVar15 * 4);
                *(undefined8 *)(param_2 + 8 + uVar29 * 0x10) =
                     *(undefined8 *)(local_78 + uVar15 * 4 + 2);
                *(undefined8 *)(param_2 + uVar29 * 0x10) = uVar5;
                uVar11 = uVar11 >> 3;
                uVar17 = uVar17 >> 2;
                iVar33 = iVar33 + -1;
                uVar29 = (ulong)((int)uVar29 + 1);
              } while (iVar33 != 0);
              iVar26 = iVar26 + iVar22;
              iVar33 = iVar22;
            }
            else {
              iVar33 = 0;
            }
            uVar20 = uVar20 + 1;
            uVar29 = (ulong)(iVar26 + ((param_3 >> 2) - iVar33));
            iVar14 = iVar14 + 1;
          } while (iVar14 != -uVar10);
          uVar20 = uVar32 + (0xc - uVar10);
          iVar14 = -uVar10;
        }
        uVar32 = (4 - iVar14) + uVar20;
        uVar18 = uVar18 + 4;
        uVar29 = (ulong)uVar18;
        uVar24 = uVar24 + 4;
        iVar21 = iVar21 + -4;
        uVar12 = uVar12 - 4;
      } while (uVar18 < param_6);
    }
    break;
  case 0x6b:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar12 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar24 = -uVar3;
      uVar10 = uVar25 - uVar4;
      iVar21 = -uVar10;
      if (uVar10 < 0xfffffffd) {
        iVar21 = 4;
      }
      local_b8 = uVar3 + 3;
      uVar10 = uVar3 - 1;
      uVar29 = 0;
      do {
        uVar32 = 3;
        if (3 < uVar10) {
          uVar32 = uVar10;
        }
        iVar22 = -uVar24;
        if (uVar24 < 0xfffffffd) {
          iVar22 = 4;
        }
        uVar28 = (uint)uVar29;
        if (uVar25 < uVar4) {
          uVar15 = *(ulong *)(lVar6 + (ulong)uVar12);
          uVar18 = (uint)uVar15 & 0xff;
          bVar16 = (byte)(uVar15 >> 8);
          uVar15 = uVar15 >> 0x10;
          iVar14 = 0;
          do {
            iVar33 = (int)uVar29;
            iVar26 = local_b8 - uVar32;
            if (uVar28 < uVar3) {
              do {
                uVar20 = (uint)uVar15 & 7;
                if (uVar20 == 1) {
                  *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)bVar16;
                }
                else if ((uVar15 & 7) == 0) {
                  *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)uVar18;
                }
                else {
                  uVar27 = (uint)bVar16;
                  if (uVar18 < bVar16 || uVar18 == uVar27) {
                    if (uVar20 == 6) {
                      *(undefined4 *)(param_2 + 8 + uVar29 * 0x10) = 0;
                    }
                    else {
                      if (uVar20 < 6) {
                        uVar20 = ((uVar20 - 1) * uVar27 + (6 - uVar20) * uVar18) / 5;
                        goto LAB_1003d23e8;
                      }
                      *(undefined4 *)(param_2 + 8 + uVar29 * 0x10) = 0x3f800000;
                    }
                  }
                  else {
                    uVar20 = ((uVar20 - 1) * uVar27 + (8 - uVar20) * uVar18) / 7;
LAB_1003d23e8:
                    *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)uVar20;
                  }
                }
                lVar30 = uVar29 * 0x10;
                *(undefined4 *)(param_2 + lVar30) = 0x3f800000;
                *(undefined4 *)(param_2 + 4 + lVar30) = 0x3f800000;
                *(undefined4 *)(param_2 + 0xc + lVar30) = 0x3f800000;
                uVar15 = uVar15 >> 3;
                iVar26 = iVar26 + -1;
                uVar29 = (ulong)((int)uVar29 + 1);
              } while (iVar26 != 0);
              iVar33 = iVar33 + iVar22;
              iVar26 = iVar22;
            }
            else {
              iVar26 = 0;
            }
            uVar29 = (ulong)(iVar33 + ((param_3 >> 2) - iVar26));
            iVar14 = iVar14 + 1;
          } while (iVar14 != iVar21);
        }
        uVar12 = uVar12 + 8;
        uVar28 = uVar28 + 4;
        uVar29 = (ulong)uVar28;
        uVar24 = uVar24 + 4;
        local_b8 = local_b8 + -4;
        uVar10 = uVar10 - 4;
      } while (uVar28 < param_6);
    }
    break;
  case 0x6d:
    if (param_6 != 0) {
      lVar6 = *(long *)(param_1 + 4);
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar12 = ((uint)(param_5 >> 2) & 0x3fffffff) * param_1[3] + param_4 * 4;
      uVar24 = -uVar3;
      uVar10 = uVar25 - uVar4;
      iVar21 = -uVar10;
      if (uVar10 < 0xfffffffd) {
        iVar21 = 4;
      }
      local_d8 = uVar3 + 3;
      uVar10 = uVar3 - 1;
      local_94 = 0;
      do {
        uVar32 = 3;
        if (3 < uVar10) {
          uVar32 = uVar10;
        }
        iVar22 = -uVar24;
        if (uVar24 < 0xfffffffd) {
          iVar22 = 4;
        }
        if (uVar25 < uVar4) {
          uVar29 = *(ulong *)(lVar6 + (ulong)uVar12);
          uVar15 = *(ulong *)(lVar6 + 8 + (ulong)uVar12);
          uVar31 = (uint)uVar15 & 0xff;
          uVar27 = (uint)uVar29 & 0xff;
          uVar11 = uVar29 >> 0x10;
          uVar19 = uVar15 >> 0x10;
          uVar20 = (uint)(byte)(uVar29 >> 8);
          uVar18 = (uint)(byte)(uVar15 >> 8);
          iVar14 = 0;
          uVar28 = local_94;
          do {
            uVar17 = uVar28;
            iVar26 = local_d8 - uVar32;
            if (local_94 < uVar3) {
              do {
                uVar29 = (ulong)uVar17;
                uVar23 = (uint)uVar19 & 7;
                uVar13 = (uint)uVar11 & 7;
                if (uVar23 == 1) {
                  *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)uVar18;
                }
                else if ((uVar19 & 7) == 0) {
                  *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)uVar31;
                }
                else if (uVar18 < uVar31) {
                  uVar23 = ((uVar23 - 1) * uVar18 + (8 - uVar23) * uVar31) / 7;
LAB_1003d26b2:
                  *(float *)(param_2 + 8 + uVar29 * 0x10) = (float)uVar23;
                }
                else if (uVar23 == 6) {
                  *(undefined4 *)(param_2 + 8 + uVar29 * 0x10) = 0;
                }
                else {
                  if (uVar23 < 6) {
                    uVar23 = ((uVar23 - 1) * uVar18 + (6 - uVar23) * uVar31) / 5;
                    goto LAB_1003d26b2;
                  }
                  *(undefined4 *)(param_2 + 8 + uVar29 * 0x10) = 0x3f800000;
                }
                if (uVar13 == 1) {
                  *(float *)(param_2 + 4 + uVar29 * 0x10) = (float)uVar20;
                }
                else if ((uVar11 & 7) == 0) {
                  *(float *)(param_2 + 4 + uVar29 * 0x10) = (float)uVar27;
                }
                else if (uVar20 < uVar27) {
                  uVar13 = ((uVar13 - 1) * uVar20 + (8 - uVar13) * uVar27) / 7;
LAB_1003d2777:
                  *(float *)(param_2 + 4 + uVar29 * 0x10) = (float)uVar13;
                }
                else if (uVar13 == 6) {
                  *(undefined4 *)(param_2 + 4 + uVar29 * 0x10) = 0;
                }
                else {
                  if (uVar13 < 6) {
                    uVar13 = ((uVar13 - 1) * uVar20 + (6 - uVar13) * uVar27) / 5;
                    goto LAB_1003d2777;
                  }
                  *(undefined4 *)(param_2 + 4 + uVar29 * 0x10) = 0x3f800000;
                }
                *(undefined4 *)(param_2 + uVar29 * 0x10) = 0x3f800000;
                *(undefined4 *)(param_2 + 0xc + uVar29 * 0x10) = 0x3f800000;
                uVar19 = uVar19 >> 3;
                uVar11 = uVar11 >> 3;
                iVar26 = iVar26 + -1;
                uVar17 = uVar17 + 1;
              } while (iVar26 != 0);
              uVar28 = uVar28 + iVar22;
              iVar26 = iVar22;
            }
            else {
              iVar26 = 0;
            }
            uVar28 = uVar28 + ((param_3 >> 2) - iVar26);
            iVar14 = iVar14 + 1;
          } while (iVar14 != iVar21);
        }
        uVar12 = uVar12 + 0x10;
        local_94 = local_94 + 4;
        uVar24 = uVar24 + 4;
        local_d8 = local_d8 + -4;
        uVar10 = uVar10 - 4;
      } while (local_94 < param_6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

