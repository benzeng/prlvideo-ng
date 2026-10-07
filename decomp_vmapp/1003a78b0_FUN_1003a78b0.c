
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003a78b0(undefined4 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar15 [16];
  
  auVar9 = _DAT_100b2ddb0;
  uVar8 = _UNK_100b2ddac;
  uVar7 = _UNK_100b2dda8;
  uVar6 = _UNK_100b2dda4;
  uVar5 = _DAT_100b2dda0;
  iVar4 = _UNK_100b2dd9c;
  iVar3 = _UNK_100b2dd98;
  iVar2 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar1 = (int)PTR___mh_execute_header_100b2dd90;
  lVar13 = 0;
  if (DAT_1011ba010 == (undefined4 *)0x0) {
    do {
      iVar12 = (int)lVar13;
      uVar14 = iVar12 + iVar1;
      uVar16 = iVar12 + iVar2;
      uVar17 = iVar12 + iVar3;
      uVar18 = iVar12 + iVar4;
      auVar15._0_4_ =
           (uVar14 >> 7 & uVar5) +
           (uVar14 >> 6 & uVar5) +
           (uVar14 >> 5 & uVar5) +
           (uVar14 >> 4 & uVar5) +
           (uVar14 >> 3 & uVar5) + (uVar14 >> 2 & uVar5) + (uVar14 >> 1 & uVar5) + (uVar14 & uVar5);
      auVar15._4_4_ =
           (uVar16 >> 7 & uVar6) +
           (uVar16 >> 6 & uVar6) +
           (uVar16 >> 5 & uVar6) +
           (uVar16 >> 4 & uVar6) +
           (uVar16 >> 3 & uVar6) + (uVar16 >> 2 & uVar6) + (uVar16 >> 1 & uVar6) + (uVar16 & uVar6);
      auVar15._8_4_ =
           (uVar17 >> 7 & uVar7) +
           (uVar17 >> 6 & uVar7) +
           (uVar17 >> 5 & uVar7) +
           (uVar17 >> 4 & uVar7) +
           (uVar17 >> 3 & uVar7) + (uVar17 >> 2 & uVar7) + (uVar17 >> 1 & uVar7) + (uVar17 & uVar7);
      auVar15._12_4_ =
           (uVar18 >> 7 & uVar8) +
           (uVar18 >> 6 & uVar8) +
           (uVar18 >> 5 & uVar8) +
           (uVar18 >> 4 & uVar8) +
           (uVar18 >> 3 & uVar8) + (uVar18 >> 2 & uVar8) + (uVar18 >> 1 & uVar8) + (uVar18 & uVar8);
      auVar15 = pshufb(auVar15,auVar9);
      *(int *)((long)&DAT_1011b9f10 + lVar13) = auVar15._0_4_;
      lVar13 = lVar13 + 4;
    } while (lVar13 != 0x100);
    DAT_1011ba010 = &DAT_1011b9f10;
  }
  uVar10 = 0;
  switch(param_1) {
  case 1:
    puVar11 = &DAT_100bbda10;
    break;
  case 2:
    puVar11 = &DAT_100bbda40;
    break;
  default:
    goto switchD_1003a79b5_caseD_3;
  case 4:
    puVar11 = &DAT_100bbd9e0;
    break;
  case 8:
    puVar11 = &DAT_100bbda70;
  }
  uVar10 = *(undefined8 *)(puVar11 + (ulong)*(byte *)((long)DAT_1011ba010 + param_2) * 8);
switchD_1003a79b5_caseD_3:
  return uVar10;
}

