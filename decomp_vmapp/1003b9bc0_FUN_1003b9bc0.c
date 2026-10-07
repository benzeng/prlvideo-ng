
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b9bc0(undefined8 param_1,undefined8 param_2,byte param_3,int param_4,int param_5)

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
  int iVar11;
  long lVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar9 = _DAT_100b2ddb0;
  uVar8 = _UNK_100b2ddac;
  uVar7 = _UNK_100b2dda8;
  uVar6 = _UNK_100b2dda4;
  uVar5 = _DAT_100b2dda0;
  iVar4 = _UNK_100b2dd9c;
  iVar3 = _UNK_100b2dd98;
  iVar2 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar1 = (int)PTR___mh_execute_header_100b2dd90;
  if (param_4 - 1U < 2) {
    if (1 < param_5 - 1U) {
      if (param_5 == 8) {
        if (param_4 == 1) {
          pcVar13 = "U2F(";
        }
        else {
          if (param_4 != 2) {
            return 1;
          }
          pcVar13 = "I2F(";
        }
        goto LAB_1003ba0b5;
      }
      if (param_5 != 4) {
        return 1;
      }
    }
    uVar10 = FUN_1003a78b0(param_5,param_3);
    FUN_10038e8e0(param_2,"%s(",uVar10);
    return 1;
  }
  if (param_4 != 4) {
    if (param_4 != 8) {
      return 1;
    }
    if (param_5 == 1) {
      pcVar13 = "F2U(";
    }
    else {
      if (param_5 == 4) {
        lVar12 = 0;
        if (DAT_1011ba010 == (undefined4 *)0x0) {
          do {
            iVar11 = (int)lVar12;
            uVar14 = iVar11 + iVar1;
            uVar19 = iVar11 + iVar2;
            uVar20 = iVar11 + iVar3;
            uVar21 = iVar11 + iVar4;
            auVar17._0_4_ =
                 (uVar14 >> 7 & uVar5) +
                 (uVar14 >> 6 & uVar5) +
                 (uVar14 >> 5 & uVar5) +
                 (uVar14 >> 4 & uVar5) +
                 (uVar14 >> 3 & uVar5) +
                 (uVar14 >> 2 & uVar5) + (uVar14 >> 1 & uVar5) + (uVar14 & uVar5);
            auVar17._4_4_ =
                 (uVar19 >> 7 & uVar6) +
                 (uVar19 >> 6 & uVar6) +
                 (uVar19 >> 5 & uVar6) +
                 (uVar19 >> 4 & uVar6) +
                 (uVar19 >> 3 & uVar6) +
                 (uVar19 >> 2 & uVar6) + (uVar19 >> 1 & uVar6) + (uVar19 & uVar6);
            auVar17._8_4_ =
                 (uVar20 >> 7 & uVar7) +
                 (uVar20 >> 6 & uVar7) +
                 (uVar20 >> 5 & uVar7) +
                 (uVar20 >> 4 & uVar7) +
                 (uVar20 >> 3 & uVar7) +
                 (uVar20 >> 2 & uVar7) + (uVar20 >> 1 & uVar7) + (uVar20 & uVar7);
            auVar17._12_4_ =
                 (uVar21 >> 7 & uVar8) +
                 (uVar21 >> 6 & uVar8) +
                 (uVar21 >> 5 & uVar8) +
                 (uVar21 >> 4 & uVar8) +
                 (uVar21 >> 3 & uVar8) +
                 (uVar21 >> 2 & uVar8) + (uVar21 >> 1 & uVar8) + (uVar21 & uVar8);
            auVar16 = pshufb(auVar17,auVar9);
            *(int *)((long)&DAT_1011b9f10 + lVar12) = auVar16._0_4_;
            lVar12 = lVar12 + 4;
          } while (lVar12 != 0x100);
          DAT_1011ba010 = &DAT_1011b9f10;
        }
        uVar10 = *(undefined8 *)
                  (&DAT_100bbd9e0 + (ulong)*(byte *)((long)DAT_1011ba010 + (ulong)param_3) * 8);
        pcVar13 = "%s(F2I(";
        goto LAB_1003ba080;
      }
      if (param_5 != 2) {
        return 1;
      }
      pcVar13 = "F2I(";
    }
LAB_1003ba0b5:
    FUN_10038e8e0(param_2,pcVar13);
    return 1;
  }
  if (param_5 == 1) {
    lVar12 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar11 = (int)lVar12;
        uVar14 = iVar11 + iVar1;
        uVar19 = iVar11 + iVar2;
        uVar20 = iVar11 + iVar3;
        uVar21 = iVar11 + iVar4;
        auVar16._0_4_ =
             (uVar14 >> 7 & uVar5) +
             (uVar14 >> 6 & uVar5) +
             (uVar14 >> 5 & uVar5) +
             (uVar14 >> 4 & uVar5) +
             (uVar14 >> 3 & uVar5) +
             (uVar14 >> 2 & uVar5) + (uVar14 >> 1 & uVar5) + (uVar14 & uVar5);
        auVar16._4_4_ =
             (uVar19 >> 7 & uVar6) +
             (uVar19 >> 6 & uVar6) +
             (uVar19 >> 5 & uVar6) +
             (uVar19 >> 4 & uVar6) +
             (uVar19 >> 3 & uVar6) +
             (uVar19 >> 2 & uVar6) + (uVar19 >> 1 & uVar6) + (uVar19 & uVar6);
        auVar16._8_4_ =
             (uVar20 >> 7 & uVar7) +
             (uVar20 >> 6 & uVar7) +
             (uVar20 >> 5 & uVar7) +
             (uVar20 >> 4 & uVar7) +
             (uVar20 >> 3 & uVar7) +
             (uVar20 >> 2 & uVar7) + (uVar20 >> 1 & uVar7) + (uVar20 & uVar7);
        auVar16._12_4_ =
             (uVar21 >> 7 & uVar8) +
             (uVar21 >> 6 & uVar8) +
             (uVar21 >> 5 & uVar8) +
             (uVar21 >> 4 & uVar8) +
             (uVar21 >> 3 & uVar8) +
             (uVar21 >> 2 & uVar8) + (uVar21 >> 1 & uVar8) + (uVar21 & uVar8);
        auVar16 = pshufb(auVar16,auVar9);
        *(int *)((long)&DAT_1011b9f10 + lVar12) = auVar16._0_4_;
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    uVar10 = *(undefined8 *)
              (&DAT_100bbda10 + (ulong)*(byte *)((long)DAT_1011ba010 + (ulong)param_3) * 8);
    pcVar13 = "(~0u * %s(";
  }
  else if (param_5 == 8) {
    lVar12 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar11 = (int)lVar12;
        uVar14 = iVar11 + iVar1;
        uVar19 = iVar11 + iVar2;
        uVar20 = iVar11 + iVar3;
        uVar21 = iVar11 + iVar4;
        auVar15._0_4_ =
             (uVar14 >> 7 & uVar5) +
             (uVar14 >> 6 & uVar5) +
             (uVar14 >> 5 & uVar5) +
             (uVar14 >> 4 & uVar5) +
             (uVar14 >> 3 & uVar5) +
             (uVar14 >> 2 & uVar5) + (uVar14 >> 1 & uVar5) + (uVar14 & uVar5);
        auVar15._4_4_ =
             (uVar19 >> 7 & uVar6) +
             (uVar19 >> 6 & uVar6) +
             (uVar19 >> 5 & uVar6) +
             (uVar19 >> 4 & uVar6) +
             (uVar19 >> 3 & uVar6) +
             (uVar19 >> 2 & uVar6) + (uVar19 >> 1 & uVar6) + (uVar19 & uVar6);
        auVar15._8_4_ =
             (uVar20 >> 7 & uVar7) +
             (uVar20 >> 6 & uVar7) +
             (uVar20 >> 5 & uVar7) +
             (uVar20 >> 4 & uVar7) +
             (uVar20 >> 3 & uVar7) +
             (uVar20 >> 2 & uVar7) + (uVar20 >> 1 & uVar7) + (uVar20 & uVar7);
        auVar15._12_4_ =
             (uVar21 >> 7 & uVar8) +
             (uVar21 >> 6 & uVar8) +
             (uVar21 >> 5 & uVar8) +
             (uVar21 >> 4 & uVar8) +
             (uVar21 >> 3 & uVar8) +
             (uVar21 >> 2 & uVar8) + (uVar21 >> 1 & uVar8) + (uVar21 & uVar8);
        auVar16 = pshufb(auVar15,auVar9);
        *(int *)((long)&DAT_1011b9f10 + lVar12) = auVar16._0_4_;
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    uVar10 = *(undefined8 *)
              (&DAT_100bbda40 + (ulong)*(byte *)((long)DAT_1011ba010 + (ulong)param_3) * 8);
    pcVar13 = "I2F(~0 * %s(";
  }
  else {
    if (param_5 != 2) {
      return 1;
    }
    lVar12 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar11 = (int)lVar12;
        uVar14 = iVar11 + iVar1;
        uVar19 = iVar11 + iVar2;
        uVar20 = iVar11 + iVar3;
        uVar21 = iVar11 + iVar4;
        auVar18._0_4_ =
             (uVar14 >> 7 & uVar5) +
             (uVar14 >> 6 & uVar5) +
             (uVar14 >> 5 & uVar5) +
             (uVar14 >> 4 & uVar5) +
             (uVar14 >> 3 & uVar5) +
             (uVar14 >> 2 & uVar5) + (uVar14 >> 1 & uVar5) + (uVar14 & uVar5);
        auVar18._4_4_ =
             (uVar19 >> 7 & uVar6) +
             (uVar19 >> 6 & uVar6) +
             (uVar19 >> 5 & uVar6) +
             (uVar19 >> 4 & uVar6) +
             (uVar19 >> 3 & uVar6) +
             (uVar19 >> 2 & uVar6) + (uVar19 >> 1 & uVar6) + (uVar19 & uVar6);
        auVar18._8_4_ =
             (uVar20 >> 7 & uVar7) +
             (uVar20 >> 6 & uVar7) +
             (uVar20 >> 5 & uVar7) +
             (uVar20 >> 4 & uVar7) +
             (uVar20 >> 3 & uVar7) +
             (uVar20 >> 2 & uVar7) + (uVar20 >> 1 & uVar7) + (uVar20 & uVar7);
        auVar18._12_4_ =
             (uVar21 >> 7 & uVar8) +
             (uVar21 >> 6 & uVar8) +
             (uVar21 >> 5 & uVar8) +
             (uVar21 >> 4 & uVar8) +
             (uVar21 >> 3 & uVar8) +
             (uVar21 >> 2 & uVar8) + (uVar21 >> 1 & uVar8) + (uVar21 & uVar8);
        auVar16 = pshufb(auVar18,auVar9);
        *(int *)((long)&DAT_1011b9f10 + lVar12) = auVar16._0_4_;
        lVar12 = lVar12 + 4;
      } while (lVar12 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    uVar10 = *(undefined8 *)
              (&DAT_100bbda40 + (ulong)*(byte *)((long)DAT_1011ba010 + (ulong)param_3) * 8);
    pcVar13 = "(~0 * %s(";
  }
LAB_1003ba080:
  FUN_10038e8e0(param_2,pcVar13,uVar10);
  return 2;
}

