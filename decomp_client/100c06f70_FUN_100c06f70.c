
void FUN_100c06f70(long param_1,long param_2,int param_3,ulong param_4,undefined8 param_5,
                  uint *param_6,int param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  byte bVar21;
  uint uVar22;
  ulong uVar23;
  long local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_40;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar6;
  if (param_3 - 1U < 0x40) {
    iVar4 = (int)(((uint)(param_3 >> 0x1f) >> 0x1d) + param_3) >> 3;
    iVar15 = (int)(param_3 + 7 + ((uint)(param_3 + 7 >> 0x1f) >> 0x1d)) >> 3;
    iVar9 = param_3 % 8;
    uVar5 = *param_6;
    uVar20 = (ulong)uVar5;
    uVar12 = param_6[1];
    uVar23 = (ulong)uVar12;
    uVar18 = (ulong)iVar15;
    bVar7 = (byte)iVar9;
    local_60 = param_2;
    if (param_7 == 0) {
      if (uVar18 <= param_4) {
        lVar6 = (long)iVar4;
        bVar21 = 8 - bVar7;
        uVar1 = uVar18 - 1;
        do {
          uVar16 = (uint)uVar23;
          local_40._0_4_ = (uint)uVar20;
          local_40._4_4_ = uVar16;
          FUN_100c07a60(&local_40,param_5,1);
          uVar11 = 0;
          uVar17 = 0;
          uVar8 = iVar15 - 1;
          uVar5 = 0;
          uVar10 = 0;
          uVar12 = 0;
          uVar19 = uVar18;
          uVar13 = uVar18;
          switch(uVar8) {
          case 7:
            uVar17 = (uint)*(byte *)(param_1 + uVar1) << 0x18;
            uVar19 = uVar1;
          case 6:
            uVar13 = uVar19 - 1;
            uVar17 = uVar17 | (uint)*(byte *)(param_1 + -1 + uVar19) << 0x10;
          case 5:
            uVar19 = uVar13 - 1;
            uVar17 = uVar17 | (uint)*(byte *)(param_1 + -1 + uVar13) << 8;
          case 4:
            uVar13 = uVar19 - 1;
            uVar11 = (ulong)(uVar17 | *(byte *)(param_1 + -1 + uVar19));
          case 3:
            uVar19 = uVar13 - 1;
            uVar5 = (uint)*(byte *)(param_1 + -1 + uVar13) << 0x18;
          case 2:
            uVar13 = uVar19 - 1;
            uVar10 = (uint)*(byte *)(param_1 + -1 + uVar19) << 0x10 | uVar5;
          case 1:
            uVar19 = uVar13 - 1;
            uVar12 = (uint)*(byte *)(param_1 + -1 + uVar13) << 8 | uVar10;
          case 0:
            uVar13 = uVar19 - 1;
            uVar12 = *(byte *)(param_1 + -1 + uVar19) | uVar12;
            break;
          default:
            uVar12 = 0;
            uVar13 = uVar18;
          }
          if (param_3 == 0x20) {
            uVar19 = uVar23;
            uVar3 = (ulong)uVar12;
          }
          else {
            uVar19 = (ulong)uVar12;
            uVar3 = uVar11;
            if (param_3 != 0x40) {
              local_58 = CONCAT44(uVar16,(uint)uVar20);
              uVar2 = local_58;
              local_50 = uVar12;
              local_4c = (uint)uVar11;
              if (iVar9 == 0) {
                local_58 = *(ulong *)((long)&local_58 + lVar6);
              }
              else {
                bVar14 = *(byte *)((long)&local_58 + lVar6 + 1) >> (bVar21 & 0x1f) |
                         *(char *)((long)&local_58 + lVar6) << (bVar7 & 0x1f);
                local_58 = CONCAT71(local_58._1_7_,bVar14);
                local_58._2_6_ = SUB86(uVar2,2);
                local_58._0_2_ =
                     CONCAT11(*(byte *)((long)&local_58 + lVar6 + 2) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 1) << (bVar7 & 0x1f),bVar14);
                local_58._3_5_ = SUB85(uVar2,3);
                local_58._0_3_ =
                     CONCAT12(*(byte *)((long)&local_58 + lVar6 + 3) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 2) << (bVar7 & 0x1f),
                              (undefined2)local_58);
                local_58._0_4_ =
                     CONCAT13(*(byte *)((long)&local_58 + lVar6 + 4) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 3) << (bVar7 & 0x1f),
                              (undefined3)local_58);
                local_58 = CONCAT44(uVar16,(undefined4)local_58);
                local_58._5_3_ = (undefined3)(uVar23 >> 8);
                local_58._0_5_ =
                     CONCAT14(*(byte *)((long)&local_58 + lVar6 + 5) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 4) << (bVar7 & 0x1f),
                              (undefined4)local_58);
                local_58._6_2_ = (undefined2)(uVar23 >> 0x10);
                local_58._0_6_ =
                     CONCAT15(*(byte *)((long)&local_58 + lVar6 + 6) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 5) << (bVar7 & 0x1f),
                              (undefined5)local_58);
                local_58._7_1_ = (undefined1)(uVar23 >> 0x18);
                local_58._0_7_ =
                     CONCAT16(*(byte *)((long)&local_58 + lVar6 + 7) >> (bVar21 & 0x1f) |
                              *(char *)((long)&local_58 + lVar6 + 6) << (bVar7 & 0x1f),
                              (undefined6)local_58);
                local_58 = CONCAT17(*(byte *)((long)&local_50 + lVar6) >> (bVar21 & 0x1f) |
                                    *(char *)((long)&local_58 + lVar6 + 7) << (bVar7 & 0x1f),
                                    (undefined7)local_58);
              }
              uVar19 = local_58;
              uVar3 = local_58 >> 0x20;
            }
          }
          uVar23 = uVar3;
          uVar5 = (uint)uVar19;
          param_4 = param_4 - uVar18;
          uVar20 = uVar18;
          if (uVar8 < 8) {
            uVar12 = uVar12 ^ (uint)local_40;
            local_40._4_4_ = (uint)uVar11 ^ local_40._4_4_;
            switch(uVar8) {
            case 7:
              *(char *)(local_60 + uVar1) = (char)(local_40._4_4_ >> 0x18);
              uVar20 = uVar1;
            case 6:
              *(char *)(local_60 + -1 + uVar20) = (char)(local_40._4_4_ >> 0x10);
              uVar20 = uVar20 - 1;
            case 5:
              *(char *)(local_60 + -1 + uVar20) = (char)(local_40._4_4_ >> 8);
              uVar20 = uVar20 - 1;
            case 4:
              *(char *)(local_60 + -1 + uVar20) = (char)local_40._4_4_;
              uVar20 = uVar20 - 1;
            case 3:
              *(char *)(local_60 + -1 + uVar20) = (char)(uVar12 >> 0x18);
              uVar20 = uVar20 - 1;
            case 2:
              *(char *)(local_60 + -1 + uVar20) = (char)(uVar12 >> 0x10);
              uVar20 = uVar20 - 1;
            case 1:
              *(char *)(local_60 + -1 + uVar20) = (char)(uVar12 >> 8);
              uVar20 = uVar20 - 1;
            case 0:
              *(char *)(local_60 + -1 + uVar20) = (char)uVar12;
              uVar20 = uVar20 - 1;
            }
          }
          param_1 = param_1 + uVar13 + uVar18;
          local_60 = local_60 + uVar20 + uVar18;
          uVar12 = (uint)uVar23;
          uVar20 = uVar19 & 0xffffffff;
        } while (uVar18 <= param_4);
      }
    }
    else if (uVar18 <= param_4) {
      lVar6 = (long)iVar4;
      bVar21 = 8 - bVar7;
      uVar1 = uVar18 - 1;
      do {
        uVar22 = (uint)uVar23;
        local_40._0_4_ = (uint)uVar20;
        uVar5 = (uint)local_40;
        local_40._4_4_ = uVar22;
        FUN_100c07a60(&local_40,param_5,1);
        uVar10 = 0;
        uVar8 = 0;
        uVar17 = 0;
        uVar16 = 0;
        uVar12 = 0;
        uVar20 = uVar18;
        uVar19 = uVar18;
        switch(iVar15 + -1) {
        case 7:
          uVar8 = (uint)*(byte *)(param_1 + uVar1) << 0x18;
          uVar20 = uVar1;
        case 6:
          uVar19 = uVar20 - 1;
          uVar10 = uVar8 | (uint)*(byte *)(param_1 + -1 + uVar20) << 0x10;
        case 5:
          uVar20 = uVar19 - 1;
          uVar10 = uVar10 | (uint)*(byte *)(param_1 + -1 + uVar19) << 8;
        case 4:
          uVar19 = uVar20 - 1;
          uVar10 = uVar10 | *(byte *)(param_1 + -1 + uVar20);
        case 3:
          uVar20 = uVar19 - 1;
          uVar17 = (uint)*(byte *)(param_1 + -1 + uVar19) << 0x18;
        case 2:
          uVar19 = uVar20 - 1;
          uVar16 = (uint)*(byte *)(param_1 + -1 + uVar20) << 0x10 | uVar17;
        case 1:
          uVar20 = uVar19 - 1;
          uVar12 = (uint)*(byte *)(param_1 + -1 + uVar19) << 8 | uVar16;
        case 0:
          uVar19 = uVar20 - 1;
          uVar12 = *(byte *)(param_1 + -1 + uVar20) | uVar12;
          break;
        default:
          uVar10 = 0;
          uVar12 = 0;
          uVar19 = uVar18;
        }
        uVar12 = uVar12 ^ (uint)local_40;
        uVar10 = uVar10 ^ local_40._4_4_;
        uVar11 = (ulong)uVar10;
        uVar13 = uVar18;
        switch(iVar15 + -1) {
        case 7:
          *(char *)(local_60 + uVar1) = (char)(uVar10 >> 0x18);
          uVar13 = uVar1;
        case 6:
          *(char *)(local_60 + -1 + uVar13) = (char)(uVar10 >> 0x10);
          uVar13 = uVar13 - 1;
        case 5:
          *(char *)(local_60 + -1 + uVar13) = (char)(uVar10 >> 8);
          uVar13 = uVar13 - 1;
        case 4:
          *(char *)(local_60 + -1 + uVar13) = (char)uVar10;
          uVar13 = uVar13 - 1;
        case 3:
          *(char *)(local_60 + -1 + uVar13) = (char)(uVar12 >> 0x18);
          uVar13 = uVar13 - 1;
        case 2:
          *(char *)(local_60 + -1 + uVar13) = (char)(uVar12 >> 0x10);
          uVar13 = uVar13 - 1;
        case 1:
          *(char *)(local_60 + -1 + uVar13) = (char)(uVar12 >> 8);
          uVar13 = uVar13 - 1;
        case 0:
          *(char *)(local_60 + -1 + uVar13) = (char)uVar12;
          uVar13 = uVar13 - 1;
        }
        param_4 = param_4 - uVar18;
        if (param_3 == 0x20) {
          uVar11 = (ulong)uVar12;
        }
        else if (param_3 == 0x40) {
          uVar23 = (ulong)uVar12;
        }
        else {
          local_58 = CONCAT44(uVar22,uVar5);
          uVar2 = local_58;
          local_50 = uVar12;
          local_4c = uVar10;
          if (iVar9 == 0) {
            local_58 = *(ulong *)((long)&local_58 + lVar6);
          }
          else {
            bVar14 = *(byte *)((long)&local_58 + lVar6 + 1) >> (bVar21 & 0x1f) |
                     *(char *)((long)&local_58 + lVar6) << (bVar7 & 0x1f);
            local_58 = CONCAT71(local_58._1_7_,bVar14);
            local_58._2_6_ = SUB86(uVar2,2);
            local_58._0_2_ =
                 CONCAT11(*(byte *)((long)&local_58 + lVar6 + 2) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 1) << (bVar7 & 0x1f),bVar14);
            local_58._3_5_ = SUB85(uVar2,3);
            local_58._0_3_ =
                 CONCAT12(*(byte *)((long)&local_58 + lVar6 + 3) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 2) << (bVar7 & 0x1f),
                          (undefined2)local_58);
            local_58._0_4_ =
                 CONCAT13(*(byte *)((long)&local_58 + lVar6 + 4) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 3) << (bVar7 & 0x1f),
                          (undefined3)local_58);
            local_58 = CONCAT44(uVar22,(undefined4)local_58);
            local_58._5_3_ = (undefined3)(uVar23 >> 8);
            local_58._0_5_ =
                 CONCAT14(*(byte *)((long)&local_58 + lVar6 + 5) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 4) << (bVar7 & 0x1f),
                          (undefined4)local_58);
            local_58._6_2_ = (undefined2)(uVar23 >> 0x10);
            local_58._0_6_ =
                 CONCAT15(*(byte *)((long)&local_58 + lVar6 + 6) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 5) << (bVar7 & 0x1f),
                          (undefined5)local_58);
            local_58._7_1_ = (undefined1)(uVar23 >> 0x18);
            local_58._0_7_ =
                 CONCAT16(*(byte *)((long)&local_58 + lVar6 + 7) >> (bVar21 & 0x1f) |
                          *(char *)((long)&local_58 + lVar6 + 6) << (bVar7 & 0x1f),
                          (undefined6)local_58);
            local_58 = CONCAT17(*(byte *)((long)&local_50 + lVar6) >> (bVar21 & 0x1f) |
                                *(char *)((long)&local_58 + lVar6 + 7) << (bVar7 & 0x1f),
                                (undefined7)local_58);
          }
          uVar11 = local_58 >> 0x20;
          uVar23 = local_58;
        }
        uVar20 = uVar23 & 0xffffffff;
        uVar5 = (uint)uVar23;
        param_1 = param_1 + uVar19 + uVar18;
        local_60 = local_60 + uVar13 + uVar18;
        uVar12 = (uint)uVar11;
        uVar23 = uVar11;
      } while (uVar18 <= param_4);
    }
    *(char *)param_6 = (char)uVar5;
    *(char *)((long)param_6 + 1) = (char)(uVar5 >> 8);
    *(char *)((long)param_6 + 2) = (char)(uVar5 >> 0x10);
    *(char *)((long)param_6 + 3) = (char)(uVar5 >> 0x18);
    *(char *)(param_6 + 1) = (char)uVar12;
    *(char *)((long)param_6 + 5) = (char)(uVar12 >> 8);
    *(char *)((long)param_6 + 6) = (char)(uVar12 >> 0x10);
    *(char *)((long)param_6 + 7) = (char)(uVar12 >> 0x18);
    local_40 = 0;
    lVar6 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

