
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003bcdf0(long param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 local_cf8 [544];
  undefined1 local_ad8 [544];
  undefined1 local_8b8 [336];
  long local_768;
  long local_758;
  long local_6c0;
  long local_6b0;
  char local_6a0;
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [544];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar12 = *(long *)(param_2 + 0x40);
  lVar11 = *(long *)(*(long *)(lVar12 + 8) + 0x80);
  pbVar9 = (byte *)(lVar11 + 0x48);
  if (lVar11 == 0) {
    pbVar9 = (byte *)(*(long *)(lVar12 + 8) + 0x7c);
  }
  bVar1 = *pbVar9;
  if (bVar1 == 4) {
    FUN_1003b9a60(local_258,lVar12,4,*(undefined1 *)(lVar12 + 0x30));
    FUN_1003b9a60(local_478,lVar12 + 0x40,4,*(undefined1 *)(lVar12 + 0x30));
    FUN_1003b9a60(local_698,lVar12 + 0x80,4,*(undefined1 *)(lVar12 + 0x30));
    auVar5 = _DAT_100b2ddb0;
    auVar4 = _DAT_100b2dda0;
    auVar3 = _PTR___mh_execute_header_100b2dd90;
    bVar1 = *(byte *)(lVar12 + 0x30);
    if ((bVar1 & bVar1 - 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar6 = FUN_1003ba9d0(local_258);
      uVar7 = FUN_1003ba9d0(local_478);
      uVar8 = FUN_1003ba9d0(local_698);
      FUN_10038e8e0(uVar2,"%s = %s || %s;\n",uVar6,uVar7,uVar8);
    }
    else {
      lVar11 = 0;
      if (DAT_1011ba010 == (undefined4 *)0x0) {
        do {
          iVar10 = (int)lVar11;
          auVar16._0_4_ = iVar10 + auVar3._0_4_;
          auVar16._4_4_ = iVar10 + auVar3._4_4_;
          auVar16._8_4_ = iVar10 + auVar3._8_4_;
          auVar16._12_4_ = iVar10 + auVar3._12_4_;
          auVar19 = auVar16 & auVar4;
          auVar26._0_4_ = auVar16._0_4_ >> 1;
          auVar26._4_4_ = auVar16._4_4_ >> 1;
          auVar26._8_4_ = auVar16._8_4_ >> 1;
          auVar26._12_4_ = auVar16._12_4_ >> 1;
          auVar26 = auVar26 & auVar4;
          auVar20._0_4_ = auVar16._0_4_ >> 2;
          auVar20._4_4_ = auVar16._4_4_ >> 2;
          auVar20._8_4_ = auVar16._8_4_ >> 2;
          auVar20._12_4_ = auVar16._12_4_ >> 2;
          auVar20 = auVar20 & auVar4;
          auVar27._0_4_ = auVar16._0_4_ >> 3;
          auVar27._4_4_ = auVar16._4_4_ >> 3;
          auVar27._8_4_ = auVar16._8_4_ >> 3;
          auVar27._12_4_ = auVar16._12_4_ >> 3;
          auVar27 = auVar27 & auVar4;
          auVar21._0_4_ = auVar16._0_4_ >> 4;
          auVar21._4_4_ = auVar16._4_4_ >> 4;
          auVar21._8_4_ = auVar16._8_4_ >> 4;
          auVar21._12_4_ = auVar16._12_4_ >> 4;
          auVar21 = auVar21 & auVar4;
          auVar28._0_4_ = auVar16._0_4_ >> 5;
          auVar28._4_4_ = auVar16._4_4_ >> 5;
          auVar28._8_4_ = auVar16._8_4_ >> 5;
          auVar28._12_4_ = auVar16._12_4_ >> 5;
          auVar28 = auVar28 & auVar4;
          auVar22._0_4_ = auVar16._0_4_ >> 6;
          auVar22._4_4_ = auVar16._4_4_ >> 6;
          auVar22._8_4_ = auVar16._8_4_ >> 6;
          auVar22._12_4_ = auVar16._12_4_ >> 6;
          auVar22 = auVar22 & auVar4;
          auVar14._0_4_ = auVar16._0_4_ >> 7;
          auVar14._4_4_ = auVar16._4_4_ >> 7;
          auVar14._8_4_ = auVar16._8_4_ >> 7;
          auVar14._12_4_ = auVar16._12_4_ >> 7;
          auVar14 = auVar14 & auVar4;
          auVar15._0_4_ =
               auVar14._0_4_ +
               auVar22._0_4_ +
               auVar28._0_4_ +
               auVar21._0_4_ + auVar27._0_4_ + auVar20._0_4_ + auVar26._0_4_ + auVar19._0_4_;
          auVar15._4_4_ =
               auVar14._4_4_ +
               auVar22._4_4_ +
               auVar28._4_4_ +
               auVar21._4_4_ + auVar27._4_4_ + auVar20._4_4_ + auVar26._4_4_ + auVar19._4_4_;
          auVar15._8_4_ =
               auVar14._8_4_ +
               auVar22._8_4_ +
               auVar28._8_4_ +
               auVar21._8_4_ + auVar27._8_4_ + auVar20._8_4_ + auVar26._8_4_ + auVar19._8_4_;
          auVar15._12_4_ =
               auVar14._12_4_ +
               auVar22._12_4_ +
               auVar28._12_4_ +
               auVar21._12_4_ + auVar27._12_4_ + auVar20._12_4_ + auVar26._12_4_ + auVar19._12_4_;
          auVar16 = pshufb(auVar15,auVar5);
          *(int *)((long)&DAT_1011b9f10 + lVar11) = auVar16._0_4_;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0x100);
        DAT_1011ba010 = &DAT_1011b9f10;
      }
      bVar1 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      uVar6 = FUN_1003ba9d0(local_258);
      auVar5 = _DAT_100b2ddb0;
      auVar4 = _DAT_100b2dda0;
      auVar3 = _PTR___mh_execute_header_100b2dd90;
      bVar13 = *(byte *)(lVar12 + 0x30);
      lVar12 = 0;
      if (DAT_1011ba010 == (undefined4 *)0x0) {
        do {
          iVar10 = (int)lVar12;
          auVar19._0_4_ = iVar10 + auVar3._0_4_;
          auVar19._4_4_ = iVar10 + auVar3._4_4_;
          auVar19._8_4_ = iVar10 + auVar3._8_4_;
          auVar19._12_4_ = iVar10 + auVar3._12_4_;
          auVar16 = auVar19 & auVar4;
          auVar29._0_4_ = auVar19._0_4_ >> 1;
          auVar29._4_4_ = auVar19._4_4_ >> 1;
          auVar29._8_4_ = auVar19._8_4_ >> 1;
          auVar29._12_4_ = auVar19._12_4_ >> 1;
          auVar29 = auVar29 & auVar4;
          auVar23._0_4_ = auVar19._0_4_ >> 2;
          auVar23._4_4_ = auVar19._4_4_ >> 2;
          auVar23._8_4_ = auVar19._8_4_ >> 2;
          auVar23._12_4_ = auVar19._12_4_ >> 2;
          auVar23 = auVar23 & auVar4;
          auVar30._0_4_ = auVar19._0_4_ >> 3;
          auVar30._4_4_ = auVar19._4_4_ >> 3;
          auVar30._8_4_ = auVar19._8_4_ >> 3;
          auVar30._12_4_ = auVar19._12_4_ >> 3;
          auVar30 = auVar30 & auVar4;
          auVar24._0_4_ = auVar19._0_4_ >> 4;
          auVar24._4_4_ = auVar19._4_4_ >> 4;
          auVar24._8_4_ = auVar19._8_4_ >> 4;
          auVar24._12_4_ = auVar19._12_4_ >> 4;
          auVar24 = auVar24 & auVar4;
          auVar31._0_4_ = auVar19._0_4_ >> 5;
          auVar31._4_4_ = auVar19._4_4_ >> 5;
          auVar31._8_4_ = auVar19._8_4_ >> 5;
          auVar31._12_4_ = auVar19._12_4_ >> 5;
          auVar31 = auVar31 & auVar4;
          auVar25._0_4_ = auVar19._0_4_ >> 6;
          auVar25._4_4_ = auVar19._4_4_ >> 6;
          auVar25._8_4_ = auVar19._8_4_ >> 6;
          auVar25._12_4_ = auVar19._12_4_ >> 6;
          auVar25 = auVar25 & auVar4;
          auVar17._0_4_ = auVar19._0_4_ >> 7;
          auVar17._4_4_ = auVar19._4_4_ >> 7;
          auVar17._8_4_ = auVar19._8_4_ >> 7;
          auVar17._12_4_ = auVar19._12_4_ >> 7;
          auVar17 = auVar17 & auVar4;
          auVar18._0_4_ =
               auVar17._0_4_ +
               auVar25._0_4_ +
               auVar31._0_4_ +
               auVar24._0_4_ + auVar30._0_4_ + auVar23._0_4_ + auVar29._0_4_ + auVar16._0_4_;
          auVar18._4_4_ =
               auVar17._4_4_ +
               auVar25._4_4_ +
               auVar31._4_4_ +
               auVar24._4_4_ + auVar30._4_4_ + auVar23._4_4_ + auVar29._4_4_ + auVar16._4_4_;
          auVar18._8_4_ =
               auVar17._8_4_ +
               auVar25._8_4_ +
               auVar31._8_4_ +
               auVar24._8_4_ + auVar30._8_4_ + auVar23._8_4_ + auVar29._8_4_ + auVar16._8_4_;
          auVar18._12_4_ =
               auVar17._12_4_ +
               auVar25._12_4_ +
               auVar31._12_4_ +
               auVar24._12_4_ + auVar30._12_4_ + auVar23._12_4_ + auVar29._12_4_ + auVar16._12_4_;
          auVar16 = pshufb(auVar18,auVar5);
          *(int *)((long)&DAT_1011b9f10 + lVar12) = auVar16._0_4_;
          lVar12 = lVar12 + 4;
        } while (lVar12 != 0x100);
        DAT_1011ba010 = &DAT_1011b9f10;
      }
      bVar13 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar13);
      uVar7 = FUN_1003ba9d0(local_478);
      uVar8 = FUN_1003ba9d0(local_698);
      FUN_10038e8e0(uVar2,"%s = %s(%s(%s) + %s(%s));\n",uVar6,
                    *(undefined8 *)(&DAT_100bbd9e0 + (ulong)bVar13 * 8),
                    *(undefined8 *)(&DAT_100bbda40 + (ulong)bVar1 * 8),uVar7,
                    *(undefined8 *)(&DAT_100bbda40 + (ulong)bVar1 * 8),uVar8);
    }
    FUN_1003b9b40(local_698);
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
    FUN_1003b9b40(local_478);
    FUN_1003b9b40(local_258);
  }
  else {
    bVar13 = 2;
    if ((bVar1 & 3) != 0) {
      bVar13 = bVar1;
    }
    FUN_1003b9a60(local_8b8,lVar12,bVar13,*(undefined1 *)(lVar12 + 0x30));
    FUN_1003b9a60(local_ad8,lVar12 + 0x40,bVar13,*(undefined1 *)(lVar12 + 0x30));
    FUN_1003b9a60(local_cf8,lVar12 + 0x80,bVar13,*(undefined1 *)(lVar12 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_1003ba9d0(local_8b8);
    if (local_6a0 != '\0') {
      FUN_1003ba140(local_8b8);
    }
    lVar12 = local_768;
    if (local_768 == 0) {
      lVar12 = local_758;
    }
    uVar7 = FUN_1003ba9d0(local_ad8);
    uVar8 = FUN_1003ba9d0(local_cf8);
    if (local_6a0 != '\0') {
      FUN_1003ba140(local_8b8);
    }
    if (local_6c0 == 0) {
      local_6c0 = local_6b0;
    }
    FUN_10038e8e0(uVar2,"%s = %s%s | %s%s;\n",uVar6,lVar12,uVar7,uVar8,local_6c0);
    FUN_1003b9b40(local_cf8);
    FUN_1003b9b40(local_ad8);
    FUN_1003b9b40(local_8b8);
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

