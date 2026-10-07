
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100546440(long param_1,byte *param_2,long param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  byte *pbVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  undefined4 *puVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  auVar8 = _DAT_100b2ddb0;
  uVar7 = _UNK_100b2ddac;
  uVar6 = _UNK_100b2dda8;
  uVar9 = _UNK_100b2dda4;
  uVar21 = _DAT_100b2dda0;
  iVar5 = _UNK_100b2dd9c;
  iVar4 = _UNK_100b2dd98;
  iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar2 = (int)PTR___mh_execute_header_100b2dd90;
  uVar17 = *(ulong *)(param_1 + 0x10) >> 0xc;
  iVar16 = (int)uVar17;
  uVar18 = iVar16 + 7U >> 3;
  pbVar19 = param_2 + uVar18;
  iVar22 = 0;
  if (uVar18 != 0) {
    iVar22 = 0;
    pbVar10 = param_2;
    puVar20 = DAT_1011bc520;
    do {
      bVar1 = *pbVar10;
      lVar13 = 0;
      if (puVar20 == (undefined4 *)0x0) {
        do {
          iVar12 = (int)lVar13;
          uVar24 = iVar12 + iVar2;
          uVar27 = iVar12 + iVar3;
          uVar28 = iVar12 + iVar4;
          uVar29 = iVar12 + iVar5;
          auVar25._0_4_ =
               (uVar24 >> 7 & uVar21) +
               (uVar24 >> 6 & uVar21) +
               (uVar24 >> 5 & uVar21) +
               (uVar24 >> 4 & uVar21) +
               (uVar24 >> 3 & uVar21) +
               (uVar24 >> 2 & uVar21) + (uVar24 >> 1 & uVar21) + (uVar24 & uVar21);
          auVar25._4_4_ =
               (uVar27 >> 7 & uVar9) +
               (uVar27 >> 6 & uVar9) +
               (uVar27 >> 5 & uVar9) +
               (uVar27 >> 4 & uVar9) +
               (uVar27 >> 3 & uVar9) +
               (uVar27 >> 2 & uVar9) + (uVar27 >> 1 & uVar9) + (uVar27 & uVar9);
          auVar25._8_4_ =
               (uVar28 >> 7 & uVar6) +
               (uVar28 >> 6 & uVar6) +
               (uVar28 >> 5 & uVar6) +
               (uVar28 >> 4 & uVar6) +
               (uVar28 >> 3 & uVar6) +
               (uVar28 >> 2 & uVar6) + (uVar28 >> 1 & uVar6) + (uVar28 & uVar6);
          auVar25._12_4_ =
               (uVar29 >> 7 & uVar7) +
               (uVar29 >> 6 & uVar7) +
               (uVar29 >> 5 & uVar7) +
               (uVar29 >> 4 & uVar7) +
               (uVar29 >> 3 & uVar7) +
               (uVar29 >> 2 & uVar7) + (uVar29 >> 1 & uVar7) + (uVar29 & uVar7);
          auVar25 = pshufb(auVar25,auVar8);
          *(int *)((long)&DAT_1011bc420 + lVar13) = auVar25._0_4_;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0x100);
        DAT_1011bc520 = &DAT_1011bc420;
        puVar20 = &DAT_1011bc420;
      }
      iVar22 = iVar22 + (uint)*(byte *)((long)puVar20 + (ulong)bVar1);
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 < pbVar19);
  }
  uVar21 = iVar16 + 0x1fU >> 5;
  if (uVar21 != 0) {
    uVar11 = 0;
    uVar14 = 1;
    do {
      uVar9 = ~*(uint *)(param_3 + uVar11 * 4);
      if (param_4 != 0) {
        uVar9 = uVar9 | *(uint *)(param_4 + uVar11 * 4);
      }
      *(uint *)(param_2 + uVar11 * 4) = *(uint *)(param_2 + uVar11 * 4) & uVar9;
      bVar23 = uVar14 < uVar21;
      uVar11 = uVar14;
      uVar14 = (ulong)((int)uVar14 + 1);
    } while (bVar23);
  }
  auVar8 = _DAT_100b2ddb0;
  uVar7 = _UNK_100b2ddac;
  uVar6 = _UNK_100b2dda8;
  uVar9 = _UNK_100b2dda4;
  uVar21 = _DAT_100b2dda0;
  iVar5 = _UNK_100b2dd9c;
  iVar4 = _UNK_100b2dd98;
  iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar2 = (int)PTR___mh_execute_header_100b2dd90;
  lVar13 = 0;
  if (uVar18 != 0) {
    lVar13 = 0;
    puVar20 = DAT_1011bc520;
    do {
      bVar1 = *param_2;
      lVar15 = 0;
      if (puVar20 == (undefined4 *)0x0) {
        do {
          iVar12 = (int)lVar15;
          uVar18 = iVar12 + iVar2;
          uVar24 = iVar12 + iVar3;
          uVar27 = iVar12 + iVar4;
          uVar28 = iVar12 + iVar5;
          auVar26._0_4_ =
               (uVar18 >> 7 & uVar21) +
               (uVar18 >> 6 & uVar21) +
               (uVar18 >> 5 & uVar21) +
               (uVar18 >> 4 & uVar21) +
               (uVar18 >> 3 & uVar21) +
               (uVar18 >> 2 & uVar21) + (uVar18 >> 1 & uVar21) + (uVar18 & uVar21);
          auVar26._4_4_ =
               (uVar24 >> 7 & uVar9) +
               (uVar24 >> 6 & uVar9) +
               (uVar24 >> 5 & uVar9) +
               (uVar24 >> 4 & uVar9) +
               (uVar24 >> 3 & uVar9) +
               (uVar24 >> 2 & uVar9) + (uVar24 >> 1 & uVar9) + (uVar24 & uVar9);
          auVar26._8_4_ =
               (uVar27 >> 7 & uVar6) +
               (uVar27 >> 6 & uVar6) +
               (uVar27 >> 5 & uVar6) +
               (uVar27 >> 4 & uVar6) +
               (uVar27 >> 3 & uVar6) +
               (uVar27 >> 2 & uVar6) + (uVar27 >> 1 & uVar6) + (uVar27 & uVar6);
          auVar26._12_4_ =
               (uVar28 >> 7 & uVar7) +
               (uVar28 >> 6 & uVar7) +
               (uVar28 >> 5 & uVar7) +
               (uVar28 >> 4 & uVar7) +
               (uVar28 >> 3 & uVar7) +
               (uVar28 >> 2 & uVar7) + (uVar28 >> 1 & uVar7) + (uVar28 & uVar7);
          auVar25 = pshufb(auVar26,auVar8);
          *(int *)((long)&DAT_1011bc420 + lVar15) = auVar25._0_4_;
          lVar15 = lVar15 + 4;
        } while (lVar15 != 0x100);
        DAT_1011bc520 = &DAT_1011bc420;
        puVar20 = &DAT_1011bc420;
      }
      lVar13 = lVar13 + (ulong)*(byte *)((long)puVar20 + (ulong)bVar1);
      param_2 = param_2 + 1;
    } while (param_2 < pbVar19);
  }
  FUN_1008e3970("","TransMem",0,"Main memory zero pages: %u -> %llu",iVar16 - iVar22,
                (uVar17 & 0xffffffff) - lVar13);
  return;
}

