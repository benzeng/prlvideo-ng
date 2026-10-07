
int FUN_10060b6d0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  uint uVar15;
  time_t tVar16;
  ulong uVar17;
  byte *pbVar18;
  int iVar19;
  char *pcVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined2 uVar27;
  uint uVar28;
  int iVar29;
  bool bVar30;
  undefined1 local_48 [16];
  long local_38;
  
  lVar24 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar24;
  if (0x100000000000 < (ulong)(param_1[3] * param_1[2])) {
    FUN_1008e3970("","vdisk",0,"Volume is too big (greate than 16 TiB)");
    iVar13 = -0x7ffffffd;
    goto LAB_10060bd05;
  }
  *(undefined2 *)(param_1 + 4) = 0x482b;
  *(undefined2 *)((long)param_1 + 0x22) = 4;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80002100;
  *(undefined4 *)(param_1 + 5) = 0x736c7270;
  tVar16 = _time((time_t *)0x0);
  iVar13 = (int)tVar16 + 0x7c25b080;
  *(int *)((long)param_1 + 0x34) = iVar13;
  *(int *)(param_1 + 6) = iVar13;
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 100) = 1;
  param_1[0xd] = 3;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  FUN_1007ea830(local_48);
  *(int *)(param_1 + 0x11) = (int)local_48._0_8_;
  *(int *)((long)param_1 + 0x8c) = SUB84(local_48._0_8_,4);
  uVar17 = param_1[3] * param_1[2];
  uVar25 = uVar17 >> 0x29;
  iVar13 = -1;
  if (uVar25 != 0) {
    lVar24 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar13 = (int)lVar24;
  }
  lVar24 = 4;
  if (iVar13 < 4) {
    lVar24 = (long)(iVar13 + 1);
  }
  uVar15 = (&DAT_100b47b50)[lVar24];
  uVar25 = (ulong)uVar15;
  *(uint *)(param_1 + 9) = uVar15;
  uVar21 = (uint)(uVar17 / uVar25);
  *(uint *)((long)param_1 + 0x4c) = uVar21;
  if ((uVar17 % uVar25 != 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,
                  "WARNING: Volume size (%llu sectors) isn\'t aligned to block size (%u bytes, %llu sectors). Volume size is truncated."
                  ,param_1[2],uVar15,uVar25 / (ulong)param_1[3]);
    uVar25 = (ulong)*(uint *)(param_1 + 9);
    uVar21 = *(uint *)((long)param_1 + 0x4c);
  }
  *(uint *)(param_1 + 10) = uVar21 - 2;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0x10;
  *(undefined4 *)(param_1 + 0xb) = 0x10000;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x10000;
  uVar15 = (uint)uVar25;
  if (0x1000 < uVar15) {
    iVar13 = (uVar15 + 0xf) - (int)((ulong)(uVar15 + 0xf) % uVar25);
    *(int *)(param_1 + 0xb) = iVar13;
    *(int *)((long)param_1 + 0x5c) = iVar13;
  }
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  param_1[0x3d] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  uVar17 = (ulong)(uVar21 + 7 >> 3) + (ulong)(uVar15 - 1);
  iVar13 = (int)(uVar17 / uVar25);
  *(int *)((long)param_1 + 0xa4) = iVar13;
  *(int *)((long)param_1 + 0x9c) = iVar13;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(uint *)(param_1 + 0x13) = iVar13 * uVar15;
  param_1[0x12] = (ulong)(iVar13 * uVar15);
  lVar24 = param_1[3];
  ___bzero(param_1 + 0x44,0xd4,uVar17 % uVar25);
  *(int *)((long)param_1 + 0x2c) = iVar13 + 1;
  *(undefined4 *)(param_1 + 0x44) = 5;
  uVar23 = ((uVar21 * uVar25) / 0x1900000000) * 0x800000 + 0x800000;
  uVar17 = 0x20000000;
  if (uVar23 < 0x20000001) {
    uVar17 = uVar23;
  }
  *(ulong *)((long)param_1 + 0x2ec) = uVar17;
  *(ulong *)((long)param_1 + 0x24c) = uVar17;
  iVar29 = (int)(uVar17 / uVar25);
  iVar19 = iVar29 + 2 + iVar13;
  *(int *)((long)param_1 + 0x54) = iVar19;
  iVar29 = (((uVar21 - 2) - iVar13) + -1) - iVar29;
  iVar14 = 0;
  *(int *)(param_1 + 10) = iVar29;
  lVar26 = (iVar13 + 2) * uVar25;
  *(long *)((long)param_1 + 0x244) = lVar26;
  *(long *)((long)param_1 + 0x2e4) = lVar26;
  *(long *)((long)param_1 + 0x2dc) = lVar26;
  *(int *)((long)param_1 + 0x2fc) = (int)lVar24;
  *(undefined4 *)((long)param_1 + 0x2f4) = 0x18000;
  *(undefined4 *)((long)param_1 + 0x2d4) = 0x4a4e4c78;
  *(undefined4 *)(param_1 + 0x5b) = 0x12345678;
  *(undefined4 *)(param_1 + 0x5f) = 0x84cab8f;
  uVar17 = uVar21 * uVar25 >> 0x1f;
  if (uVar17 != 0) {
    lVar24 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar14 = ((uint)lVar24 ^ 0xffffffc0) + 0x41;
  }
  lVar24 = 0xe;
  if (iVar14 < 0xf) {
    lVar24 = (long)iVar14;
  }
  uVar21 = (&DAT_100b47a54)[lVar24 * 3];
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar25;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (ulong)(uVar15 - 1) + (ulong)uVar21;
  iVar13 = SUB164(auVar7 / auVar1,0);
  *(int *)((long)param_1 + 0xf4) = iVar13;
  *(int *)((long)param_1 + 0xec) = iVar13;
  *(int *)((long)param_1 + 0x54) = iVar19 + iVar13;
  *(int *)(param_1 + 10) = iVar29 - iVar13;
  *(int *)(param_1 + 0x1e) = iVar19;
  uVar25 = uVar25 * SUB168(auVar7 / auVar1,0);
  *(int *)(param_1 + 0x1d) = (int)uVar25;
  param_1[0x1c] = uVar25 & 0xffffffff;
  iVar13 = FUN_10060a260(param_1 + 0x60,(ulong)uVar21,0x1000,10,0);
  if (iVar13 < 0) {
    pcVar20 = "Failed to init Extent root node, err = 0x%X";
LAB_10060bce5:
    FUN_1008e3970("","vdisk",0,pcVar20,iVar13);
    lVar24 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  else {
    uVar17 = CONCAT44(0,*(uint *)(param_1 + 9));
    if ((uVar17 < 0x1000) ||
       (uVar27 = 0x2000, *(uint *)((long)param_1 + 0x4c) * uVar17 < 0x40000000)) {
      uVar27 = 0x1000;
    }
    uVar15 = *(uint *)(&UNK_100b47a58 + lVar24 * 0xc);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar17;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)(*(uint *)(param_1 + 9) - 1) + (ulong)uVar15;
    iVar29 = SUB164(auVar8 / auVar2,0);
    *(int *)((long)param_1 + 0x194) = iVar29;
    *(int *)((long)param_1 + 0x18c) = iVar29;
    iVar13 = *(int *)((long)param_1 + 0x54);
    *(int *)((long)param_1 + 0x54) = iVar13 + iVar29;
    *(int *)(param_1 + 10) = (int)param_1[10] - iVar29;
    *(int *)(param_1 + 0x32) = iVar13;
    uVar17 = uVar17 * SUB168(auVar8 / auVar2,0);
    *(int *)(param_1 + 0x31) = (int)uVar17;
    param_1[0x30] = uVar17 & 0xffffffff;
    iVar13 = FUN_10060a260(param_1 + 0x85,(ulong)uVar15,uVar27,0x10a,4);
    if (iVar13 < 0) {
      pcVar20 = "Failed to init Attribute root node, err = 0x%X";
      goto LAB_10060bce5;
    }
    uVar15 = *(uint *)(L"::::::::////////" + lVar24 * 6 + 0x10);
    uVar17 = CONCAT44(0,*(uint *)(param_1 + 9));
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar17;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)(*(uint *)(param_1 + 9) - 1) + (ulong)uVar15;
    iVar29 = SUB164(auVar9 / auVar3,0);
    *(int *)((long)param_1 + 0x144) = iVar29;
    *(int *)((long)param_1 + 0x13c) = iVar29;
    iVar13 = *(int *)((long)param_1 + 0x54);
    *(int *)((long)param_1 + 0x54) = iVar13 + iVar29;
    *(int *)(param_1 + 10) = (int)param_1[10] - iVar29;
    *(int *)(param_1 + 0x28) = iVar13;
    uVar17 = uVar17 * SUB168(auVar9 / auVar3,0);
    *(int *)(param_1 + 0x27) = (int)uVar17;
    param_1[0x26] = uVar17 & 0xffffffff;
    iVar13 = FUN_10060a260(param_1 + 0xaa,(ulong)uVar15,uVar27,0x204,4);
    if (iVar13 < 0) {
      pcVar20 = "Failed to init Catalog root node, err = 0x%X";
      goto LAB_10060bce5;
    }
    FUN_10060c5f0(param_1);
    iVar13 = FUN_10060ab70(param_1 + 0x191);
    lVar24 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (-1 < iVar13) {
      if ((*(int *)((long)param_1 + 0xcac) * *(int *)(param_1[0x191] + 0x48) & 0x1fffffffU) == 0) {
        pbVar18 = (byte *)param_1[0x194];
      }
      else {
        pbVar18 = (byte *)param_1[0x192];
      }
      *pbVar18 = *pbVar18 | 0x80;
      uVar15 = *(int *)((long)param_1 + 0x4c) - 1;
      iVar13 = *(int *)((long)param_1 + 0xcac) * *(int *)(param_1[0x191] + 0x48);
      uVar21 = uVar15 + iVar13 * -8;
      if (uVar15 < (uint)(iVar13 * 8)) {
        *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
             *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) | (byte)(0x80 >> ((byte)uVar15 & 7));
      }
      else {
        uVar17 = (ulong)(uVar21 >> 3);
        *(byte *)(param_1[0x194] + uVar17) =
             *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
      }
      if ((int)param_1[9] == 0x200) {
        uVar15 = *(int *)((long)param_1 + 0x4c) - 2;
        iVar13 = *(int *)((long)param_1 + 0xcac) * *(int *)(param_1[0x191] + 0x48);
        uVar21 = uVar15 + iVar13 * -8;
        if (uVar15 < (uint)(iVar13 * 8)) {
          *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
               *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) | (byte)(0x80 >> ((byte)uVar15 & 7))
          ;
        }
        else {
          uVar17 = (ulong)(uVar21 >> 3);
          *(byte *)(param_1[0x194] + uVar17) =
               *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
        }
      }
      uVar17 = param_1[0x14];
      iVar29 = *(int *)(param_1[0x191] + 0x48) * *(int *)((long)param_1 + 0xcac);
      uVar15 = (uint)uVar17;
      uVar21 = uVar15 + iVar29 * -8;
      iVar13 = (int)(uVar17 >> 0x20);
      if (uVar15 < (uint)(iVar29 * 8)) {
        if (iVar13 != 0) {
          bVar30 = (uVar17 >> 0x20 & 1) != 0;
          if (bVar30) {
            uVar25 = uVar17 >> 3 & 0x1fffffff;
            *(byte *)(param_1[0x192] + uVar25) =
                 *(byte *)(param_1[0x192] + uVar25) | (byte)(0x80 >> ((byte)uVar17 & 7));
          }
          uVar21 = (uint)bVar30;
          if (iVar13 != 1) {
            uVar15 = uVar15 + uVar21;
            iVar13 = iVar13 - uVar21;
            do {
              *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
                   *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) |
                   (byte)(0x80 >> ((byte)uVar15 & 7));
              uVar17 = (ulong)(uVar15 + 1 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
              uVar15 = uVar15 + 2;
              iVar13 = iVar13 + -2;
            } while (iVar13 != 0);
          }
        }
      }
      else if (iVar13 != 0) {
        bVar30 = (uVar17 >> 0x20 & 1) != 0;
        if (bVar30) {
          uVar17 = (ulong)(uVar21 >> 3);
          *(byte *)(param_1[0x194] + uVar17) =
               *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
        }
        uVar21 = (uint)bVar30;
        if (iVar13 != 1) {
          uVar15 = uVar15 + uVar21 + iVar29 * -8;
          iVar13 = iVar13 - uVar21;
          do {
            *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) =
                 *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) |
                 (byte)(0x80 >> ((byte)uVar15 & 7));
            uVar17 = (ulong)(uVar15 + 1 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
            uVar15 = uVar15 + 2;
            iVar13 = iVar13 + -2;
          } while (iVar13 != 0);
        }
      }
      uVar15 = *(uint *)((long)param_1 + 0x2c);
      iVar13 = *(int *)((long)param_1 + 0xcac) * *(int *)(param_1[0x191] + 0x48);
      uVar21 = uVar15 + iVar13 * -8;
      if (uVar15 < (uint)(iVar13 * 8)) {
        *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
             *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) | (byte)(0x80 >> ((byte)uVar15 & 7));
      }
      else {
        uVar17 = (ulong)(uVar21 >> 3);
        *(byte *)(param_1[0x194] + uVar17) =
             *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
      }
      uVar17 = *(ulong *)((long)param_1 + 0x24c);
      uVar25 = CONCAT44(0,*(uint *)(param_1 + 9));
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar25;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = *(ulong *)((long)param_1 + 0x244);
      auVar10 = auVar10 / auVar4;
      iVar13 = *(int *)((long)param_1 + 0xcac) * *(int *)(param_1[0x191] + 0x48);
      uVar15 = auVar10._0_4_;
      uVar21 = uVar15 + iVar13 * -8;
      uVar28 = (uint)(uVar17 / uVar25);
      if (uVar15 < (uint)(iVar13 * 8)) {
        if (uVar28 != 0) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar25;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar17;
          bVar30 = (SUB168(auVar11 / auVar5,0) & 1) != 0;
          if (bVar30) {
            uVar17 = auVar10._0_8_ >> 3 & 0x1fffffff;
            *(byte *)(param_1[0x192] + uVar17) =
                 *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> (auVar10[0] & 7));
          }
          uVar21 = (uint)bVar30;
          if (SUB164(auVar11 / auVar5,0) != 1) {
            do {
              uVar17 = (ulong)(uVar21 + uVar15 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) |
                   (byte)(0x80 >> ((byte)(uVar21 + uVar15) & 7));
              uVar22 = uVar21 + 1 + uVar15;
              uVar17 = (ulong)(uVar22 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> ((byte)uVar22 & 7));
              uVar21 = uVar21 + 2;
            } while (uVar21 != uVar28);
          }
        }
      }
      else if (uVar28 != 0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar25;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar17;
        bVar30 = (SUB168(auVar12 / auVar6,0) & 1) != 0;
        if (bVar30) {
          *(byte *)(param_1[0x194] + (ulong)(uVar21 >> 3)) =
               *(byte *)(param_1[0x194] + (ulong)(uVar21 >> 3)) | (byte)(0x80 >> ((byte)uVar21 & 7))
          ;
        }
        uVar15 = (uint)bVar30;
        if (SUB164(auVar12 / auVar6,0) != 1) {
          do {
            uVar17 = (ulong)(uVar15 + uVar21 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + uVar21) & 7));
            uVar22 = uVar15 + 1 + uVar21;
            uVar17 = (ulong)(uVar22 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar22 & 7));
            uVar15 = uVar15 + 2;
          } while (uVar15 != uVar28);
        }
      }
      uVar17 = param_1[0x1e];
      iVar29 = *(int *)(param_1[0x191] + 0x48) * *(int *)((long)param_1 + 0xcac);
      uVar15 = (uint)uVar17;
      uVar21 = uVar15 + iVar29 * -8;
      iVar13 = (int)(uVar17 >> 0x20);
      if (uVar15 < (uint)(iVar29 * 8)) {
        if (iVar13 != 0) {
          bVar30 = (uVar17 >> 0x20 & 1) != 0;
          if (bVar30) {
            uVar25 = uVar17 >> 3 & 0x1fffffff;
            *(byte *)(param_1[0x192] + uVar25) =
                 *(byte *)(param_1[0x192] + uVar25) | (byte)(0x80 >> ((byte)uVar17 & 7));
          }
          uVar21 = (uint)bVar30;
          if (iVar13 != 1) {
            uVar15 = uVar15 + uVar21;
            iVar13 = iVar13 - uVar21;
            do {
              *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
                   *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) |
                   (byte)(0x80 >> ((byte)uVar15 & 7));
              uVar17 = (ulong)(uVar15 + 1 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
              uVar15 = uVar15 + 2;
              iVar13 = iVar13 + -2;
            } while (iVar13 != 0);
          }
        }
      }
      else if (iVar13 != 0) {
        bVar30 = (uVar17 >> 0x20 & 1) != 0;
        if (bVar30) {
          uVar17 = (ulong)(uVar21 >> 3);
          *(byte *)(param_1[0x194] + uVar17) =
               *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
        }
        uVar21 = (uint)bVar30;
        if (iVar13 != 1) {
          uVar15 = uVar15 + uVar21 + iVar29 * -8;
          iVar13 = iVar13 - uVar21;
          do {
            *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) =
                 *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) |
                 (byte)(0x80 >> ((byte)uVar15 & 7));
            uVar17 = (ulong)(uVar15 + 1 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
            uVar15 = uVar15 + 2;
            iVar13 = iVar13 + -2;
          } while (iVar13 != 0);
        }
      }
      uVar17 = param_1[0x32];
      iVar29 = *(int *)(param_1[0x191] + 0x48) * *(int *)((long)param_1 + 0xcac);
      uVar15 = (uint)uVar17;
      uVar21 = uVar15 + iVar29 * -8;
      iVar13 = (int)(uVar17 >> 0x20);
      if (uVar15 < (uint)(iVar29 * 8)) {
        if (iVar13 != 0) {
          bVar30 = (uVar17 >> 0x20 & 1) != 0;
          if (bVar30) {
            uVar25 = uVar17 >> 3 & 0x1fffffff;
            *(byte *)(param_1[0x192] + uVar25) =
                 *(byte *)(param_1[0x192] + uVar25) | (byte)(0x80 >> ((byte)uVar17 & 7));
          }
          uVar21 = (uint)bVar30;
          if (iVar13 != 1) {
            uVar15 = uVar15 + uVar21;
            iVar13 = iVar13 - uVar21;
            do {
              *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
                   *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) |
                   (byte)(0x80 >> ((byte)uVar15 & 7));
              uVar17 = (ulong)(uVar15 + 1 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
              uVar15 = uVar15 + 2;
              iVar13 = iVar13 + -2;
            } while (iVar13 != 0);
          }
        }
      }
      else if (iVar13 != 0) {
        bVar30 = (uVar17 >> 0x20 & 1) != 0;
        if (bVar30) {
          uVar17 = (ulong)(uVar21 >> 3);
          *(byte *)(param_1[0x194] + uVar17) =
               *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
        }
        uVar21 = (uint)bVar30;
        if (iVar13 != 1) {
          uVar15 = uVar15 + uVar21 + iVar29 * -8;
          iVar13 = iVar13 - uVar21;
          do {
            *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) =
                 *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) |
                 (byte)(0x80 >> ((byte)uVar15 & 7));
            uVar17 = (ulong)(uVar15 + 1 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
            uVar15 = uVar15 + 2;
            iVar13 = iVar13 + -2;
          } while (iVar13 != 0);
        }
      }
      uVar17 = param_1[0x28];
      iVar14 = *(int *)(param_1[0x191] + 0x48) * *(int *)((long)param_1 + 0xcac);
      uVar15 = (uint)uVar17;
      iVar13 = 0;
      uVar21 = uVar15 + iVar14 * -8;
      iVar29 = (int)(uVar17 >> 0x20);
      if (uVar15 < (uint)(iVar14 * 8)) {
        iVar13 = 0;
        if (iVar29 != 0) {
          iVar13 = 0;
          bVar30 = (uVar17 >> 0x20 & 1) != 0;
          if (bVar30) {
            uVar25 = uVar17 >> 3 & 0x1fffffff;
            *(byte *)(param_1[0x192] + uVar25) =
                 *(byte *)(param_1[0x192] + uVar25) | (byte)(0x80 >> ((byte)uVar17 & 7));
          }
          if (iVar29 != 1) {
            uVar21 = (uint)bVar30;
            uVar15 = uVar15 + uVar21;
            iVar29 = iVar29 - uVar21;
            do {
              *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) =
                   *(byte *)(param_1[0x192] + (ulong)(uVar15 >> 3)) |
                   (byte)(0x80 >> ((byte)uVar15 & 7));
              uVar17 = (ulong)(uVar15 + 1 >> 3);
              *(byte *)(param_1[0x192] + uVar17) =
                   *(byte *)(param_1[0x192] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
              uVar15 = uVar15 + 2;
              iVar29 = iVar29 + -2;
            } while (iVar29 != 0);
          }
        }
      }
      else if (iVar29 != 0) {
        iVar13 = 0;
        bVar30 = (uVar17 >> 0x20 & 1) != 0;
        if (bVar30) {
          uVar17 = (ulong)(uVar21 >> 3);
          *(byte *)(param_1[0x194] + uVar17) =
               *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)uVar21 & 7));
        }
        if (iVar29 != 1) {
          uVar21 = (uint)bVar30;
          uVar15 = uVar15 + uVar21 + iVar14 * -8;
          iVar29 = iVar29 - uVar21;
          do {
            *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) =
                 *(byte *)(param_1[0x194] + (ulong)(uVar15 >> 3)) |
                 (byte)(0x80 >> ((byte)uVar15 & 7));
            uVar17 = (ulong)(uVar15 + 1 >> 3);
            *(byte *)(param_1[0x194] + uVar17) =
                 *(byte *)(param_1[0x194] + uVar17) | (byte)(0x80 >> ((byte)(uVar15 + 1) & 7));
            uVar15 = uVar15 + 2;
            iVar29 = iVar29 + -2;
          } while (iVar29 != 0);
        }
      }
      goto LAB_10060bd05;
    }
    FUN_1008e3970("","vdisk",0,"Failed to init Allocation file");
  }
  (**(code **)(*param_1 + 0x20))(param_1);
LAB_10060bd05:
  if (lVar24 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar13;
}

