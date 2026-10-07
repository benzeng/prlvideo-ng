
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003bd320(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte *pbVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  byte *pbVar14;
  long lVar15;
  undefined1 *puVar16;
  byte bVar17;
  long lVar18;
  long lVar19;
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 local_1358 [544];
  undefined1 local_1138 [544];
  undefined1 local_f18 [336];
  long local_dc8;
  long local_db8;
  long local_d20;
  long local_d10;
  char local_d00;
  undefined1 local_cf8 [544];
  undefined1 local_ad8 [544];
  undefined1 local_8b8 [544];
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [544];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar3 = *(long *)(param_2 + 0x40);
  lVar15 = lVar3 + 0x40;
  lVar19 = lVar3 + 0x80;
  lVar18 = *(long *)(*(long *)(lVar3 + 8) + 0x80);
  pbVar8 = (byte *)(lVar18 + 0x48);
  if (lVar18 == 0) {
    pbVar8 = (byte *)(*(long *)(lVar3 + 8) + 0x7c);
  }
  bVar1 = *pbVar8;
  lVar18 = *(long *)(*(long *)(lVar3 + 0x48) + 0x80);
  pbVar8 = (byte *)(lVar18 + 0x48);
  if (lVar18 == 0) {
    pbVar8 = (byte *)(*(long *)(lVar3 + 0x48) + 0x7c);
  }
  lVar18 = *(long *)(*(long *)(lVar3 + 0x88) + 0x80);
  pbVar14 = (byte *)(lVar18 + 0x48);
  if (lVar18 == 0) {
    pbVar14 = (byte *)(*(long *)(lVar3 + 0x88) + 0x7c);
  }
  bVar17 = *pbVar8;
  bVar2 = *pbVar14;
  if (((bVar1 == 4) && (bVar17 == 4)) && (bVar2 == 4)) {
    FUN_1003b9a60(local_258,lVar3,4,*(undefined1 *)(lVar3 + 0x30));
    FUN_1003b9a60(local_478,lVar15,4,*(undefined1 *)(lVar3 + 0x30));
    FUN_1003b9a60(local_698,lVar19,4,*(undefined1 *)(lVar3 + 0x30));
    auVar7 = _DAT_100b2ddb0;
    auVar6 = _DAT_100b2dda0;
    auVar5 = _PTR___mh_execute_header_100b2dd90;
    bVar1 = *(byte *)(lVar3 + 0x30);
    if ((bVar1 & bVar1 - 1) == 0) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar9 = FUN_1003ba9d0(local_258);
      uVar10 = FUN_1003ba9d0(local_478);
      uVar11 = FUN_1003ba9d0(local_698);
      FUN_10038e8e0(uVar4,"%s = %s && %s;\n",uVar9,uVar10,uVar11);
    }
    else {
      lVar15 = 0;
      if (DAT_1011ba010 == (undefined4 *)0x0) {
        do {
          iVar13 = (int)lVar15;
          auVar22._0_4_ = iVar13 + auVar5._0_4_;
          auVar22._4_4_ = iVar13 + auVar5._4_4_;
          auVar22._8_4_ = iVar13 + auVar5._8_4_;
          auVar22._12_4_ = iVar13 + auVar5._12_4_;
          auVar25 = auVar22 & auVar6;
          auVar32._0_4_ = auVar22._0_4_ >> 1;
          auVar32._4_4_ = auVar22._4_4_ >> 1;
          auVar32._8_4_ = auVar22._8_4_ >> 1;
          auVar32._12_4_ = auVar22._12_4_ >> 1;
          auVar32 = auVar32 & auVar6;
          auVar26._0_4_ = auVar22._0_4_ >> 2;
          auVar26._4_4_ = auVar22._4_4_ >> 2;
          auVar26._8_4_ = auVar22._8_4_ >> 2;
          auVar26._12_4_ = auVar22._12_4_ >> 2;
          auVar26 = auVar26 & auVar6;
          auVar33._0_4_ = auVar22._0_4_ >> 3;
          auVar33._4_4_ = auVar22._4_4_ >> 3;
          auVar33._8_4_ = auVar22._8_4_ >> 3;
          auVar33._12_4_ = auVar22._12_4_ >> 3;
          auVar33 = auVar33 & auVar6;
          auVar27._0_4_ = auVar22._0_4_ >> 4;
          auVar27._4_4_ = auVar22._4_4_ >> 4;
          auVar27._8_4_ = auVar22._8_4_ >> 4;
          auVar27._12_4_ = auVar22._12_4_ >> 4;
          auVar27 = auVar27 & auVar6;
          auVar34._0_4_ = auVar22._0_4_ >> 5;
          auVar34._4_4_ = auVar22._4_4_ >> 5;
          auVar34._8_4_ = auVar22._8_4_ >> 5;
          auVar34._12_4_ = auVar22._12_4_ >> 5;
          auVar34 = auVar34 & auVar6;
          auVar28._0_4_ = auVar22._0_4_ >> 6;
          auVar28._4_4_ = auVar22._4_4_ >> 6;
          auVar28._8_4_ = auVar22._8_4_ >> 6;
          auVar28._12_4_ = auVar22._12_4_ >> 6;
          auVar28 = auVar28 & auVar6;
          auVar20._0_4_ = auVar22._0_4_ >> 7;
          auVar20._4_4_ = auVar22._4_4_ >> 7;
          auVar20._8_4_ = auVar22._8_4_ >> 7;
          auVar20._12_4_ = auVar22._12_4_ >> 7;
          auVar20 = auVar20 & auVar6;
          auVar21._0_4_ =
               auVar20._0_4_ +
               auVar28._0_4_ +
               auVar34._0_4_ +
               auVar27._0_4_ + auVar33._0_4_ + auVar26._0_4_ + auVar32._0_4_ + auVar25._0_4_;
          auVar21._4_4_ =
               auVar20._4_4_ +
               auVar28._4_4_ +
               auVar34._4_4_ +
               auVar27._4_4_ + auVar33._4_4_ + auVar26._4_4_ + auVar32._4_4_ + auVar25._4_4_;
          auVar21._8_4_ =
               auVar20._8_4_ +
               auVar28._8_4_ +
               auVar34._8_4_ +
               auVar27._8_4_ + auVar33._8_4_ + auVar26._8_4_ + auVar32._8_4_ + auVar25._8_4_;
          auVar21._12_4_ =
               auVar20._12_4_ +
               auVar28._12_4_ +
               auVar34._12_4_ +
               auVar27._12_4_ + auVar33._12_4_ + auVar26._12_4_ + auVar32._12_4_ + auVar25._12_4_;
          auVar22 = pshufb(auVar21,auVar7);
          *(int *)((long)&DAT_1011b9f10 + lVar15) = auVar22._0_4_;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0x100);
        DAT_1011ba010 = &DAT_1011b9f10;
      }
      bVar1 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar1);
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar9 = FUN_1003ba9d0(local_258);
      auVar7 = _DAT_100b2ddb0;
      auVar6 = _DAT_100b2dda0;
      auVar5 = _PTR___mh_execute_header_100b2dd90;
      bVar17 = *(byte *)(lVar3 + 0x30);
      lVar15 = 0;
      if (DAT_1011ba010 == (undefined4 *)0x0) {
        do {
          iVar13 = (int)lVar15;
          auVar25._0_4_ = iVar13 + auVar5._0_4_;
          auVar25._4_4_ = iVar13 + auVar5._4_4_;
          auVar25._8_4_ = iVar13 + auVar5._8_4_;
          auVar25._12_4_ = iVar13 + auVar5._12_4_;
          auVar22 = auVar25 & auVar6;
          auVar35._0_4_ = auVar25._0_4_ >> 1;
          auVar35._4_4_ = auVar25._4_4_ >> 1;
          auVar35._8_4_ = auVar25._8_4_ >> 1;
          auVar35._12_4_ = auVar25._12_4_ >> 1;
          auVar35 = auVar35 & auVar6;
          auVar29._0_4_ = auVar25._0_4_ >> 2;
          auVar29._4_4_ = auVar25._4_4_ >> 2;
          auVar29._8_4_ = auVar25._8_4_ >> 2;
          auVar29._12_4_ = auVar25._12_4_ >> 2;
          auVar29 = auVar29 & auVar6;
          auVar36._0_4_ = auVar25._0_4_ >> 3;
          auVar36._4_4_ = auVar25._4_4_ >> 3;
          auVar36._8_4_ = auVar25._8_4_ >> 3;
          auVar36._12_4_ = auVar25._12_4_ >> 3;
          auVar36 = auVar36 & auVar6;
          auVar30._0_4_ = auVar25._0_4_ >> 4;
          auVar30._4_4_ = auVar25._4_4_ >> 4;
          auVar30._8_4_ = auVar25._8_4_ >> 4;
          auVar30._12_4_ = auVar25._12_4_ >> 4;
          auVar30 = auVar30 & auVar6;
          auVar37._0_4_ = auVar25._0_4_ >> 5;
          auVar37._4_4_ = auVar25._4_4_ >> 5;
          auVar37._8_4_ = auVar25._8_4_ >> 5;
          auVar37._12_4_ = auVar25._12_4_ >> 5;
          auVar37 = auVar37 & auVar6;
          auVar31._0_4_ = auVar25._0_4_ >> 6;
          auVar31._4_4_ = auVar25._4_4_ >> 6;
          auVar31._8_4_ = auVar25._8_4_ >> 6;
          auVar31._12_4_ = auVar25._12_4_ >> 6;
          auVar31 = auVar31 & auVar6;
          auVar23._0_4_ = auVar25._0_4_ >> 7;
          auVar23._4_4_ = auVar25._4_4_ >> 7;
          auVar23._8_4_ = auVar25._8_4_ >> 7;
          auVar23._12_4_ = auVar25._12_4_ >> 7;
          auVar23 = auVar23 & auVar6;
          auVar24._0_4_ =
               auVar23._0_4_ +
               auVar31._0_4_ +
               auVar37._0_4_ +
               auVar30._0_4_ + auVar36._0_4_ + auVar29._0_4_ + auVar35._0_4_ + auVar22._0_4_;
          auVar24._4_4_ =
               auVar23._4_4_ +
               auVar31._4_4_ +
               auVar37._4_4_ +
               auVar30._4_4_ + auVar36._4_4_ + auVar29._4_4_ + auVar35._4_4_ + auVar22._4_4_;
          auVar24._8_4_ =
               auVar23._8_4_ +
               auVar31._8_4_ +
               auVar37._8_4_ +
               auVar30._8_4_ + auVar36._8_4_ + auVar29._8_4_ + auVar35._8_4_ + auVar22._8_4_;
          auVar24._12_4_ =
               auVar23._12_4_ +
               auVar31._12_4_ +
               auVar37._12_4_ +
               auVar30._12_4_ + auVar36._12_4_ + auVar29._12_4_ + auVar35._12_4_ + auVar22._12_4_;
          auVar22 = pshufb(auVar24,auVar7);
          *(int *)((long)&DAT_1011b9f10 + lVar15) = auVar22._0_4_;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0x100);
        DAT_1011ba010 = &DAT_1011b9f10;
      }
      bVar17 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar17);
      uVar10 = FUN_1003ba9d0(local_478);
      uVar11 = FUN_1003ba9d0(local_698);
      FUN_10038e8e0(uVar4,"%s = %s(%s(%s) * %s(%s));\n",uVar9,
                    *(undefined8 *)(&DAT_100bbd9e0 + (ulong)bVar17 * 8),
                    *(undefined8 *)(&DAT_100bbda40 + (ulong)bVar1 * 8),uVar10,
                    *(undefined8 *)(&DAT_100bbda40 + (ulong)bVar1 * 8),uVar11);
    }
    FUN_1003b9b40(local_698);
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
    FUN_1003b9b40(local_478);
    FUN_1003b9b40(local_258);
  }
  else {
    if ((bVar2 == 4 && bVar1 == bVar17) || (bVar17 == 4 && bVar1 == bVar2)) {
      lVar18 = lVar15;
      if (bVar2 == 4) {
        lVar18 = lVar19;
      }
      FUN_1003b9a60(local_8b8,lVar3,bVar1,*(undefined1 *)(lVar3 + 0x30));
      FUN_1003b9a60(local_ad8,lVar18,4,*(undefined1 *)(lVar3 + 0x30));
      if (bVar2 == 4) {
        lVar19 = lVar15;
      }
      FUN_1003b9a60(local_cf8,lVar19,bVar1,*(undefined1 *)(lVar3 + 0x30));
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar9 = FUN_1003ba9d0(local_8b8);
      uVar10 = FUN_1003a78b0(bVar1,*(undefined1 *)(lVar3 + 0x30));
      uVar11 = FUN_1003ba9d0(local_ad8);
      uVar12 = FUN_1003ba9d0(local_cf8);
      FUN_10038e8e0(uVar4,"%s = %s(%s) * %s;\n",uVar9,uVar10,uVar11,uVar12);
      FUN_1003b9b40(local_cf8);
      FUN_1003b9b40(local_ad8);
      puVar16 = local_8b8;
    }
    else {
      bVar17 = 2;
      if ((bVar1 & 3) != 0) {
        bVar17 = bVar1;
      }
      FUN_1003b9a60(local_f18,lVar3,bVar17,*(undefined1 *)(lVar3 + 0x30));
      FUN_1003b9a60(local_1138,lVar15,bVar17,*(undefined1 *)(lVar3 + 0x30));
      FUN_1003b9a60(local_1358,lVar19,bVar17,*(undefined1 *)(lVar3 + 0x30));
      uVar4 = *(undefined8 *)(param_1 + 8);
      uVar9 = FUN_1003ba9d0(local_f18);
      if (local_d00 != '\0') {
        FUN_1003ba140(local_f18);
      }
      lVar15 = local_dc8;
      if (local_dc8 == 0) {
        lVar15 = local_db8;
      }
      uVar10 = FUN_1003ba9d0(local_1138);
      uVar11 = FUN_1003ba9d0(local_1358);
      if (local_d00 != '\0') {
        FUN_1003ba140(local_f18);
      }
      if (local_d20 == 0) {
        local_d20 = local_d10;
      }
      FUN_10038e8e0(uVar4,"%s = %s%s & %s%s;\n",uVar9,lVar15,uVar10,uVar11,local_d20);
      FUN_1003b9b40(local_1358);
      FUN_1003b9b40(local_1138);
      puVar16 = local_f18;
    }
    FUN_1003b9b40(puVar16);
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

