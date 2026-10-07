
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1005aa480(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  long lVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar18 [16];
  
  auVar10 = _DAT_100b2ddb0;
  uVar9 = _UNK_100b2ddac;
  uVar8 = _UNK_100b2dda8;
  uVar7 = _UNK_100b2dda4;
  uVar6 = _DAT_100b2dda0;
  iVar5 = _UNK_100b2dd9c;
  iVar4 = _UNK_100b2dd98;
  iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar2 = (int)PTR___mh_execute_header_100b2dd90;
  lVar11 = 0;
  uVar16 = *(int *)(param_1 + 0x1c) + 7U >> 3;
  if (uVar16 != 0) {
    pbVar14 = *(byte **)(param_1 + 8);
    pbVar17 = pbVar14 + uVar16;
    puVar15 = DAT_1011bc840;
    do {
      bVar1 = *pbVar14;
      lVar13 = 0;
      if (puVar15 == (undefined4 *)0x0) {
        do {
          iVar12 = (int)lVar13;
          uVar16 = iVar12 + iVar2;
          uVar19 = iVar12 + iVar3;
          uVar20 = iVar12 + iVar4;
          uVar21 = iVar12 + iVar5;
          auVar18._0_4_ =
               (uVar16 >> 7 & uVar6) +
               (uVar16 >> 6 & uVar6) +
               (uVar16 >> 5 & uVar6) +
               (uVar16 >> 4 & uVar6) +
               (uVar16 >> 3 & uVar6) +
               (uVar16 >> 2 & uVar6) + (uVar16 >> 1 & uVar6) + (uVar16 & uVar6);
          auVar18._4_4_ =
               (uVar19 >> 7 & uVar7) +
               (uVar19 >> 6 & uVar7) +
               (uVar19 >> 5 & uVar7) +
               (uVar19 >> 4 & uVar7) +
               (uVar19 >> 3 & uVar7) +
               (uVar19 >> 2 & uVar7) + (uVar19 >> 1 & uVar7) + (uVar19 & uVar7);
          auVar18._8_4_ =
               (uVar20 >> 7 & uVar8) +
               (uVar20 >> 6 & uVar8) +
               (uVar20 >> 5 & uVar8) +
               (uVar20 >> 4 & uVar8) +
               (uVar20 >> 3 & uVar8) +
               (uVar20 >> 2 & uVar8) + (uVar20 >> 1 & uVar8) + (uVar20 & uVar8);
          auVar18._12_4_ =
               (uVar21 >> 7 & uVar9) +
               (uVar21 >> 6 & uVar9) +
               (uVar21 >> 5 & uVar9) +
               (uVar21 >> 4 & uVar9) +
               (uVar21 >> 3 & uVar9) +
               (uVar21 >> 2 & uVar9) + (uVar21 >> 1 & uVar9) + (uVar21 & uVar9);
          auVar18 = pshufb(auVar18,auVar10);
          *(int *)((long)&DAT_1011bc740 + lVar13) = auVar18._0_4_;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0x100);
        DAT_1011bc840 = &DAT_1011bc740;
        puVar15 = &DAT_1011bc740;
      }
      lVar11 = lVar11 + (ulong)*(byte *)((long)puVar15 + (ulong)bVar1);
      pbVar14 = pbVar14 + 1;
    } while (pbVar14 < pbVar17);
  }
  return lVar11;
}

