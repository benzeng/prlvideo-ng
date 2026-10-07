
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10075efa0(char *param_1,int param_2,long param_3,ulong *param_4,long param_5,uint param_6,
             long param_7)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  char cVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 *puVar19;
  char *pcVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  byte *pbVar27;
  int iVar28;
  ulong uVar29;
  undefined8 *puVar30;
  bool bVar31;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 local_1270;
  undefined4 local_126c;
  undefined4 local_1268;
  int local_1264;
  int local_1260;
  int local_125c;
  int local_1258;
  undefined4 local_1254;
  ulong local_1248;
  undefined1 local_1240 [80];
  uint local_11f0;
  short local_1148 [30];
  uint local_110c;
  ulong local_10c8;
  undefined1 local_10c0 [24];
  int local_10a8;
  uint local_10a0;
  long local_1090;
  ulong local_1080;
  undefined1 local_1038 [32];
  ulong local_1018;
  uint local_fe8;
  long local_38;
  
  lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar2 = *param_4;
  iVar28 = (int)(uVar2 >> 0xc);
  local_38 = lVar25;
  if (iVar28 == 0) {
    uVar17 = 0;
  }
  else {
    uVar11 = iVar28 + 0x1fU >> 5;
    uVar12 = uVar11 * 4;
    uVar26 = (ulong)uVar12;
    pbVar13 = operator_new__(uVar26,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (pbVar13 == (byte *)0x0) {
      uVar17 = 0;
    }
    else {
      ___bzero(pbVar13,uVar26);
      local_1270 = 0x504d4453;
      local_1268 = 0x504d4453;
      local_1260 = iVar28;
      local_1258 = iVar28;
      if (*(short *)(param_3 + 0x220) == 0x20) {
        local_126c = 0x504d5544;
        iVar28 = param_6 + 0x20 + uVar12;
        uVar24 = 0x80000000;
        local_1264 = iVar28;
        do {
          uVar14 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar24,0);
          if (uVar14 != 0) {
            uVar29 = uVar14 - 0x50000000;
            if (uVar14 < 0xb0000000) {
              uVar29 = uVar14;
            }
            if (uVar29 < *param_4) {
              *(uint *)(pbVar13 + (uVar29 >> 0xf & 0x1ffffffc)) =
                   *(uint *)(pbVar13 + (uVar29 >> 0xf & 0x1ffffffc)) |
                   1 << ((byte)(uVar29 >> 0xc) & 0x1f);
            }
          }
          auVar9 = _DAT_100b2ddb0;
          uVar8 = _UNK_100b2ddac;
          uVar7 = _UNK_100b2dda8;
          uVar6 = _UNK_100b2dda4;
          uVar12 = _DAT_100b2dda0;
          iVar23 = _UNK_100b2dd9c;
          iVar5 = _UNK_100b2dd98;
          iVar4 = PTR___mh_execute_header_100b2dd90._4_4_;
          iVar3 = (int)PTR___mh_execute_header_100b2dd90;
          uVar24 = uVar24 + 0x1000;
        } while (uVar24 < 0xfffff000);
        local_125c = 0;
        if (uVar11 != 0) {
          local_125c = 0;
          puVar19 = DAT_1011bfea0;
          pbVar27 = pbVar13;
          do {
            bVar1 = *pbVar27;
            lVar25 = 0;
            if (puVar19 == (undefined4 *)0x0) {
              do {
                iVar22 = (int)lVar25;
                uVar11 = iVar22 + iVar3;
                uVar34 = iVar22 + iVar4;
                uVar35 = iVar22 + iVar5;
                uVar36 = iVar22 + iVar23;
                auVar32._0_4_ =
                     (uVar11 >> 7 & uVar12) +
                     (uVar11 >> 6 & uVar12) +
                     (uVar11 >> 5 & uVar12) +
                     (uVar11 >> 4 & uVar12) +
                     (uVar11 >> 3 & uVar12) +
                     (uVar11 >> 2 & uVar12) + (uVar11 >> 1 & uVar12) + (uVar11 & uVar12);
                auVar32._4_4_ =
                     (uVar34 >> 7 & uVar6) +
                     (uVar34 >> 6 & uVar6) +
                     (uVar34 >> 5 & uVar6) +
                     (uVar34 >> 4 & uVar6) +
                     (uVar34 >> 3 & uVar6) +
                     (uVar34 >> 2 & uVar6) + (uVar34 >> 1 & uVar6) + (uVar34 & uVar6);
                auVar32._8_4_ =
                     (uVar35 >> 7 & uVar7) +
                     (uVar35 >> 6 & uVar7) +
                     (uVar35 >> 5 & uVar7) +
                     (uVar35 >> 4 & uVar7) +
                     (uVar35 >> 3 & uVar7) +
                     (uVar35 >> 2 & uVar7) + (uVar35 >> 1 & uVar7) + (uVar35 & uVar7);
                auVar32._12_4_ =
                     (uVar36 >> 7 & uVar8) +
                     (uVar36 >> 6 & uVar8) +
                     (uVar36 >> 5 & uVar8) +
                     (uVar36 >> 4 & uVar8) +
                     (uVar36 >> 3 & uVar8) +
                     (uVar36 >> 2 & uVar8) + (uVar36 >> 1 & uVar8) + (uVar36 & uVar8);
                auVar33 = pshufb(auVar32,auVar9);
                *(int *)((long)&DAT_1011bfda0 + lVar25) = auVar33._0_4_;
                lVar25 = lVar25 + 4;
              } while (lVar25 != 0x100);
              DAT_1011bfea0 = &DAT_1011bfda0;
              puVar19 = &DAT_1011bfda0;
            }
            local_125c = local_125c + (uint)*(byte *)((long)puVar19 + (ulong)bVar1);
            pbVar27 = pbVar27 + 1;
          } while (pbVar27 < pbVar13 + uVar26);
        }
        *(ulong *)(param_5 + 4000) = (ulong)(uint)(iVar28 + local_125c * 0x1000);
        lVar25 = 0x20;
      }
      else {
        local_1254 = 0x504d4453;
        local_126c = 0x504d5544;
        local_1264 = param_6 + 0x28 + uVar12;
        *(undefined4 *)(param_5 + 0x103c) = 0;
        if (param_2 != 0) {
          uVar24 = 0;
          do {
            local_1248 = 0;
            iVar28 = (int)uVar24;
            if (*(long *)(param_7 + 0x218) == 0) {
LAB_10075f37a:
              cVar10 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x90),
                                     *(undefined8 *)(param_3 + 0x6d0 + uVar24 * 0x768),local_1038,
                                     0x110);
              if (cVar10 == '\0') {
                FUN_1008e3970("","dbgdump",0,
                              "Failed to read prcb address for vcpu%u using gs_base=0x%llx",
                              uVar24 & 0xffffffff,*(undefined8 *)(param_3 + 0x6d0 + uVar24 * 0x768))
                ;
              }
              else {
                local_1248 = local_1018;
              }
            }
            else {
              cVar10 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x90),
                                     *(long *)(param_7 + 0x218) + uVar24 * 8,&local_1248,8);
              if (cVar10 == '\0') {
                FUN_1008e3970("","dbgdump",0,
                              "Failed to read prcb address for vcpu%u using KiProcessorBlock=0x%llx"
                              ,uVar24 & 0xffffffff,*(undefined8 *)(param_7 + 0x218));
              }
              if (local_1248 == 0) goto LAB_10075f37a;
            }
            uVar14 = *(ushort *)(param_7 + 0x2b0) + local_1248;
            if (((local_1248 < uVar14) && (local_1248 != 0)) && (uVar29 = local_1248, uVar14 != 0))
            {
              do {
                uVar15 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar29,0);
                if (uVar15 != 0) {
                  uVar21 = uVar15 - 0x50000000;
                  if (uVar15 < 0xb0000000) {
                    uVar21 = uVar15;
                  }
                  if (uVar21 < *param_4) {
                    *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) =
                         *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) |
                         1 << ((byte)(uVar21 >> 0xc) & 0x1f);
                  }
                }
                uVar29 = uVar29 + 0x1000;
              } while (uVar29 < uVar14);
            }
            uVar24 = uVar24 + 1;
          } while (iVar28 != param_2 + -1);
        }
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0x1d0),0,0x40000000);
        uVar14 = *(ulong *)(param_7 + 0x68);
        uVar24 = uVar14 + 0x10000000;
        if (uVar14 == 0) {
          uVar24 = 0;
        }
        if (((uVar14 < uVar24) && (uVar14 != 0)) && (uVar24 != 0)) {
          do {
            uVar29 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar14,0);
            if (uVar29 != 0) {
              uVar15 = uVar29 - 0x50000000;
              if (uVar29 < 0xb0000000) {
                uVar15 = uVar29;
              }
              if (uVar15 < *param_4) {
                *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) =
                     *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) |
                     1 << ((byte)(uVar15 >> 0xc) & 0x1f);
              }
            }
            uVar14 = uVar14 + 0x1000;
          } while (uVar14 < uVar24);
        }
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0x110),
                      *(undefined8 *)(param_7 + 0x118),0x40000000);
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0x120),
                      *(undefined8 *)(param_7 + 0x128),0x40000000);
        uVar24 = *(ulong *)(param_7 + 200);
        uVar14 = *(ulong *)(param_7 + 0xd0);
        uVar29 = uVar24 + 0x10000000;
        if (uVar14 != 0) {
          uVar29 = uVar14;
        }
        if (uVar24 == 0) {
          uVar29 = uVar14;
        }
        if (((uVar24 < uVar29) && (uVar24 != 0)) && (uVar29 != 0)) {
          do {
            uVar14 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar24,0);
            if (uVar14 != 0) {
              uVar15 = uVar14 - 0x50000000;
              if (uVar14 < 0xb0000000) {
                uVar15 = uVar14;
              }
              if (uVar15 < *param_4) {
                *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) =
                     *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) |
                     1 << ((byte)(uVar15 >> 0xc) & 0x1f);
              }
            }
            uVar24 = uVar24 + 0x1000;
          } while (uVar24 < uVar29);
        }
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0x60),0,0x10000000);
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0x1e0),0,0x10000000);
        FUN_10075fe50(param_3,param_4,pbVar13,*(undefined8 *)(param_7 + 0xc0),0,0x10000000);
        uVar14 = *(ulong *)(param_7 + 0x18);
        uVar24 = uVar14 + 0x10000000;
        if (uVar14 == 0) {
          uVar24 = 0;
        }
        if (((uVar14 < uVar24) && (uVar14 != 0)) && (uVar24 != 0)) {
          do {
            uVar29 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar14,0);
            if (uVar29 != 0) {
              uVar15 = uVar29 - 0x50000000;
              if (uVar29 < 0xb0000000) {
                uVar15 = uVar29;
              }
              if (uVar15 < *param_4) {
                *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) =
                     *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) |
                     1 << ((byte)(uVar15 >> 0xc) & 0x1f);
              }
            }
            uVar14 = uVar14 + 0x1000;
          } while (uVar14 < uVar24);
        }
        uVar14 = *(ulong *)(param_5 + 0x80);
        uVar24 = uVar14 + 0x360;
        if (uVar14 == 0) {
          uVar24 = 0;
        }
        if (((uVar14 < uVar24) && (uVar14 != 0)) && (uVar24 != 0)) {
          do {
            uVar29 = (*(code *)param_4[4])(param_4,*(undefined8 *)(param_3 + 0x90),uVar14,0);
            if (uVar29 != 0) {
              uVar15 = uVar29 - 0x50000000;
              if (uVar29 < 0xb0000000) {
                uVar15 = uVar29;
              }
              if (uVar15 < *param_4) {
                *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) =
                     *(uint *)(pbVar13 + (uVar15 >> 0xf & 0x1ffffffc)) |
                     1 << ((byte)(uVar15 >> 0xc) & 0x1f);
              }
            }
            uVar14 = uVar14 + 0x1000;
          } while (uVar14 < uVar24);
        }
        puVar30 = (undefined8 *)(param_3 + 0x90);
        uVar24 = *(ulong *)(param_7 + 0x48);
        local_10c8 = 0;
        bVar31 = *(short *)(param_3 + 0x220) != 0x20;
        uVar18 = 0x88;
        if (!bVar31) {
          uVar18 = 0x48;
        }
        uVar17 = *(undefined8 *)(param_3 + 0x90);
        uVar14 = uVar24;
        while (((cVar10 = FUN_10078c4e0(param_4,uVar17,uVar14,&local_10c8,bVar31 * '\x04' + '\x04'),
                cVar10 != '\0' && (local_10c8 != uVar24)) &&
               (cVar10 = FUN_10078c4e0(param_4,*puVar30,local_10c8,local_10c0,uVar18),
               cVar10 != '\0'))) {
          if (*(short *)(param_3 + 0x220) == 0x20) {
            cVar10 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x90),local_10a8,local_1148,
                                   0x40);
            if (cVar10 == '\0') {
              FUN_1008e3970("","dbgdump",0,"Failed to read module info using addr=0x%x",local_10a8);
            }
            else if (local_1148[0] == 0x5a4d) {
              cVar10 = FUN_10078c4e0(param_4,*puVar30,local_110c + local_10a8,local_1240,0xf8);
              if (cVar10 == '\0') {
                FUN_1008e3970("","dbgdump",0,"Failed to read module NT header info using addr=0x%x",
                              local_110c + local_10a8);
              }
              else {
                local_10a0 = local_11f0;
              }
            }
            uVar14 = local_10a0 + local_10c8;
            if (((local_10c8 < uVar14) && (local_10c8 != 0)) && (uVar29 = local_10c8, uVar14 != 0))
            {
              do {
                uVar15 = (*(code *)param_4[4])(param_4,*puVar30,uVar29,0);
                if (uVar15 != 0) {
                  uVar21 = uVar15 - 0x50000000;
                  if (uVar15 < 0xb0000000) {
                    uVar21 = uVar15;
                  }
                  if (uVar21 < *param_4) {
                    *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) =
                         *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) |
                         1 << ((byte)(uVar21 >> 0xc) & 0x1f);
                  }
                }
                uVar29 = uVar29 + 0x1000;
              } while (uVar29 < uVar14);
            }
          }
          else {
            cVar10 = FUN_10078c4e0(param_4,*(undefined8 *)(param_3 + 0x90),local_1090,local_1148,
                                   0x80);
            if (cVar10 == '\0') {
              FUN_1008e3970("","dbgdump",0,"Failed to read module info using addr=0x%x",local_10a8);
            }
            else if (local_1148[0] == 0x5a4d) {
              cVar10 = FUN_10078c4e0(param_4,*puVar30,(ulong)local_110c + local_1090,local_1038,
                                     0x108);
              if (cVar10 == '\0') {
                FUN_1008e3970("","dbgdump",0,"Failed to read module NT header info using addr=0x%x",
                              local_110c + local_10a8);
              }
              else {
                local_1080 = (ulong)local_fe8;
              }
            }
            uVar14 = local_1080 + local_10c8;
            if (((local_10c8 < uVar14) && (local_10c8 != 0)) && (uVar29 = local_10c8, uVar14 != 0))
            {
              do {
                uVar15 = (*(code *)param_4[4])(param_4,*puVar30,uVar29,0);
                if (uVar15 != 0) {
                  uVar21 = uVar15 - 0x50000000;
                  if (uVar15 < 0xb0000000) {
                    uVar21 = uVar15;
                  }
                  if (uVar21 < *param_4) {
                    *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) =
                         *(uint *)(pbVar13 + (uVar21 >> 0xf & 0x1ffffffc)) |
                         1 << ((byte)(uVar21 >> 0xc) & 0x1f);
                  }
                }
                uVar29 = uVar29 + 0x1000;
              } while (uVar29 < uVar14);
            }
          }
          uVar17 = *puVar30;
          uVar14 = local_10c8;
        }
        auVar9 = _DAT_100b2ddb0;
        uVar8 = _UNK_100b2ddac;
        uVar7 = _UNK_100b2dda8;
        uVar6 = _UNK_100b2dda4;
        uVar12 = _DAT_100b2dda0;
        iVar5 = _UNK_100b2dd9c;
        iVar4 = _UNK_100b2dd98;
        iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
        iVar28 = (int)PTR___mh_execute_header_100b2dd90;
        local_125c = 0;
        if (uVar11 != 0) {
          local_125c = 0;
          puVar19 = DAT_1011bfea0;
          pbVar27 = pbVar13;
          do {
            bVar1 = *pbVar27;
            lVar25 = 0;
            if (puVar19 == (undefined4 *)0x0) {
              do {
                iVar23 = (int)lVar25;
                uVar11 = iVar23 + iVar28;
                uVar34 = iVar23 + iVar3;
                uVar35 = iVar23 + iVar4;
                uVar36 = iVar23 + iVar5;
                auVar33._0_4_ =
                     (uVar11 >> 7 & uVar12) +
                     (uVar11 >> 6 & uVar12) +
                     (uVar11 >> 5 & uVar12) +
                     (uVar11 >> 4 & uVar12) +
                     (uVar11 >> 3 & uVar12) +
                     (uVar11 >> 2 & uVar12) + (uVar11 >> 1 & uVar12) + (uVar11 & uVar12);
                auVar33._4_4_ =
                     (uVar34 >> 7 & uVar6) +
                     (uVar34 >> 6 & uVar6) +
                     (uVar34 >> 5 & uVar6) +
                     (uVar34 >> 4 & uVar6) +
                     (uVar34 >> 3 & uVar6) +
                     (uVar34 >> 2 & uVar6) + (uVar34 >> 1 & uVar6) + (uVar34 & uVar6);
                auVar33._8_4_ =
                     (uVar35 >> 7 & uVar7) +
                     (uVar35 >> 6 & uVar7) +
                     (uVar35 >> 5 & uVar7) +
                     (uVar35 >> 4 & uVar7) +
                     (uVar35 >> 3 & uVar7) +
                     (uVar35 >> 2 & uVar7) + (uVar35 >> 1 & uVar7) + (uVar35 & uVar7);
                auVar33._12_4_ =
                     (uVar36 >> 7 & uVar8) +
                     (uVar36 >> 6 & uVar8) +
                     (uVar36 >> 5 & uVar8) +
                     (uVar36 >> 4 & uVar8) +
                     (uVar36 >> 3 & uVar8) +
                     (uVar36 >> 2 & uVar8) + (uVar36 >> 1 & uVar8) + (uVar36 & uVar8);
                auVar33 = pshufb(auVar33,auVar9);
                *(int *)((long)&DAT_1011bfda0 + lVar25) = auVar33._0_4_;
                lVar25 = lVar25 + 4;
              } while (lVar25 != 0x100);
              DAT_1011bfea0 = &DAT_1011bfda0;
              puVar19 = &DAT_1011bfda0;
            }
            local_125c = local_125c + (uint)*(byte *)((long)puVar19 + (ulong)bVar1);
            pbVar27 = pbVar27 + 1;
          } while (pbVar27 < pbVar13 + uVar26);
        }
        *(ulong *)(param_5 + 4000) = (ulong)(uint)(local_125c * 0x1000 + local_1264);
        lVar25 = 0x28;
      }
      uVar24 = QIODevice::write(param_1,param_5);
      if (((param_6 == uVar24) &&
          (lVar16 = QIODevice::write(param_1,(longlong)&local_1270), lVar25 == lVar16)) &&
         (uVar24 = QIODevice::write(param_1,(longlong)pbVar13), uVar26 == uVar24)) {
        uVar24 = 0;
        uVar26 = 0;
        do {
          if ((*(uint *)(pbVar13 + (uVar26 >> 3 & 0x1ffffffc)) >> ((uint)uVar26 & 0x1f) & 1) != 0) {
            cVar10 = (*(code *)param_4[1])(local_1038,0x1000,uVar24 & 0xfffff000);
            if (cVar10 == '\0') {
              pcVar20 = "can\'t read data from memory";
              goto LAB_10075fdc7;
            }
            lVar25 = QIODevice::write(param_1,(longlong)local_1038);
            if (lVar25 != 0x1000) {
              FUN_1008e3970("","dbgdump",0,"can\'t write out windbg kernel dump file");
              break;
            }
          }
          uVar26 = uVar26 + 1;
          uVar24 = uVar24 + 0x1000;
        } while (uVar26 < (uVar2 >> 0xc & 0xffffffff));
      }
      else {
        pcVar20 = "can\'t write out windbg kernel dump file";
LAB_10075fdc7:
        FUN_1008e3970("","dbgdump",0,pcVar20);
      }
      operator_delete__(pbVar13);
      uVar17 = 1;
      lVar25 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (lVar25 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar17;
}

