
void FUN_10082b420(byte *param_1,byte *param_2,int param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,uint *param_8,int param_9)

{
  byte bVar1;
  uint3 uVar2;
  byte bVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  byte bVar12;
  uint uVar13;
  byte bVar15;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  uint local_9c;
  byte *local_60;
  byte local_58 [4];
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  undefined8 local_40;
  long local_38;
  byte bVar6;
  byte bVar7;
  
  lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar30 = (ulong)(param_3 + 7U >> 3);
  local_38 = lVar10;
  if (param_3 < 0x41) {
    uVar11 = *param_8;
    uVar8 = (ulong)uVar11;
    uVar16 = param_8[1];
    uVar9 = (ulong)uVar16;
    local_60 = param_2;
    if (param_9 == 0) {
      if (uVar30 <= param_4) {
        iVar18 = param_3 % 8;
        bVar3 = (byte)iVar18;
        bVar23 = 8 - bVar3;
        do {
          local_40 = CONCAT44((int)uVar9,(int)uVar8);
          FUN_10082ec50(&local_40,param_5,param_6,param_7);
          uVar29 = uVar30 - 1;
          uVar17 = 0;
          uVar26 = 0;
          uVar22 = 0;
          uVar24 = 0;
          uVar21 = 0;
          uVar25 = 0;
          uVar14 = 0;
          uVar19 = 0;
          uVar28 = 0;
          uVar13 = 0;
          uVar27 = uVar30;
          uVar11 = 0;
          uVar16 = 0;
          switch(uVar29) {
          case 7:
            uVar22 = (uint)param_1[uVar30 - 1] << 0x18;
          case 6:
            uVar24 = (uint)param_1[6] << 0x10 | uVar22;
          case 5:
            uVar21 = (uint)param_1[5] << 8 | uVar24;
          case 4:
            uVar25 = param_1[4] | uVar21;
          case 3:
            uVar14 = (uint)param_1[3] << 0x18;
            uVar16 = uVar25;
          case 2:
            uVar28 = uVar16;
            uVar19 = (uint)param_1[2] << 0x10 | uVar14;
          case 1:
            uVar13 = (uint)param_1[1] << 8 | uVar19;
            uVar11 = uVar28;
          case 0:
            uVar26 = uVar11;
            uVar17 = *param_1 | uVar13;
            uVar27 = 0;
          }
          if (param_3 == 0x20) {
            uVar20 = (ulong)uVar17;
            uVar4 = uVar9;
          }
          else {
            uVar20 = (ulong)uVar26;
            uVar4 = (ulong)uVar17;
            if (param_3 != 0x40) {
              local_58[0] = (byte)uVar8;
              local_58[1] = (byte)(uVar8 >> 8);
              local_58[2] = (byte)(uVar8 >> 0x10);
              local_58[3] = (byte)(uVar8 >> 0x18);
              bStack_54 = (byte)uVar9;
              bStack_53 = (byte)(uVar9 >> 8);
              bStack_52 = (byte)(uVar9 >> 0x10);
              bStack_51 = (byte)(uVar9 >> 0x18);
              local_50 = (byte)uVar17;
              local_4f = (byte)(uVar17 >> 8);
              local_4e = (byte)(uVar17 >> 0x10);
              local_4d = (byte)(uVar17 >> 0x18);
              local_4c = (byte)uVar26;
              local_4b = (byte)(uVar26 >> 8);
              local_4a = (byte)(uVar26 >> 0x10);
              local_49 = (byte)(uVar26 >> 0x18);
              ___memmove_chk(local_58,local_58 +
                                      ((int)(((uint)(param_3 >> 0x1f) >> 0x1d) + param_3) >> 3),
                             iVar18 != 0 | 8,0x10);
              if (iVar18 == 0) {
                uVar2 = CONCAT12(local_58[2],CONCAT11(local_58[1],local_58[0]));
                uVar11 = CONCAT13(local_58[3],uVar2);
                uVar9 = CONCAT17(bStack_51,
                                 CONCAT16(bStack_52,CONCAT15(bStack_53,CONCAT14(bStack_54,uVar11))))
                ;
                local_9c = (uVar2 & 0xff00) >> 8;
                uVar11 = uVar11 >> 0x10;
                uVar25 = (uint)(uVar9 >> 0x20);
                uVar14 = uVar25 >> 8;
                uVar16 = (uint)(ushort)(uVar9 >> 0x30);
                uVar13 = (uint)bStack_51;
                uVar21 = (uint)local_58[3];
              }
              else {
                uVar11 = (uint)(local_58[1] >> (bVar23 & 0x1f)) |
                         (uint)local_58[0] << (bVar3 & 0x1f);
                uVar9 = (ulong)uVar11;
                local_58[0] = (byte)uVar11;
                local_9c = (uint)(local_58[2] >> (bVar23 & 0x1f)) |
                           (uint)local_58[1] << (bVar3 & 0x1f);
                local_58[1] = (byte)local_9c;
                uVar11 = (uint)(local_58[3] >> (bVar23 & 0x1f)) |
                         (uint)local_58[2] << (bVar3 & 0x1f);
                local_58[2] = (byte)uVar11;
                uVar21 = (uint)(bStack_54 >> (bVar23 & 0x1f)) | (uint)local_58[3] << (bVar3 & 0x1f);
                local_58[3] = (byte)uVar21;
                uVar25 = (uint)(bStack_53 >> (bVar23 & 0x1f)) | (uint)bStack_54 << (bVar3 & 0x1f);
                bStack_54 = (byte)uVar25;
                uVar14 = (uint)(bStack_52 >> (bVar23 & 0x1f)) | (uint)bStack_53 << (bVar3 & 0x1f);
                bStack_53 = (byte)uVar14;
                uVar16 = (uint)(bStack_51 >> (bVar23 & 0x1f)) | (uint)bStack_52 << (bVar3 & 0x1f);
                bStack_52 = (byte)uVar16;
                uVar13 = (uint)(local_50 >> (bVar23 & 0x1f)) | (uint)bStack_51 << (bVar3 & 0x1f);
                bStack_51 = (byte)uVar13;
              }
              uVar20 = (ulong)(uVar13 << 0x18 |
                              (uVar16 & 0xff) << 0x10 | (uVar14 & 0xff) << 8 | uVar25 & 0xff);
              uVar4 = (ulong)(uVar21 << 0x18 |
                             (uVar11 & 0xff) << 0x10 | (local_9c & 0xff) << 8 | (uint)uVar9 & 0xff);
            }
          }
          uVar8 = uVar4;
          uVar16 = (uint)uVar20;
          uVar11 = (uint)uVar8;
          param_4 = param_4 - uVar30;
          uVar9 = uVar30;
          if (uVar29 < 8) {
            uVar17 = uVar17 ^ (uint)local_40;
            uVar26 = uVar26 ^ local_40._4_4_;
            switch(uVar29) {
            case 7:
              local_60[uVar30 - 1] = (byte)(uVar26 >> 0x18);
            case 6:
              local_60[6] = (byte)(uVar26 >> 0x10);
            case 5:
              local_60[5] = (byte)(uVar26 >> 8);
            case 4:
              local_60[4] = (byte)uVar26;
            case 3:
              local_60[3] = (byte)(uVar17 >> 0x18);
            case 2:
              local_60[2] = (byte)(uVar17 >> 0x10);
            case 1:
              local_60[1] = (byte)(uVar17 >> 8);
            case 0:
              *local_60 = (byte)uVar17;
              uVar9 = 0;
            }
          }
          param_1 = param_1 + uVar27 + uVar30;
          local_60 = local_60 + uVar9 + uVar30;
          uVar9 = uVar20;
        } while (uVar30 <= param_4);
      }
    }
    else if (uVar30 <= param_4) {
      iVar18 = param_3 % 8;
      bVar3 = (byte)iVar18;
      bVar23 = 8 - bVar3;
      do {
        local_40._0_4_ = (uint)uVar8;
        local_40._4_4_ = (uint)uVar9;
        FUN_10082ec50(&local_40,param_5,param_6,param_7);
        uVar11 = 0;
        uVar14 = 0;
        uVar22 = 0;
        uVar24 = 0;
        uVar21 = 0;
        uVar26 = 0;
        uVar19 = 0;
        uVar25 = 0;
        uVar28 = 0;
        uVar17 = 0;
        uVar29 = uVar30;
        uVar16 = 0;
        uVar13 = 0;
        switch(uVar30 - 1) {
        case 7:
          uVar22 = (uint)param_1[uVar30 - 1] << 0x18;
        case 6:
          uVar24 = (uint)param_1[6] << 0x10 | uVar22;
        case 5:
          uVar21 = (uint)param_1[5] << 8 | uVar24;
        case 4:
          uVar26 = param_1[4] | uVar21;
        case 3:
          uVar19 = (uint)param_1[3] << 0x18;
          uVar13 = uVar26;
        case 2:
          uVar28 = uVar13;
          uVar25 = (uint)param_1[2] << 0x10 | uVar19;
        case 1:
          uVar17 = (uint)param_1[1] << 8 | uVar25;
          uVar16 = uVar28;
        case 0:
          uVar14 = uVar16;
          uVar11 = *param_1 | uVar17;
          uVar29 = 0;
        }
        uVar11 = uVar11 ^ (uint)local_40;
        uVar14 = uVar14 ^ local_40._4_4_;
        bVar15 = (byte)(uVar14 >> 8);
        bVar12 = (byte)(uVar11 >> 8);
        bVar5 = (byte)(uVar14 >> 0x18);
        bVar6 = (byte)(uVar11 >> 0x10);
        bVar7 = (byte)(uVar11 >> 0x18);
        bVar1 = (byte)(uVar14 >> 0x10);
        uVar27 = uVar30;
        switch(uVar30 - 1) {
        case 7:
          local_60[uVar30 - 1] = bVar5;
        case 6:
          local_60[6] = bVar1;
        case 5:
          local_60[5] = bVar15;
        case 4:
          local_60[4] = (byte)uVar14;
        case 3:
          local_60[3] = bVar7;
        case 2:
          local_60[2] = bVar6;
        case 1:
          local_60[1] = bVar12;
        case 0:
          *local_60 = (byte)uVar11;
          uVar27 = 0;
        }
        param_4 = param_4 - uVar30;
        if (param_3 == 0x20) {
          uVar4 = (ulong)uVar11;
          uVar11 = (uint)uVar9;
        }
        else {
          uVar4 = (ulong)uVar14;
          if (param_3 != 0x40) {
            local_58[0] = (byte)uVar8;
            local_58[1] = (byte)(uVar8 >> 8);
            local_58[2] = (byte)(uVar8 >> 0x10);
            local_58[3] = (byte)(uVar8 >> 0x18);
            bStack_54 = (byte)uVar9;
            bStack_53 = (byte)(uVar9 >> 8);
            bStack_52 = (byte)(uVar9 >> 0x10);
            bStack_51 = (byte)(uVar9 >> 0x18);
            local_50 = (byte)uVar11;
            local_4f = bVar12;
            local_4e = bVar6;
            local_4d = bVar7;
            local_4c = (byte)uVar14;
            local_4b = bVar15;
            local_4a = bVar1;
            local_49 = bVar5;
            ___memmove_chk(local_58,local_58 +
                                    ((int)(((uint)(param_3 >> 0x1f) >> 0x1d) + param_3) >> 3),
                           iVar18 != 0 | 8,0x10);
            if (iVar18 == 0) {
              uVar2 = CONCAT12(local_58[2],CONCAT11(local_58[1],local_58[0]));
              uVar11 = CONCAT13(local_58[3],uVar2);
              uVar9 = CONCAT17(bStack_51,
                               CONCAT16(bStack_52,CONCAT15(bStack_53,CONCAT14(bStack_54,uVar11))));
              uVar16 = (uVar2 & 0xff00) >> 8;
              uVar11 = uVar11 >> 0x10;
              uVar21 = (uint)(uVar9 >> 0x20);
              uVar14 = uVar21 >> 8;
              uVar17 = (uint)(ushort)(uVar9 >> 0x30);
              uVar13 = (uint)bStack_51;
              uVar25 = (uint)local_58[3];
            }
            else {
              uVar11 = (uint)(local_58[1] >> (bVar23 & 0x1f)) | (uint)local_58[0] << (bVar3 & 0x1f);
              uVar9 = (ulong)uVar11;
              local_58[0] = (byte)uVar11;
              uVar16 = (uint)(local_58[2] >> (bVar23 & 0x1f)) | (uint)local_58[1] << (bVar3 & 0x1f);
              local_58[1] = (byte)uVar16;
              uVar11 = (uint)(local_58[3] >> (bVar23 & 0x1f)) | (uint)local_58[2] << (bVar3 & 0x1f);
              local_58[2] = (byte)uVar11;
              uVar25 = (uint)(bStack_54 >> (bVar23 & 0x1f)) | (uint)local_58[3] << (bVar3 & 0x1f);
              local_58[3] = (byte)uVar25;
              uVar21 = (uint)(bStack_53 >> (bVar23 & 0x1f)) | (uint)bStack_54 << (bVar3 & 0x1f);
              bStack_54 = (byte)uVar21;
              uVar14 = (uint)(bStack_52 >> (bVar23 & 0x1f)) | (uint)bStack_53 << (bVar3 & 0x1f);
              bStack_53 = (byte)uVar14;
              uVar17 = (uint)(bStack_51 >> (bVar23 & 0x1f)) | (uint)bStack_52 << (bVar3 & 0x1f);
              bStack_52 = (byte)uVar17;
              uVar13 = (uint)(local_50 >> (bVar23 & 0x1f)) | (uint)bStack_51 << (bVar3 & 0x1f);
              bStack_51 = (byte)uVar13;
            }
            uVar11 = uVar25 << 0x18 |
                     (uVar11 & 0xff) << 0x10 | (uVar16 & 0xff) << 8 | (uint)uVar9 & 0xff;
            uVar4 = (ulong)(uVar13 << 0x18 |
                           (uVar17 & 0xff) << 0x10 | (uVar14 & 0xff) << 8 | uVar21 & 0xff);
          }
        }
        uVar9 = uVar4;
        uVar16 = (uint)uVar9;
        uVar8 = (ulong)uVar11;
        param_1 = param_1 + uVar29 + uVar30;
        local_60 = local_60 + uVar27 + uVar30;
      } while (uVar30 <= param_4);
    }
    *(char *)param_8 = (char)uVar11;
    *(char *)((long)param_8 + 1) = (char)(uVar11 >> 8);
    *(char *)((long)param_8 + 2) = (char)(uVar11 >> 0x10);
    *(char *)((long)param_8 + 3) = (char)(uVar11 >> 0x18);
    *(char *)(param_8 + 1) = (char)uVar16;
    *(char *)((long)param_8 + 5) = (char)(uVar16 >> 8);
    *(char *)((long)param_8 + 6) = (char)(uVar16 >> 0x10);
    *(char *)((long)param_8 + 7) = (char)(uVar16 >> 0x18);
    local_40 = 0;
    lVar10 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar10 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

