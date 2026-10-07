
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003d2880(float *param_1,undefined4 param_2,float *param_3,uint param_4)

{
  ulong uVar1;
  float fVar2;
  long lVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  ulong uVar13;
  long lVar14;
  byte bVar15;
  undefined2 *puVar16;
  ushort *puVar17;
  byte *pbVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  uint uVar23;
  int iVar24;
  float *pfVar25;
  ulong uVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  
  fVar11 = DAT_100b44ca0;
  fVar10 = DAT_100b3f700;
  fVar9 = DAT_100b3f6fc;
  fVar8 = DAT_100b3f6f8;
  fVar7 = DAT_100b3f6f4;
  fVar35 = DAT_100b3f6f0;
  auVar6 = _DAT_100b3f6b0;
  fVar34 = _UNK_100b3f6ac;
  fVar33 = _UNK_100b3f6a8;
  fVar32 = _UNK_100b3f6a4;
  fVar29 = _DAT_100b3f6a0;
  fVar5 = DAT_100b39678;
  fVar2 = DAT_100b39670;
  auVar4 = _DAT_100b2ddb0;
  switch(param_2) {
  case 0:
  case 1:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *param_3 = (float)((uint)(long)(param_1[-3] * fVar11) |
                          (int)(long)(param_1[-2] * fVar11) << 8 |
                          (int)(long)(param_1[-1] * fVar11) << 0x10 |
                          (int)(long)(*param_1 * fVar11) << 0x18);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 2:
  case 3:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *param_3 = (float)((int)(long)(param_1[-3] * fVar11) << 0x10 |
                          (int)(long)(param_1[-2] * fVar11) << 8 |
                          (uint)(long)(param_1[-1] * fVar11) |
                          (int)(long)(*param_1 * fVar11) << 0x18);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 5:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *param_3 = (float)(((int)(long)(param_1[-3] * fVar11) << 0x10 ^ 0x800000U |
                           (int)(long)(param_1[-2] * fVar11) << 8 ^ 0x8000U |
                           (uint)(long)(param_1[-1] * fVar11) |
                           ((uint)(long)(*param_1 * fVar11) ^ 0xffffff80) << 0x18) ^ 0x80);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 7:
  case 8:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *param_3 = (float)((int)(long)(param_1[-1] * fVar11) << 8 |
                           (int)(long)(*param_1 * fVar11) << 0x10 |
                           (uint)(long)(param_1[-2] * fVar11) | 0xff000000);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 9:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *param_3 = (float)((int)(long)(param_1[-1] * fVar11) << 8 | (uint)(long)(*param_1 * fVar11)
                           | (int)(long)(param_1[-2] * fVar11) << 0x10 | 0xff000000);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 10:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *param_3 = (float)(((uint)(long)(param_1[-2] * fVar11) |
                           (int)(long)(param_1[-1] * fVar11) << 8 |
                           (int)(long)(*param_1 * fVar11) << 0x10) & 0xffffff |
                          (uint)*param_3 & 0xff000000);
        param_3 = (float *)((long)param_3 + 3);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0xb:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(ushort *)param_3 =
             (ushort)((int)(long)(DAT_100b44ca0 * param_1[1]) << 8) |
             (ushort)(long)(param_1[2] * DAT_100b44ca0);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(ushort *)param_3 =
               (ushort)((int)(long)(param_1[-5] * fVar2) << 8) | (ushort)(long)(param_1[-4] * fVar2)
          ;
          *(ushort *)((long)param_3 + 2) =
               (ushort)((int)(long)(param_1[-1] * fVar2) << 8) | (ushort)(long)(*param_1 * fVar2);
          param_1 = param_1 + 8;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0xd:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(ushort *)param_3 =
             ((ushort)((int)(long)(DAT_100b44ca0 * param_1[1]) << 8) ^ 0x8000 |
             (ushort)(long)(param_1[2] * DAT_100b44ca0)) ^ 0x80;
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(ushort *)param_3 =
               ((ushort)((int)(long)(param_1[-5] * fVar2) << 8) ^ 0x8000 |
               (ushort)(long)(param_1[-4] * fVar2)) ^ 0x80;
          *(ushort *)((long)param_3 + 2) =
               ((ushort)((int)(long)(param_1[-1] * fVar2) << 8) ^ 0x8000 |
               (ushort)(long)(*param_1 * fVar2)) ^ 0x80;
          param_1 = param_1 + 8;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x10:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(ushort *)param_3 =
             (ushort)((ulong)(long)(param_1[-2] * fVar11) >> 3) |
             (ushort)(((uint)(long)(param_1[-1] * fVar11) & 0xfc) << 3) |
             (ushort)(((uint)(long)(*param_1 * fVar11) & 0xf8) << 8);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x11:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(ushort *)param_3 =
             (ushort)(long)(param_1[-1] * fVar11) & 0xf0 |
             (ushort)(((uint)(long)(*param_1 * fVar11) & 0xf0) << 4) |
             (ushort)((ulong)(long)(param_1[-2] * fVar11) >> 4) | 0xf000;
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x12:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(ushort *)param_3 =
             (ushort)((ulong)(long)(param_1[-3] * fVar11) >> 4) |
             (ushort)(long)(param_1[-2] * fVar11) & 0xf0 |
             (ushort)(((uint)(long)(param_1[-1] * fVar11) & 0xf0) << 4) |
             (ushort)(((uint)(long)(*param_1 * fVar11) & 0xf0) << 8);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x13:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(ushort *)param_3 =
             (ushort)((ulong)(long)(param_1[-2] * fVar11) >> 3) |
             (ushort)(((uint)(long)(param_1[-1] * fVar11) & 0xf8) << 2) |
             (ushort)(((uint)(long)(*param_1 * fVar11) & 0xf8) << 7);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x14:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      do {
        *(ushort *)param_3 =
             (ushort)((ulong)(long)(param_1[-3] * fVar11) >> 3) |
             (ushort)(((uint)(long)(param_1[-2] * fVar11) & 0xf8) << 2) |
             (ushort)(((uint)(long)(param_1[-1] * fVar11) & 0xf8) << 7) |
             (ushort)(((uint)(long)(*param_1 * fVar11) & 0x80) << 8);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x15:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(byte *)param_3 =
             (byte)((ulong)(long)(param_1[-2] * fVar11) >> 6) |
             (byte)((ulong)(long)(param_1[-1] * fVar11) >> 3) & 0x1c |
             (byte)(long)(*param_1 * fVar11) & 0xe0;
        param_3 = (float *)((long)param_3 + 1);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x16:
    if (param_4 != 0) {
      lVar14 = 0;
      if ((param_4 & 3) != 0) {
        lVar14 = 0;
        do {
          *(char *)((long)param_3 + lVar14) = (char)(long)(param_1[2] * fVar11);
          param_1 = param_1 + 4;
          lVar14 = lVar14 + 1;
        } while ((param_4 & 3) != (uint)lVar14);
        param_3 = (float *)((long)param_3 + lVar14);
      }
      fVar2 = DAT_100b44ca0;
      if (2 < param_4 - 1) {
        iVar24 = param_4 - (int)lVar14;
        param_1 = param_1 + 0xe;
        do {
          *(char *)param_3 = (char)(long)(param_1[-0xc] * fVar2);
          *(char *)((long)param_3 + 1) = (char)(long)(param_1[-8] * fVar2);
          *(char *)((long)param_3 + 2) = (char)(long)(param_1[-4] * fVar2);
          *(char *)((long)param_3 + 3) = (char)(long)(*param_1 * fVar2);
          param_1 = param_1 + 0x10;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -4;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x18:
    if (param_4 != 0) {
      uVar13 = (ulong)(param_4 - 1);
      uVar1 = uVar13 + 1;
      uVar26 = uVar1 & 0x1fffffffc;
      if ((uVar26 == 0) ||
         ((param_3 <= param_1 + uVar13 * 4 + 2 && (param_1 + 2 <= (float *)((long)param_3 + uVar13))
          ))) {
        uVar23 = 0;
        uVar26 = 0;
        pfVar19 = param_3;
        pfVar25 = param_1;
      }
      else {
        pfVar25 = param_1 + uVar26 * 4;
        pfVar19 = (float *)((long)param_3 + uVar26);
        param_1 = param_1 + 0xe;
        uVar13 = uVar13 + 1 & 0xfffffffffffffffc;
        do {
          uVar12 = (undefined4)(long)(param_1[-4] * fVar33);
          auVar31._0_4_ = (undefined4)(long)(param_1[-0xc] * fVar29);
          auVar30._4_4_ = uVar12;
          auVar30._0_4_ = auVar31._0_4_;
          auVar30._8_4_ = uVar12;
          auVar30._12_4_ = (int)(long)(*param_1 * fVar34);
          auVar31._8_8_ = auVar30._8_8_;
          auVar31._4_4_ = (int)(long)(param_1[-8] * fVar32);
          auVar31 = pshufb(auVar31 ^ auVar6,auVar4);
          *param_3 = auVar31._0_4_;
          param_1 = param_1 + 0x10;
          param_3 = param_3 + 1;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
        uVar23 = (uint)uVar1 & 0xfffffffc;
      }
      fVar2 = DAT_100b44ca0;
      if (uVar1 != uVar26) {
        uVar21 = (param_4 - 1) - uVar23;
        if ((param_4 & 3) != 0) {
          lVar14 = 0;
          do {
            *(byte *)((long)pfVar19 + lVar14) = (byte)(long)(pfVar25[2] * fVar2) ^ 0x80;
            pfVar25 = pfVar25 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 & 3) != (uint)lVar14);
          uVar23 = uVar23 + (uint)lVar14;
          pfVar19 = (float *)((long)pfVar19 + lVar14);
        }
        fVar2 = DAT_100b44ca0;
        if (2 < uVar21) {
          iVar24 = param_4 - uVar23;
          pfVar25 = pfVar25 + 0xe;
          do {
            *(byte *)pfVar19 = (byte)(long)(pfVar25[-0xc] * fVar2) ^ 0x80;
            *(byte *)((long)pfVar19 + 1) = (byte)(long)(pfVar25[-8] * fVar2) ^ 0x80;
            *(byte *)((long)pfVar19 + 2) = (byte)(long)(pfVar25[-4] * fVar2) ^ 0x80;
            *(byte *)((long)pfVar19 + 3) = (byte)(long)(*pfVar25 * fVar2) ^ 0x80;
            pfVar25 = pfVar25 + 0x10;
            pfVar19 = pfVar19 + 1;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x1a:
    if (param_4 != 0) {
      lVar14 = 0;
      if ((param_4 & 3) != 0) {
        lVar14 = 0;
        do {
          *(char *)((long)param_3 + lVar14) = (char)(long)(param_1[3] * fVar11);
          param_1 = param_1 + 4;
          lVar14 = lVar14 + 1;
        } while ((param_4 & 3) != (uint)lVar14);
        param_3 = (float *)((long)param_3 + lVar14);
      }
      fVar2 = DAT_100b44ca0;
      if (2 < param_4 - 1) {
        iVar24 = param_4 - (int)lVar14;
        param_1 = param_1 + 0xf;
        do {
          *(char *)param_3 = (char)(long)(param_1[-0xc] * fVar2);
          *(char *)((long)param_3 + 1) = (char)(long)(param_1[-8] * fVar2);
          *(char *)((long)param_3 + 2) = (char)(long)(param_1[-4] * fVar2);
          *(char *)((long)param_3 + 3) = (char)(long)(*param_1 * fVar2);
          param_1 = param_1 + 0x10;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -4;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x1c:
    if (param_4 != 0) {
      lVar14 = 0;
      if ((param_4 & 3) != 0) {
        lVar14 = 0;
        do {
          *(char *)((long)param_3 + lVar14) = (char)(long)(param_1[2] * fVar11);
          param_1 = param_1 + 4;
          lVar14 = lVar14 + 1;
        } while ((param_4 & 3) != (uint)lVar14);
        param_3 = (float *)((long)param_3 + lVar14);
      }
      fVar2 = DAT_100b44ca0;
      if (2 < param_4 - 1) {
        iVar24 = param_4 - (int)lVar14;
        param_1 = param_1 + 0xe;
        do {
          *(char *)param_3 = (char)(long)(param_1[-0xc] * fVar2);
          *(char *)((long)param_3 + 1) = (char)(long)(param_1[-8] * fVar2);
          *(char *)((long)param_3 + 2) = (char)(long)(param_1[-4] * fVar2);
          *(char *)((long)param_3 + 3) = (char)(long)(*param_1 * fVar2);
          param_1 = param_1 + 0x10;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -4;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x1d:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(ushort *)param_3 =
             (ushort)(long)(DAT_100b44ca0 * param_1[2]) |
             (ushort)((int)(long)(param_1[3] * DAT_100b44ca0) << 8);
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 7;
        do {
          *(ushort *)param_3 =
               (ushort)(long)(param_1[-5] * fVar2) | (ushort)((int)(long)(param_1[-4] * fVar2) << 8)
          ;
          *(ushort *)((long)param_3 + 2) =
               (ushort)(long)(param_1[-1] * fVar2) | (ushort)((int)(long)(*param_1 * fVar2) << 8);
          param_1 = param_1 + 8;
          param_3 = param_3 + 1;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x1e:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(byte *)param_3 =
             (byte)((ulong)(long)(DAT_100b44ca0 * param_1[2]) >> 4) |
             (byte)(long)(param_1[3] * DAT_100b44ca0) & 0xf0;
        param_3 = (float *)((long)param_3 + 1);
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b44ca0;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 7;
        do {
          *(byte *)param_3 =
               (byte)((ulong)(long)(param_1[-5] * fVar2) >> 4) |
               (byte)(long)(param_1[-4] * fVar2) & 0xf0;
          *(byte *)((long)param_3 + 1) =
               (byte)((ulong)(long)(param_1[-1] * fVar2) >> 4) |
               (byte)(long)(*param_1 * fVar2) & 0xf0;
          param_1 = param_1 + 8;
          param_3 = (float *)((long)param_3 + 2);
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x20:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar25 = param_1 + 6;
        pfVar19 = param_3 + 1;
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar25;
          pfVar19[-1] = (float)(long)(pfVar25[-4] * fVar7);
          *pfVar19 = (float)(long)(fVar2 * fVar7);
          pfVar25 = pfVar25 + 8;
          pfVar19 = pfVar19 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = param_3 + uVar26;
      }
      fVar2 = DAT_100b3f6f4;
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            param_3[lVar14] = (float)(long)(param_1[2] * fVar2);
            pfVar19 = pfVar19 + 1;
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        fVar2 = DAT_100b3f6f4;
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *param_3 = (float)(long)(param_1[-0xc] * fVar2);
            param_3[1] = (float)(long)(param_1[-8] * fVar2);
            param_3[2] = (float)(long)(param_1[-4] * fVar2);
            param_3[3] = (float)(long)(*param_1 * fVar2);
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 4;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x2d:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *(ushort *)param_3 =
             ((ushort)(((uint)(long)(param_1[-2] * fVar11) & 0x1f8) << 7) |
             (ushort)(((uint)(long)(param_1[-1] * fVar11) & 0xf8) << 2) |
             (ushort)((ulong)(long)(*param_1 * fVar11) >> 3) & 0x1f) ^ 0x210;
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x2e:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        *param_3 = (float)(((int)(long)(param_1[-1] * fVar11) << 8 ^ 0x8000U |
                            (uint)(long)(*param_1 * fVar11) |
                            (int)(long)(param_1[-2] * fVar11) << 0x10 | 0xff000000) ^ 0x80);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x30:
    if (param_4 != 0) {
      lVar14 = 0;
      pfVar19 = param_3;
      if ((param_4 & 7) != 0) {
        lVar14 = 0;
        do {
          param_3[lVar14] = param_1[2];
          pfVar19 = pfVar19 + 1;
          param_1 = param_1 + 4;
          lVar14 = lVar14 + 1;
        } while ((param_4 & 7) != (uint)lVar14);
      }
      if (6 < param_4 - 1) {
        iVar24 = param_4 - (int)lVar14;
        param_1 = param_1 + 0x1e;
        do {
          *pfVar19 = param_1[-0x1c];
          pfVar19[1] = param_1[-0x18];
          pfVar19[2] = param_1[-0x14];
          pfVar19[3] = param_1[-0x10];
          pfVar19[4] = param_1[-0xc];
          pfVar19[5] = param_1[-8];
          pfVar19[6] = param_1[-4];
          pfVar19[7] = *param_1;
          param_1 = param_1 + 0x20;
          pfVar19 = pfVar19 + 8;
          iVar24 = iVar24 + -8;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x31:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar25 = param_1 + 6;
        pfVar19 = param_3 + 1;
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar25;
          pfVar19[-1] = (float)(long)pfVar25[-4];
          *pfVar19 = (float)(long)fVar2;
          pfVar25 = pfVar25 + 8;
          pfVar19 = pfVar19 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = param_3 + uVar26;
      }
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            param_3[lVar14] = (float)(long)param_1[2];
            pfVar19 = pfVar19 + 1;
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *param_3 = (float)(long)param_1[-0xc];
            param_3[1] = (float)(long)param_1[-8];
            param_3[2] = (float)(long)param_1[-4];
            param_3[3] = (float)(long)*param_1;
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 4;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x32:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar25 = param_1 + 6;
        pfVar19 = param_3 + 1;
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar25;
          pfVar19[-1] = -(float)(long)pfVar25[-4];
          *pfVar19 = -(float)(long)fVar2;
          pfVar25 = pfVar25 + 8;
          pfVar19 = pfVar19 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = param_3 + uVar26;
      }
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            param_3[lVar14] = -(float)(long)param_1[2];
            pfVar19 = pfVar19 + 1;
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *param_3 = -(float)(long)param_1[-0xc];
            param_3[1] = -(float)(long)param_1[-8];
            param_3[2] = -(float)(long)param_1[-4];
            param_3[3] = -(float)(long)*param_1;
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 4;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x33:
    if (param_4 != 0) {
      lVar14 = 0;
      if ((param_4 & 3) != 0) {
        lVar14 = 0;
        pfVar19 = param_3;
        do {
          pfVar25 = pfVar19;
          param_3[lVar14 * 2] = param_1[2];
          param_3[lVar14 * 2 + 1] = param_1[1];
          param_1 = param_1 + 4;
          lVar3 = lVar14 * 2;
          lVar14 = lVar14 + 1;
          pfVar19 = param_3 + lVar3 + 2;
        } while ((param_4 & 3) != (uint)lVar14);
        param_3 = pfVar25 + 2;
      }
      if (2 < param_4 - 1) {
        iVar24 = param_4 - (int)lVar14;
        param_1 = param_1 + 0xe;
        do {
          *param_3 = param_1[-0xc];
          param_3[1] = param_1[-0xd];
          param_3[2] = param_1[-8];
          param_3[3] = param_1[-9];
          param_3[4] = param_1[-4];
          param_3[5] = param_1[-5];
          param_3[6] = *param_1;
          param_3[7] = param_1[-1];
          param_1 = param_1 + 0x10;
          param_3 = param_3 + 8;
          iVar24 = iVar24 + -4;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x34:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *param_3 = (float)(long)param_1[2];
        param_3[1] = (float)(long)param_1[1];
        param_3 = param_3 + 2;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *param_3 = (float)(long)param_1[-4];
          param_3[1] = (float)(long)param_1[-5];
          param_3[2] = (float)(long)*param_1;
          param_3[3] = (float)(long)param_1[-1];
          param_1 = param_1 + 8;
          param_3 = param_3 + 4;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x35:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *param_3 = -(float)(long)param_1[2];
        param_3[1] = -(float)(long)param_1[1];
        param_3 = param_3 + 2;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *param_3 = -(float)(long)param_1[-4];
          param_3[1] = -(float)(long)param_1[-5];
          param_3[2] = -(float)(long)*param_1;
          param_3[3] = -(float)(long)param_1[-1];
          param_1 = param_1 + 8;
          param_3 = param_3 + 4;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x36:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *param_3 = param_1[2];
        param_3[1] = param_1[1];
        param_3[2] = *param_1;
        param_3 = param_3 + 3;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *param_3 = param_1[-4];
          param_3[1] = param_1[-5];
          param_3[2] = param_1[-6];
          param_3[3] = *param_1;
          param_3[4] = param_1[-1];
          param_3[5] = param_1[-2];
          param_1 = param_1 + 8;
          param_3 = param_3 + 6;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x37:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *param_3 = (float)(long)param_1[2];
        param_3[1] = (float)(long)param_1[1];
        param_3[2] = (float)(long)*param_1;
        param_3 = param_3 + 3;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *param_3 = (float)(long)param_1[-4];
          param_3[1] = (float)(long)param_1[-5];
          param_3[2] = (float)(long)param_1[-6];
          param_3[3] = (float)(long)*param_1;
          param_3[4] = (float)(long)param_1[-1];
          param_3[5] = (float)(long)param_1[-2];
          param_1 = param_1 + 8;
          param_3 = param_3 + 6;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x38:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *param_3 = -(float)(long)param_1[2];
        param_3[1] = -(float)(long)param_1[1];
        param_3[2] = -(float)(long)*param_1;
        param_3 = param_3 + 3;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *param_3 = -(float)(long)param_1[-4];
          param_3[1] = -(float)(long)param_1[-5];
          param_3[2] = -(float)(long)param_1[-6];
          param_3[3] = -(float)(long)*param_1;
          param_3[4] = -(float)(long)param_1[-1];
          param_3[5] = -(float)(long)param_1[-2];
          param_1 = param_1 + 8;
          param_3 = param_3 + 6;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x39:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        param_3[3] = param_1[3];
        *param_3 = param_1[2];
        param_3[1] = param_1[1];
        param_3[2] = *param_1;
        param_3 = param_3 + 4;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 7;
        param_3 = param_3 + 7;
        do {
          param_3[-4] = param_1[-4];
          param_3[-7] = param_1[-5];
          param_3[-6] = param_1[-6];
          param_3[-5] = param_1[-7];
          *param_3 = *param_1;
          param_3[-3] = param_1[-1];
          param_3[-2] = param_1[-2];
          param_3[-1] = param_1[-3];
          param_1 = param_1 + 8;
          param_3 = param_3 + 8;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x3a:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        param_3[3] = (float)(long)param_1[3];
        *param_3 = (float)(long)param_1[2];
        param_3[1] = (float)(long)param_1[1];
        param_3[2] = (float)(long)*param_1;
        param_3 = param_3 + 4;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 7;
        param_3 = param_3 + 7;
        do {
          param_3[-4] = (float)(long)param_1[-4];
          param_3[-7] = (float)(long)param_1[-5];
          param_3[-6] = (float)(long)param_1[-6];
          param_3[-5] = (float)(long)param_1[-7];
          *param_3 = (float)(long)*param_1;
          param_3[-3] = (float)(long)param_1[-1];
          param_3[-2] = (float)(long)param_1[-2];
          param_3[-1] = (float)(long)param_1[-3];
          param_1 = param_1 + 8;
          param_3 = param_3 + 8;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x3b:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      param_3 = param_3 + 3;
      do {
        *param_3 = -(float)(long)*param_1;
        param_3[-3] = -(float)(long)param_1[-1];
        param_3[-2] = -(float)(long)param_1[-2];
        param_3[-1] = -(float)(long)param_1[-3];
        param_1 = param_1 + 4;
        param_3 = param_3 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x3c:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        fVar2 = *param_1;
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar21 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar21 - 0x70;
        if (iVar24 == 0 || uVar21 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d3b7a:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar23 = uVar23 + 0x2000;
            if ((uVar23 & 0x800000) != 0) {
              uVar23 = 0;
              iVar24 = uVar21 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d3b7a;
          uVar22 = (ushort)(uVar23 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        *(ushort *)param_3 = uVar22;
        param_3 = (float *)((long)param_3 + 2);
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x3e:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar19 = param_1 + 6;
        puVar16 = (undefined2 *)((long)param_3 + 2);
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar19;
          puVar16[-1] = (short)(int)(pfVar19[-4] * fVar10);
          *puVar16 = (short)(int)(fVar2 * fVar10);
          pfVar19 = pfVar19 + 8;
          puVar16 = puVar16 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = (float *)((long)param_3 + uVar26 * 2);
      }
      fVar2 = DAT_100b3f700;
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            *(short *)((long)param_3 + lVar14 * 2) = (short)(int)(param_1[2] * fVar2);
            pfVar19 = (float *)((long)pfVar19 + 2);
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        fVar2 = DAT_100b3f700;
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *(short *)param_3 = (short)(int)(param_1[-0xc] * fVar2);
            *(short *)((long)param_3 + 2) = (short)(int)(param_1[-8] * fVar2);
            *(short *)(param_3 + 1) = (short)(int)(param_1[-4] * fVar2);
            *(short *)((long)param_3 + 6) = (short)(int)(*param_1 * fVar2);
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 2;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x3f:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar19 = param_1 + 6;
        puVar16 = (undefined2 *)((long)param_3 + 2);
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar19;
          puVar16[-1] = (short)(int)pfVar19[-4];
          *puVar16 = (short)(int)fVar2;
          pfVar19 = pfVar19 + 8;
          puVar16 = puVar16 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = (float *)((long)param_3 + uVar26 * 2);
      }
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            *(short *)((long)param_3 + lVar14 * 2) = (short)(int)param_1[2];
            pfVar19 = (float *)((long)pfVar19 + 2);
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *(short *)param_3 = (short)(int)param_1[-0xc];
            *(short *)((long)param_3 + 2) = (short)(int)param_1[-8];
            *(short *)(param_3 + 1) = (short)(int)param_1[-4];
            *(short *)((long)param_3 + 6) = (short)(int)*param_1;
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 2;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x40:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar19 = param_1 + 6;
        puVar17 = (ushort *)((long)param_3 + 2);
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar19;
          puVar17[-1] = (ushort)(int)(pfVar19[-4] * fVar10) ^ 0x8000;
          *puVar17 = (ushort)(int)(fVar2 * fVar10) ^ 0x8000;
          pfVar19 = pfVar19 + 8;
          puVar17 = puVar17 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = (float *)((long)param_3 + uVar26 * 2);
      }
      fVar2 = DAT_100b3f700;
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            *(ushort *)((long)param_3 + lVar14 * 2) = (ushort)(int)(param_1[2] * fVar2) ^ 0x8000;
            pfVar19 = (float *)((long)pfVar19 + 2);
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        fVar2 = DAT_100b3f700;
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *(ushort *)param_3 = (ushort)(int)(param_1[-0xc] * fVar2) ^ 0x8000;
            *(ushort *)((long)param_3 + 2) = (ushort)(int)(param_1[-8] * fVar2) ^ 0x8000;
            *(ushort *)(param_3 + 1) = (ushort)(int)(param_1[-4] * fVar2) ^ 0x8000;
            *(ushort *)((long)param_3 + 6) = (ushort)(int)(*param_1 * fVar2) ^ 0x8000;
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 2;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x41:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar19 = param_1 + 6;
        puVar17 = (ushort *)((long)param_3 + 2);
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar19;
          puVar17[-1] = (ushort)(int)pfVar19[-4] ^ 0x8000;
          *puVar17 = (ushort)(int)fVar2 ^ 0x8000;
          pfVar19 = pfVar19 + 8;
          puVar17 = puVar17 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = (float *)((long)param_3 + uVar26 * 2);
      }
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            *(ushort *)((long)param_3 + lVar14 * 2) = (ushort)(int)param_1[2] ^ 0x8000;
            pfVar19 = (float *)((long)pfVar19 + 2);
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *(ushort *)param_3 = (ushort)(int)param_1[-0xc] ^ 0x8000;
            *(ushort *)((long)param_3 + 2) = (ushort)(int)param_1[-8] ^ 0x8000;
            *(ushort *)(param_3 + 1) = (ushort)(int)param_1[-4] ^ 0x8000;
            *(ushort *)((long)param_3 + 6) = (ushort)(int)*param_1 ^ 0x8000;
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 2;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x42:
    if (param_4 != 0) {
      uVar23 = param_4 - 1;
      uVar1 = (ulong)uVar23 + 1;
      uVar21 = 0;
      uVar26 = uVar1 & 0x1fffffffe;
      if (uVar26 == 0) {
        uVar26 = 0;
      }
      else {
        pfVar19 = param_1 + 6;
        puVar16 = (undefined2 *)((long)param_3 + 2);
        uVar13 = (ulong)uVar23 + 1 & 0xfffffffffffffffe;
        do {
          fVar2 = *pfVar19;
          puVar16[-1] = (short)(int)(pfVar19[-4] * fVar10);
          *puVar16 = (short)(int)(fVar2 * fVar10);
          pfVar19 = pfVar19 + 8;
          puVar16 = puVar16 + 2;
          uVar13 = uVar13 - 2;
        } while (uVar13 != 0);
        uVar21 = (uint)uVar1 & 0xfffffffe;
        param_1 = param_1 + (uVar1 & 0x1fffffffe) * 4;
        param_3 = (float *)((long)param_3 + uVar26 * 2);
      }
      fVar2 = DAT_100b3f700;
      if (uVar1 != uVar26) {
        uVar23 = uVar23 - uVar21;
        if ((param_4 - uVar21 & 3) != 0) {
          lVar14 = 0;
          pfVar19 = param_3;
          do {
            *(short *)((long)param_3 + lVar14 * 2) = (short)(int)(param_1[2] * fVar2);
            pfVar19 = (float *)((long)pfVar19 + 2);
            param_1 = param_1 + 4;
            lVar14 = lVar14 + 1;
          } while ((param_4 - uVar21 & 3) != (uint)lVar14);
          uVar21 = uVar21 + (uint)lVar14;
          param_3 = pfVar19;
        }
        fVar2 = DAT_100b3f700;
        if (2 < uVar23) {
          iVar24 = param_4 - uVar21;
          param_1 = param_1 + 0xe;
          do {
            *(short *)param_3 = (short)(int)(param_1[-0xc] * fVar2);
            *(short *)((long)param_3 + 2) = (short)(int)(param_1[-8] * fVar2);
            *(short *)(param_3 + 1) = (short)(int)(param_1[-4] * fVar2);
            *(short *)((long)param_3 + 6) = (short)(int)(*param_1 * fVar2);
            param_1 = param_1 + 0x10;
            param_3 = param_3 + 2;
            iVar24 = iVar24 + -4;
          } while (iVar24 != 0);
        }
      }
    }
    break;
  case 0x43:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        fVar2 = *param_1;
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar21 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar21 - 0x70;
        if (iVar24 == 0 || uVar21 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d3ea6:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar27 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar27 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar27 = 0;
              iVar24 = uVar21 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d3ea6;
          uVar22 = (ushort)(uVar27 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        *(ushort *)param_3 = uVar22;
        fVar2 = param_1[-1];
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar21 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar21 - 0x70;
        if (iVar24 == 0 || uVar21 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d3f5a:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar27 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar27 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar27 = 0;
              iVar24 = uVar21 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d3f5a;
          uVar22 = (ushort)(uVar27 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        *(ushort *)((long)param_3 + 2) = uVar22;
        param_1 = param_1 + 4;
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x44:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(short *)param_3 = (short)(int)(param_1[2] * DAT_100b3f700);
        *(short *)((long)param_3 + 2) = (short)(int)(fVar10 * param_1[1]);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b3f700;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(short *)param_3 = (short)(int)(param_1[-4] * fVar2);
          *(short *)((long)param_3 + 2) = (short)(int)(param_1[-5] * fVar2);
          *(short *)(param_3 + 1) = (short)(int)(*param_1 * fVar2);
          *(short *)((long)param_3 + 6) = (short)(int)(param_1[-1] * fVar2);
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x45:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(short *)param_3 = (short)(int)param_1[2];
        *(short *)((long)param_3 + 2) = (short)(int)param_1[1];
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(short *)param_3 = (short)(int)param_1[-4];
          *(short *)((long)param_3 + 2) = (short)(int)param_1[-5];
          *(short *)(param_3 + 1) = (short)(int)*param_1;
          *(short *)((long)param_3 + 6) = (short)(int)param_1[-1];
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x46:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(ushort *)param_3 = (ushort)(int)(param_1[2] * DAT_100b3f700) ^ 0x8000;
        *(ushort *)((long)param_3 + 2) = (ushort)(int)(fVar10 * param_1[1]) ^ 0x8000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      fVar2 = DAT_100b3f700;
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(ushort *)param_3 = (ushort)(int)(param_1[-4] * fVar2) ^ 0x8000;
          *(ushort *)((long)param_3 + 2) = (ushort)(int)(param_1[-5] * fVar2) ^ 0x8000;
          *(ushort *)(param_3 + 1) = (ushort)(int)(*param_1 * fVar2) ^ 0x8000;
          *(ushort *)((long)param_3 + 6) = (ushort)(int)(param_1[-1] * fVar2) ^ 0x8000;
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x47:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(ushort *)param_3 = (ushort)(int)param_1[2] ^ 0x8000;
        *(ushort *)((long)param_3 + 2) = (ushort)(int)param_1[1] ^ 0x8000;
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 6;
        do {
          *(ushort *)param_3 = (ushort)(int)param_1[-4] ^ 0x8000;
          *(ushort *)((long)param_3 + 2) = (ushort)(int)param_1[-5] ^ 0x8000;
          *(ushort *)(param_3 + 1) = (ushort)(int)*param_1 ^ 0x8000;
          *(ushort *)((long)param_3 + 6) = (ushort)(int)param_1[-1] ^ 0x8000;
          param_1 = param_1 + 8;
          param_3 = param_3 + 2;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x48:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      puVar17 = (ushort *)((long)param_3 + 6);
      do {
        fVar2 = *param_1;
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar27 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar27 - 0x70;
        uVar21 = 0;
        if (iVar24 == 0 || uVar27 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar27 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar27 + 0x2000;
            if ((uVar27 & 0x1000) == 0) {
              uVar23 = uVar27;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d42ca:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar20 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar20 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar20 = uVar21;
              iVar24 = uVar27 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d42ca;
          uVar22 = (ushort)(uVar20 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        *puVar17 = uVar22;
        fVar2 = param_1[-1];
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar27 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar27 - 0x70;
        if (iVar24 == 0 || uVar27 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar27 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar27 + 0x2000;
            if ((uVar27 & 0x1000) == 0) {
              uVar23 = uVar27;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d437e:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar20 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar20 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar20 = uVar21;
              iVar24 = uVar27 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d437e;
          uVar22 = (ushort)(uVar20 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        puVar17[-3] = uVar22;
        fVar2 = param_1[-2];
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar27 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar27 - 0x70;
        if (iVar24 == 0 || uVar27 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d4433:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar20 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar20 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar20 = uVar21;
              iVar24 = uVar27 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d4433;
          uVar22 = (ushort)(uVar20 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        puVar17[-2] = uVar22;
        fVar2 = param_1[-3];
        uVar22 = (ushort)((uint)fVar2 >> 0x10) & 0x8000;
        uVar21 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar21 - 0x70;
        if (iVar24 == 0 || uVar21 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22;
          }
        }
        else if (iVar24 == 0x8f) {
          if (uVar23 == 0) {
LAB_1003d44e8:
            uVar22 = uVar22 | 0x7c00;
          }
          else {
            uVar22 = (ushort)(uVar23 >> 0xd) | uVar22 | (ushort)(uVar23 >> 0xd == 0) | 0x7c00;
          }
        }
        else {
          uVar27 = uVar23;
          if (((uint)fVar2 & 0x1000) != 0) {
            uVar27 = uVar23 + 0x2000;
            if ((uVar23 + 0x2000 & 0x800000) != 0) {
              uVar27 = 0;
              iVar24 = uVar21 - 0x6f;
            }
          }
          if (0x1e < iVar24) goto LAB_1003d44e8;
          uVar22 = (ushort)(uVar27 >> 0xd) | (ushort)(iVar24 << 10) | uVar22;
        }
        puVar17[-1] = uVar22;
        param_1 = param_1 + 4;
        puVar17 = puVar17 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x49:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      puVar16 = (undefined2 *)((long)param_3 + 6);
      do {
        *puVar16 = (short)(int)(*param_1 * fVar10);
        puVar16[-3] = (short)(int)(param_1[-1] * fVar10);
        puVar16[-2] = (short)(int)(param_1[-2] * fVar10);
        puVar16[-1] = (short)(int)(param_1[-3] * fVar10);
        param_1 = param_1 + 4;
        puVar16 = puVar16 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4a:
    if (param_4 != 0) {
      bVar28 = (param_4 & 1) != 0;
      if (bVar28) {
        *(short *)((long)param_3 + 6) = (short)(int)param_1[3];
        *(short *)param_3 = (short)(int)param_1[2];
        *(short *)((long)param_3 + 2) = (short)(int)param_1[1];
        *(short *)(param_3 + 1) = (short)(int)*param_1;
        param_3 = param_3 + 2;
        param_1 = param_1 + 4;
      }
      if (param_4 != 1) {
        iVar24 = param_4 - bVar28;
        param_1 = param_1 + 7;
        puVar16 = (undefined2 *)((long)param_3 + 0xe);
        do {
          puVar16[-4] = (short)(int)param_1[-4];
          puVar16[-7] = (short)(int)param_1[-5];
          puVar16[-6] = (short)(int)param_1[-6];
          puVar16[-5] = (short)(int)param_1[-7];
          *puVar16 = (short)(int)*param_1;
          puVar16[-3] = (short)(int)param_1[-1];
          puVar16[-2] = (short)(int)param_1[-2];
          puVar16[-1] = (short)(int)param_1[-3];
          param_1 = param_1 + 8;
          puVar16 = puVar16 + 8;
          iVar24 = iVar24 + -2;
        } while (iVar24 != 0);
      }
    }
    break;
  case 0x4b:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      puVar17 = (ushort *)((long)param_3 + 6);
      do {
        *puVar17 = (ushort)(int)(*param_1 * fVar10) ^ 0x8000;
        puVar17[-3] = (ushort)(int)(param_1[-1] * fVar10) ^ 0x8000;
        puVar17[-2] = (ushort)(int)(param_1[-2] * fVar10) ^ 0x8000;
        puVar17[-1] = (ushort)(int)(param_1[-3] * fVar10) ^ 0x8000;
        param_1 = param_1 + 4;
        puVar17 = puVar17 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4c:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      puVar17 = (ushort *)((long)param_3 + 6);
      do {
        *puVar17 = (ushort)(int)*param_1 ^ 0x8000;
        puVar17[-3] = (ushort)(int)param_1[-1] ^ 0x8000;
        puVar17[-2] = (ushort)(int)param_1[-2] ^ 0x8000;
        puVar17[-1] = (ushort)(int)param_1[-3] ^ 0x8000;
        param_1 = param_1 + 4;
        puVar17 = puVar17 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4d:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      pbVar18 = (byte *)((long)param_3 + 3);
      do {
        fVar2 = *param_1;
        if (fVar5 <= *param_1) {
          fVar2 = fVar5;
        }
        if (fVar2 <= 0.0) {
          bVar15 = 0;
        }
        else {
          bVar15 = (char)(int)(fVar2 * fVar35) << 6;
        }
        *pbVar18 = bVar15 | *pbVar18 & 0x3f;
        fVar2 = param_1[-1];
        if (fVar5 <= param_1[-1]) {
          fVar2 = fVar5;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)(int)(fVar2 * fVar9);
        }
        *(ushort *)(pbVar18 + -3) = uVar22 | *(ushort *)(pbVar18 + -3) & 0xfc00;
        fVar2 = param_1[-2];
        if (fVar5 <= param_1[-2]) {
          fVar2 = fVar5;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)((int)(fVar2 * fVar9) << 2);
        }
        *(ushort *)(pbVar18 + -2) = uVar22 | *(ushort *)(pbVar18 + -2) & 0xf003;
        fVar2 = param_1[-3];
        if (fVar5 <= param_1[-3]) {
          fVar2 = fVar5;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)((int)(fVar2 * fVar9) << 4);
        }
        *(ushort *)(pbVar18 + -1) = uVar22 | *(ushort *)(pbVar18 + -1) & 0xc00f;
        param_1 = param_1 + 4;
        pbVar18 = pbVar18 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x4e:
    if (param_4 != 0) {
      param_1 = param_1 + 3;
      pbVar18 = (byte *)((long)param_3 + 3);
      do {
        fVar2 = *param_1;
        if (fVar35 <= *param_1) {
          fVar2 = fVar35;
        }
        if (fVar2 <= 0.0) {
          bVar15 = 0;
        }
        else {
          bVar15 = (char)(int)fVar2 << 6;
        }
        *pbVar18 = bVar15 | *pbVar18 & 0x3f;
        fVar2 = param_1[-1];
        if (fVar9 <= param_1[-1]) {
          fVar2 = fVar9;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)(int)fVar2;
        }
        *(ushort *)(pbVar18 + -3) = uVar22 | *(ushort *)(pbVar18 + -3) & 0xfc00;
        fVar2 = param_1[-2];
        if (fVar9 <= param_1[-2]) {
          fVar2 = fVar9;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)((int)fVar2 << 2);
        }
        *(ushort *)(pbVar18 + -2) = uVar22 | *(ushort *)(pbVar18 + -2) & 0xf003;
        fVar2 = param_1[-3];
        if (fVar9 <= param_1[-3]) {
          fVar2 = fVar9;
        }
        if (fVar2 <= 0.0) {
          uVar22 = 0;
        }
        else {
          uVar22 = (ushort)((int)fVar2 << 4);
        }
        *(ushort *)(pbVar18 + -1) = uVar22 | *(ushort *)(pbVar18 + -1) & 0xc00f;
        param_1 = param_1 + 4;
        pbVar18 = pbVar18 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x51:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        fVar2 = *param_1;
        uVar23 = 0;
        uVar27 = (uint)fVar2 >> 0x17 & 0xff;
        uVar21 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar27 - 0x70;
        if (iVar24 == 0 || uVar27 < 0x70) {
          if (iVar24 < -10) {
            uVar23 = 0;
          }
          else {
            uVar21 = (uVar21 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar23 = uVar23 >> 0xd;
          }
        }
        else {
          if (iVar24 == 0x8f) {
            if (uVar21 != 0) {
              uVar23 = uVar21 >> 0xd;
            }
          }
          else {
            uVar20 = uVar21;
            if (((uint)fVar2 & 0x1000) != 0) {
              uVar20 = uVar21 + 0x2000;
              if ((uVar21 + 0x2000 & 0x800000) != 0) {
                uVar20 = 0;
                iVar24 = uVar27 - 0x6f;
              }
            }
            if (iVar24 < 0x1f) {
              uVar23 = (uint)(ushort)((ushort)(uVar20 >> 0xd) | (ushort)(iVar24 << 10));
              goto LAB_1003d49af;
            }
          }
          uVar23 = uVar23 | 0x7c00;
        }
LAB_1003d49af:
        *(ushort *)param_3 = *(ushort *)param_3 & 0xf800 | (ushort)(uVar23 >> 5) & 0x3ff;
        fVar2 = param_1[-1];
        uVar23 = 0;
        uVar27 = (uint)fVar2 >> 0x17 & 0xff;
        uVar21 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar27 - 0x70;
        if (iVar24 == 0 || uVar27 < 0x70) {
          if (iVar24 < -10) {
            uVar23 = 0;
          }
          else {
            uVar21 = (uVar21 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar23 = uVar23 >> 0xd;
          }
        }
        else {
          if (iVar24 == 0x8f) {
            if (uVar21 != 0) {
              uVar23 = uVar21 >> 0xd;
            }
          }
          else {
            uVar20 = uVar21;
            if (((uint)fVar2 & 0x1000) != 0) {
              uVar20 = uVar21 + 0x2000;
              if ((uVar21 + 0x2000 & 0x800000) != 0) {
                uVar20 = 0;
                iVar24 = uVar27 - 0x6f;
              }
            }
            if (iVar24 < 0x1f) {
              uVar23 = (uint)(ushort)((ushort)(uVar20 >> 0xd) | (ushort)(iVar24 << 10));
              goto LAB_1003d4a75;
            }
          }
          uVar23 = uVar23 | 0x7c00;
        }
LAB_1003d4a75:
        *(ushort *)((long)param_3 + 1) =
             *(ushort *)((long)param_3 + 1) & 0xc007 | (ushort)(uVar23 >> 2) & 0x1ff8;
        fVar2 = param_1[-2];
        uVar22 = 0;
        uVar21 = (uint)fVar2 >> 0x17 & 0xff;
        uVar23 = (uint)fVar2 & 0x7fffff;
        iVar24 = uVar21 - 0x70;
        if (iVar24 == 0 || uVar21 < 0x70) {
          if (iVar24 < -10) {
            uVar22 = 0;
          }
          else {
            uVar21 = (uVar23 | 0x800000) >> (0x71U - (char)((uint)fVar2 >> 0x17) & 0x1f);
            uVar23 = uVar21 + 0x2000;
            if ((uVar21 & 0x1000) == 0) {
              uVar23 = uVar21;
            }
            uVar22 = (ushort)(uVar23 >> 0xd);
          }
        }
        else {
          if (iVar24 == 0x8f) {
            if (uVar23 != 0) {
              uVar22 = (ushort)(uVar23 >> 0xd);
            }
          }
          else {
            uVar27 = uVar23;
            if (((uint)fVar2 & 0x1000) != 0) {
              uVar27 = uVar23 + 0x2000;
              if ((uVar23 + 0x2000 & 0x800000) != 0) {
                uVar27 = 0;
                iVar24 = uVar21 - 0x6f;
              }
            }
            if (iVar24 < 0x1f) {
              uVar22 = (ushort)(uVar27 >> 0xd) | (ushort)(iVar24 << 10);
              goto LAB_1003d4b39;
            }
          }
          uVar22 = uVar22 | 0x7c00;
        }
LAB_1003d4b39:
        *(ushort *)((long)param_3 + 2) = *(ushort *)((long)param_3 + 2) & 0x3f | uVar22 & 0x7fc0;
        param_1 = param_1 + 4;
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    break;
  case 0x52:
    if (param_4 != 0) {
      param_1 = param_1 + 2;
      do {
        fVar29 = *param_1;
        if (((fVar8 <= fVar29) || (fVar32 = 0.0, 0.0 < fVar29)) && (fVar32 = fVar8, fVar29 < fVar8))
        {
          fVar32 = fVar29;
        }
        fVar29 = param_1[-1];
        if (((fVar8 <= fVar29) || (fVar33 = 0.0, 0.0 < fVar29)) && (fVar33 = fVar8, fVar29 < fVar8))
        {
          fVar33 = fVar29;
        }
        fVar29 = param_1[-2];
        if (((fVar8 <= fVar29) || (fVar34 = 0.0, 0.0 < fVar29)) && (fVar34 = fVar8, fVar29 < fVar8))
        {
          fVar34 = fVar29;
        }
        fVar29 = fVar33;
        if (fVar33 <= fVar34) {
          fVar29 = fVar34;
        }
        fVar35 = fVar32;
        if (fVar32 <= fVar29) {
          fVar35 = fVar29;
        }
        uVar23 = (uint)fVar35 >> 0x17 & 0xff;
        iVar24 = uVar23 - 0x6f;
        if ((int)(uVar23 - 0x7f) < -0x10) {
          iVar24 = 0;
        }
        if (iVar24 < 0x19) {
          fVar29 = fVar5 / (float)(1 << (0x18U - (char)iVar24 & 0x1f));
        }
        else {
          fVar29 = (float)(1 << ((char)iVar24 - 0x18U & 0x1f));
        }
        if ((int)(fVar35 / fVar29 + fVar2) == 0x200) {
          fVar29 = fVar29 + fVar29;
          iVar24 = iVar24 + 1;
        }
        *param_3 = (float)(iVar24 << 0x1b | (uint)(long)(fVar32 / fVar29 + fVar2) |
                           (int)(long)(fVar33 / fVar29 + fVar2) << 9 |
                          (int)(long)(fVar34 / fVar29 + fVar2) << 0x12);
        param_3 = param_3 + 1;
        param_1 = param_1 + 4;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
  }
  return;
}

