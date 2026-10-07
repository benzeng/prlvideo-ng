
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1003b4760(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
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
  
  lVar7 = FUN_1003b42e0(param_1,param_2,0x36,param_3,param_3);
  auVar4 = _DAT_100b2ddb0;
  auVar3 = _DAT_100b2dda0;
  auVar2 = _PTR___mh_execute_header_100b2dd90;
  lVar1 = *(long *)(lVar7 + 0x40);
  uVar14 = *(uint *)(param_1 + 0x28);
  bVar13 = *(byte *)(param_3 + 0x30);
  lVar11 = 0;
  if (DAT_1011ba010 == (undefined4 *)0x0) {
    do {
      iVar5 = (int)lVar11;
      auVar17._0_4_ = iVar5 + auVar2._0_4_;
      auVar17._4_4_ = iVar5 + auVar2._4_4_;
      auVar17._8_4_ = iVar5 + auVar2._8_4_;
      auVar17._12_4_ = iVar5 + auVar2._12_4_;
      auVar18 = auVar17 & auVar3;
      auVar22._0_4_ = auVar17._0_4_ >> 1;
      auVar22._4_4_ = auVar17._4_4_ >> 1;
      auVar22._8_4_ = auVar17._8_4_ >> 1;
      auVar22._12_4_ = auVar17._12_4_ >> 1;
      auVar22 = auVar22 & auVar3;
      auVar19._0_4_ = auVar17._0_4_ >> 2;
      auVar19._4_4_ = auVar17._4_4_ >> 2;
      auVar19._8_4_ = auVar17._8_4_ >> 2;
      auVar19._12_4_ = auVar17._12_4_ >> 2;
      auVar19 = auVar19 & auVar3;
      auVar23._0_4_ = auVar17._0_4_ >> 3;
      auVar23._4_4_ = auVar17._4_4_ >> 3;
      auVar23._8_4_ = auVar17._8_4_ >> 3;
      auVar23._12_4_ = auVar17._12_4_ >> 3;
      auVar23 = auVar23 & auVar3;
      auVar20._0_4_ = auVar17._0_4_ >> 4;
      auVar20._4_4_ = auVar17._4_4_ >> 4;
      auVar20._8_4_ = auVar17._8_4_ >> 4;
      auVar20._12_4_ = auVar17._12_4_ >> 4;
      auVar20 = auVar20 & auVar3;
      auVar24._0_4_ = auVar17._0_4_ >> 5;
      auVar24._4_4_ = auVar17._4_4_ >> 5;
      auVar24._8_4_ = auVar17._8_4_ >> 5;
      auVar24._12_4_ = auVar17._12_4_ >> 5;
      auVar24 = auVar24 & auVar3;
      auVar21._0_4_ = auVar17._0_4_ >> 6;
      auVar21._4_4_ = auVar17._4_4_ >> 6;
      auVar21._8_4_ = auVar17._8_4_ >> 6;
      auVar21._12_4_ = auVar17._12_4_ >> 6;
      auVar21 = auVar21 & auVar3;
      auVar15._0_4_ = auVar17._0_4_ >> 7;
      auVar15._4_4_ = auVar17._4_4_ >> 7;
      auVar15._8_4_ = auVar17._8_4_ >> 7;
      auVar15._12_4_ = auVar17._12_4_ >> 7;
      auVar15 = auVar15 & auVar3;
      auVar16._0_4_ =
           auVar15._0_4_ +
           auVar21._0_4_ +
           auVar24._0_4_ +
           auVar20._0_4_ + auVar23._0_4_ + auVar19._0_4_ + auVar22._0_4_ + auVar18._0_4_;
      auVar16._4_4_ =
           auVar15._4_4_ +
           auVar21._4_4_ +
           auVar24._4_4_ +
           auVar20._4_4_ + auVar23._4_4_ + auVar19._4_4_ + auVar22._4_4_ + auVar18._4_4_;
      auVar16._8_4_ =
           auVar15._8_4_ +
           auVar21._8_4_ +
           auVar24._8_4_ +
           auVar20._8_4_ + auVar23._8_4_ + auVar19._8_4_ + auVar22._8_4_ + auVar18._8_4_;
      auVar16._12_4_ =
           auVar15._12_4_ +
           auVar21._12_4_ +
           auVar24._12_4_ +
           auVar20._12_4_ + auVar23._12_4_ + auVar19._12_4_ + auVar22._12_4_ + auVar18._12_4_;
      auVar17 = pshufb(auVar16,auVar4);
      *(int *)((long)&DAT_1011b9f10 + lVar11) = auVar17._0_4_;
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0x100);
    DAT_1011ba010 = &DAT_1011b9f10;
  }
  if (4 < (uint)*(byte *)((long)DAT_1011ba010 + (ulong)bVar13) + (uVar14 & 3)) {
    *(uint *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 3U & 0xfffffffc;
  }
  *(byte *)(lVar1 + 0x75) = *(byte *)(lVar1 + 0x75) & 0xe7;
  *(byte *)(lVar1 + 0x35) = *(byte *)(lVar1 + 0x35) & 0xe7;
  *(undefined4 *)(param_3 + 0x2c) = 0;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  *(undefined1 *)(param_3 + 0x38) = 0;
  *(undefined1 *)(lVar1 + 0x38) = 0;
  iVar5 = (*(uint *)(param_1 + 0x28) >> 2) + *(int *)(*(long *)(param_1 + 0x20) + 0x174);
  *(int *)(param_3 + 0x28) = iVar5;
  *(int *)(lVar1 + 0x28) = iVar5;
  uVar14 = (uint)*(byte *)(param_3 + 0x30);
  if (*(byte *)(param_3 + 0x30) != 0) {
    uVar12 = 0xf;
    do {
      uVar6 = 0;
      if (uVar14 != 0) {
        for (; (uVar14 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (uVar14 == 0) {
        uVar6 = 0xffffffff;
      }
      uVar14 = ~(1 << ((byte)uVar6 & 0x1f)) & uVar14;
      uVar9 = *(uint *)(param_1 + 0x28);
      bVar13 = (byte)uVar9 & 3;
      *(uint *)(param_1 + 0x28) = uVar9 + 1;
      *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) | (byte)(1 << bVar13);
      *(byte *)(lVar1 + 0x71 + ((ulong)uVar9 & 3)) = (byte)uVar6;
      uVar9 = uVar12;
      while ((char)uVar9 != '\0') {
        uVar8 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        if (uVar9 == 0) {
          uVar8 = 0xffffffff;
        }
        uVar10 = ~(1 << ((byte)uVar8 & 0x1f));
        uVar9 = uVar9 & uVar10;
        if (*(byte *)(param_3 + 0x31 + (ulong)uVar8) == uVar6) {
          uVar12 = uVar12 & uVar10;
          *(byte *)(param_3 + 0x31 + (ulong)uVar8) = bVar13;
        }
      }
    } while ((char)uVar14 != '\0');
  }
  FUN_1003aa7f0(lVar1 + 0x40);
  *(byte *)(param_3 + 0x30) =
       (byte)(1 << (*(byte *)(param_3 + 0x34) & 0x1f)) |
       (byte)(1 << (*(byte *)(param_3 + 0x33) & 0x1f)) |
       (byte)(1 << (*(byte *)(param_3 + 0x32) & 0x1f)) |
       (byte)(1 << (*(byte *)(param_3 + 0x31) & 0x1f));
  return lVar7;
}

