
/* WARNING: Removing unreachable block (ram,0x0001000dd441) */
/* WARNING: Removing unreachable block (ram,0x0001000dd450) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000dce90(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  char cVar10;
  uint uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  char *pcVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  undefined4 local_304;
  uint local_300;
  uint local_2fc;
  void *local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined8 *local_2d8;
  undefined8 uStack_2d0;
  undefined4 local_2c8;
  undefined1 local_2b8 [640];
  long local_38;
  ulong uVar14;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_2d8 = (undefined8 *)0x0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  local_2f8 = (void *)0x0;
  uStack_2f0 = 0;
  local_2e8 = 0;
  uVar3 = FUN_1000a7060(DAT_1011c3698);
  lVar15 = DAT_1011c3698;
  local_2fc = 0;
  local_300 = 0;
  uVar11 = 8;
  if (uVar3 < 9) {
    uVar11 = uVar3;
  }
  uVar5 = FUN_1007da300("devices.apic.mp_table",2);
  local_304 = (undefined4)CONCAT71((int7)((ulong)uVar5 >> 8),1);
  if (((int)uVar5 == 2) && ((*(uint *)(lVar15 + 0xb5c) & 8) != 0)) {
    FUN_10008d2d0(&local_2d8,0x9fc30,0x10);
    if (uVar11 != 0) {
      uVar4 = 0xfffffff7;
      if (0xfffffff7 < ~uVar3) {
        uVar4 = ~uVar3;
      }
      puVar12 = local_2b8;
      lVar15 = 0;
      do {
        *puVar12 = 0;
        puVar12[1] = (char)lVar15;
        puVar12[2] = 0x11;
        puVar12[3] = 0;
        puVar12[4] = 0x55;
        puVar12[5] = 6;
        puVar12[6] = 0;
        puVar12[7] = 0;
        *(undefined8 *)(puVar12 + 8) = 0xfbff;
        *(undefined4 *)(puVar12 + 0x10) = 0;
        uVar19 = 1;
        if (lVar15 == 0) {
          puVar12[3] = 2;
          uVar19 = 3;
        }
        puVar12[3] = uVar19;
        lVar15 = lVar15 + 1;
        puVar12 = puVar12 + 0x14;
      } while (~uVar4 != (uint)lVar15);
    }
    uVar24 = (ulong)uVar11;
    _DAT_100bfbe8a = 5;
    if (*(int *)(DAT_1011c3698 + 0xae8) != 0) {
      _DAT_100bfbe8a = 0xc;
    }
    _DAT_100bfbe92 = _DAT_100bfbe8a;
    FUN_1000dd560(&local_2fc,&local_300);
    uVar2 = local_2fc;
    uVar4 = local_300;
    uVar23 = (ulong)local_2fc;
    uVar13 = (ulong)local_300;
    uVar1 = uVar24 * 0x14 + 0x9c + uVar23 * 8 + uVar13 * 8;
    uVar6 = uVar1 & 0xffffffff;
    lVar15 = FUN_1000dcd50(5);
    if (*(ulong *)(lVar15 + 8) < uVar6) {
      lVar15 = FUN_1000dcd50(5);
      local_304 = 0;
      FUN_1008e3970("","vm",0,"Out of resources for MP table (%u, %llu)",uVar1 & 0xffffffff,
                    *(undefined8 *)(lVar15 + 8));
    }
    else {
      if (DAT_1011c3760 != (undefined4 *)0x0) {
        _free(DAT_1011c3760);
      }
      puVar7 = _malloc(uVar6);
      DAT_1011c3760 = puVar7;
      if (puVar7 != (undefined4 *)0x0) {
        *(undefined1 *)((long)puVar7 + 6) = 1;
        *(undefined1 *)((long)puVar7 + 7) = 0;
        puVar7[7] = 0;
        *(undefined2 *)(puVar7 + 8) = 0;
        puVar7[9] = 0xfee00000;
        *(undefined2 *)(puVar7 + 10) = 0;
        *(undefined1 *)((long)puVar7 + 0x2a) = 0;
        *(undefined1 *)((long)puVar7 + 0x2b) = 0;
        *puVar7 = 0x504d4350;
        *(undefined8 *)(puVar7 + 2) = 0x20202020534c5250;
        *(undefined8 *)(puVar7 + 4) = 0x2020202020204d56;
        puVar7[6] = 0x20202020;
        *(short *)((long)puVar7 + 0x22) = (short)uVar4 + 0xe + (short)uVar11 + (short)uVar2;
        *(short *)(puVar7 + 1) = (short)uVar1;
        DAT_100bfbe44 = (char)uVar2 + -1;
        DAT_100bfbe4c = DAT_100bfbe44;
        DAT_100bfbe54 = DAT_100bfbe44;
        DAT_100bfbe5c = DAT_100bfbe44;
        DAT_100bfbe64 = DAT_100bfbe44;
        DAT_100bfbe6c = DAT_100bfbe44;
        DAT_100bfbe74 = DAT_100bfbe44;
        DAT_100bfbe7c = DAT_100bfbe44;
        DAT_100bfbe84 = DAT_100bfbe44;
        DAT_100bfbe8c = DAT_100bfbe44;
        DAT_100bfbe94 = DAT_100bfbe44;
        puVar8 = (undefined4 *)FUN_1000dcd50(5);
        DAT_100bfbeb0._4_4_ = *puVar8;
        DAT_100bfbeb8._2_1_ =
             -(DAT_100bfbeb8._7_1_ +
              DAT_100bfbeb8._6_1_ +
              DAT_100bfbeb8._5_1_ +
              DAT_100bfbeb8._4_1_ +
              DAT_100bfbeb8._3_1_ +
              DAT_100bfbeb8._1_1_ +
              (char)DAT_100bfbeb8 +
              (char)((uint)DAT_100bfbeb0._4_4_ >> 0x18) +
              (char)((uint)DAT_100bfbeb0._4_4_ >> 0x10) +
              (char)((uint)DAT_100bfbeb0._4_4_ >> 8) +
              DAT_100bfbeb0._3_1_ + DAT_100bfbeb0._2_1_ + DAT_100bfbeb0._1_1_ + (char)DAT_100bfbeb0
              + (char)DAT_100bfbeb0._4_4_);
        local_2d8[1] = CONCAT17(DAT_100bfbeb8._7_1_,
                                CONCAT16(DAT_100bfbeb8._6_1_,
                                         CONCAT15(DAT_100bfbeb8._5_1_,
                                                  CONCAT14(DAT_100bfbeb8._4_1_,
                                                           CONCAT13(DAT_100bfbeb8._3_1_,
                                                                    CONCAT12(DAT_100bfbeb8._2_1_,
                                                                             CONCAT11(DAT_100bfbeb8.
                                                                                      _1_1_,(char)
                                                  DAT_100bfbeb8)))))));
        *local_2d8 = CONCAT44(DAT_100bfbeb0._4_4_,
                              CONCAT13(DAT_100bfbeb0._3_1_,
                                       CONCAT12(DAT_100bfbeb0._2_1_,
                                                CONCAT11(DAT_100bfbeb0._1_1_,(char)DAT_100bfbeb0))))
        ;
        _memcpy(puVar7 + 0xb,local_2b8,uVar24 * 0x14);
        if (uVar2 != 0) {
          uVar11 = uVar2 - 1;
          uVar14 = (ulong)uVar11;
          uVar16 = 0;
          if ((uVar2 & 1) != 0) {
            puVar8 = puVar7 + uVar24 * 5 + 0xb;
            *(undefined2 *)puVar8 = 1;
            if (uVar14 == 0) {
              *(undefined2 *)((long)puVar8 + 6) = 0x2020;
              *(undefined4 *)((long)puVar8 + 2) = 0x20415349;
            }
            else {
              *(undefined2 *)((long)puVar8 + 6) = 0x2020;
              *(undefined4 *)((long)puVar8 + 2) = 0x20494350;
            }
            uVar16 = 1;
          }
          if (uVar11 != 0) {
            uVar21 = 0xfffffff7;
            if (0xfffffff7 < ~uVar3) {
              uVar21 = ~uVar3;
            }
            puVar8 = puVar7 + (ulong)~uVar21 * 5 + uVar16 * 2;
            do {
              *(undefined1 *)(puVar8 + 0xb) = 1;
              *(char *)((long)puVar8 + 0x2d) = (char)uVar16;
              if (uVar16 == uVar14) {
                *(undefined2 *)((long)puVar8 + 0x32) = 0x2020;
                *(undefined4 *)((long)puVar8 + 0x2e) = 0x20415349;
              }
              else {
                *(undefined2 *)((long)puVar8 + 0x32) = 0x2020;
                *(undefined4 *)((long)puVar8 + 0x2e) = 0x20494350;
              }
              *(undefined1 *)(puVar8 + 0xd) = 1;
              uVar17 = uVar16 + 1;
              *(char *)((long)puVar8 + 0x35) = (char)uVar17;
              if (uVar17 == uVar14) {
                *(undefined2 *)((long)puVar8 + 0x3a) = 0x2020;
                *(undefined4 *)((long)puVar8 + 0x36) = 0x20415349;
              }
              else {
                *(undefined2 *)((long)puVar8 + 0x3a) = 0x2020;
                *(undefined4 *)((long)puVar8 + 0x36) = 0x20494350;
              }
              puVar8 = puVar8 + 4;
              uVar16 = uVar16 + 2;
            } while ((uint)uVar17 != uVar11);
          }
        }
        *(undefined8 *)(puVar7 + uVar24 * 5 + uVar23 * 2 + 0xb) = DAT_100bfbe30;
        _memcpy(puVar7 + uVar24 * 5 + uVar23 * 2 + 0xd,&DAT_100bfbe40,0x58);
        FUN_1000dd810(puVar7 + uVar24 * 5 + uVar23 * 2 + 0x23);
        *(undefined8 *)(puVar7 + uVar24 * 5 + uVar23 * 2 + uVar13 * 2 + 0x25) = DAT_100bfbea8;
        *(undefined8 *)(puVar7 + uVar24 * 5 + uVar23 * 2 + uVar13 * 2 + 0x23) = DAT_100bfbea0;
        *(undefined1 *)((long)puVar7 + 7) = 0;
        cVar10 = '\0';
        if ((int)uVar1 != 0) {
          iVar20 = -0xb4;
          if (uVar3 < 8) {
            iVar20 = ~uVar3 * 0x14;
          }
          iVar22 = uVar2 + uVar4;
          cVar10 = '\0';
          if (2 < (uint)((iVar22 * 8 + 0x87) - iVar20)) {
            iVar20 = (iVar22 * 8 - iVar20) + 0x88;
            pcVar18 = (char *)((long)puVar7 + 3);
            do {
              cVar10 = *pcVar18 + pcVar18[-1] + pcVar18[-2] + pcVar18[-3] + cVar10;
              pcVar18 = pcVar18 + 4;
              iVar20 = iVar20 + -4;
            } while (iVar20 != 0);
          }
        }
        *(char *)((long)puVar7 + 7) = -cVar10;
        puVar9 = (undefined8 *)FUN_1000dcd50(5);
        FUN_10008d2d0(&local_2f8,*puVar9,uVar1 & 0xffffffff);
        _memcpy(local_2f8,puVar7,uVar6);
        goto LAB_1000dd4df;
      }
      local_304 = 1;
      FUN_1008e3970("","vm",0,"Can not allocate MpTable");
    }
    local_2d8[1] = 0;
    *local_2d8 = 0;
  }
LAB_1000dd4df:
  FUN_10008d3f0(&local_2f8);
  FUN_10008d3f0(&local_2d8);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_304;
}

