
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003ba140(undefined8 *param_1)

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
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar16 [16];
  
  *(undefined1 *)(param_1 + 0x43) = 0;
  puVar12 = (undefined1 *)param_1[0x2a];
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)param_1[0x2c];
  }
  *puVar12 = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  puVar12 = (undefined1 *)param_1[0x3f];
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)param_1[0x41];
  }
  *puVar12 = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  iVar11 = 0;
  if (*(int *)((long)param_1 + 0x14) != *(int *)(param_1 + 3)) {
    iVar11 = FUN_1003b9bc0(param_1,param_1 + 0x29,*(undefined4 *)(param_1 + 2));
  }
  auVar10 = _DAT_100b2ddb0;
  uVar9 = _UNK_100b2ddac;
  uVar8 = _UNK_100b2dda8;
  uVar7 = _UNK_100b2dda4;
  uVar6 = _DAT_100b2dda0;
  iVar5 = _UNK_100b2dd9c;
  iVar4 = _UNK_100b2dd98;
  iVar3 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar2 = (int)PTR___mh_execute_header_100b2dd90;
  if ((*(ushort *)(*(long *)*param_1 + 0x54) & 0x2000) != 0) {
    bVar1 = *(byte *)(param_1 + 2);
    lVar14 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar13 = (int)lVar14;
        uVar15 = iVar13 + iVar2;
        uVar17 = iVar13 + iVar3;
        uVar18 = iVar13 + iVar4;
        uVar19 = iVar13 + iVar5;
        auVar16._0_4_ =
             (uVar15 >> 7 & uVar6) +
             (uVar15 >> 6 & uVar6) +
             (uVar15 >> 5 & uVar6) +
             (uVar15 >> 4 & uVar6) +
             (uVar15 >> 3 & uVar6) +
             (uVar15 >> 2 & uVar6) + (uVar15 >> 1 & uVar6) + (uVar15 & uVar6);
        auVar16._4_4_ =
             (uVar17 >> 7 & uVar7) +
             (uVar17 >> 6 & uVar7) +
             (uVar17 >> 5 & uVar7) +
             (uVar17 >> 4 & uVar7) +
             (uVar17 >> 3 & uVar7) +
             (uVar17 >> 2 & uVar7) + (uVar17 >> 1 & uVar7) + (uVar17 & uVar7);
        auVar16._8_4_ =
             (uVar18 >> 7 & uVar8) +
             (uVar18 >> 6 & uVar8) +
             (uVar18 >> 5 & uVar8) +
             (uVar18 >> 4 & uVar8) +
             (uVar18 >> 3 & uVar8) +
             (uVar18 >> 2 & uVar8) + (uVar18 >> 1 & uVar8) + (uVar18 & uVar8);
        auVar16._12_4_ =
             (uVar19 >> 7 & uVar9) +
             (uVar19 >> 6 & uVar9) +
             (uVar19 >> 5 & uVar9) +
             (uVar19 >> 4 & uVar9) +
             (uVar19 >> 3 & uVar9) +
             (uVar19 >> 2 & uVar9) + (uVar19 >> 1 & uVar9) + (uVar19 & uVar9);
        auVar16 = pshufb(auVar16,auVar10);
        *(int *)((long)&DAT_1011b9f10 + lVar14) = auVar16._0_4_;
        lVar14 = lVar14 + 4;
      } while (lVar14 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    FUN_10038e8e0(param_1 + 0x29,"max(%s(0), clamp(",
                  *(undefined8 *)
                   (&DAT_100bbda70 + (ulong)*(byte *)((long)DAT_1011ba010 + (ulong)bVar1) * 8));
    FUN_10038e8e0(param_1 + 0x3e,", 0, 1))");
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    FUN_10038e8e0(param_1 + 0x3e,")");
  }
  return;
}

