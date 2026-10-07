
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003c0110(long param_1,long param_2)

{
  short sVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  uint uVar21;
  char *pcVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar25 [16];
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  auVar11 = _DAT_100b2ddb0;
  uVar10 = _UNK_100b2ddac;
  uVar9 = _UNK_100b2dda8;
  uVar8 = _UNK_100b2dda4;
  uVar7 = _DAT_100b2dda0;
  iVar6 = _UNK_100b2dd9c;
  iVar5 = _UNK_100b2dd98;
  iVar4 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar3 = (int)PTR___mh_execute_header_100b2dd90;
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar1 = *(short *)(param_2 + 0x4c);
  uVar21 = 1;
  if (((sVar1 != 0xf) && (uVar21 = 5, sVar1 != 0x10)) && (uVar21 = 0, sVar1 == 0x11)) {
    uVar21 = 0xd;
  }
  lVar19 = *(long *)(param_2 + 0x40);
  bVar20 = *(byte *)(lVar19 + 0x30);
  uVar12 = (ulong)bVar20;
  if ((bVar20 & bVar20 - 1) == 0) {
    pcVar23 = "";
  }
  else {
    lVar18 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar17 = (int)lVar18;
        uVar24 = iVar17 + iVar3;
        uVar26 = iVar17 + iVar4;
        uVar27 = iVar17 + iVar5;
        uVar28 = iVar17 + iVar6;
        auVar25._0_4_ =
             (uVar24 >> 7 & uVar7) +
             (uVar24 >> 6 & uVar7) +
             (uVar24 >> 5 & uVar7) +
             (uVar24 >> 4 & uVar7) +
             (uVar24 >> 3 & uVar7) +
             (uVar24 >> 2 & uVar7) + (uVar24 >> 1 & uVar7) + (uVar24 & uVar7);
        auVar25._4_4_ =
             (uVar26 >> 7 & uVar8) +
             (uVar26 >> 6 & uVar8) +
             (uVar26 >> 5 & uVar8) +
             (uVar26 >> 4 & uVar8) +
             (uVar26 >> 3 & uVar8) +
             (uVar26 >> 2 & uVar8) + (uVar26 >> 1 & uVar8) + (uVar26 & uVar8);
        auVar25._8_4_ =
             (uVar27 >> 7 & uVar9) +
             (uVar27 >> 6 & uVar9) +
             (uVar27 >> 5 & uVar9) +
             (uVar27 >> 4 & uVar9) +
             (uVar27 >> 3 & uVar9) +
             (uVar27 >> 2 & uVar9) + (uVar27 >> 1 & uVar9) + (uVar27 & uVar9);
        auVar25._12_4_ =
             (uVar28 >> 7 & uVar10) +
             (uVar28 >> 6 & uVar10) +
             (uVar28 >> 5 & uVar10) +
             (uVar28 >> 4 & uVar10) +
             (uVar28 >> 3 & uVar10) +
             (uVar28 >> 2 & uVar10) + (uVar28 >> 1 & uVar10) + (uVar28 & uVar10);
        auVar25 = pshufb(auVar25,auVar11);
        *(int *)((long)&DAT_1011b9f10 + lVar18) = auVar25._0_4_;
        lVar18 = lVar18 + 4;
      } while (lVar18 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
      bVar20 = *(byte *)(lVar19 + 0x30);
    }
    pcVar23 = *(char **)(&DAT_100bbda70 + (ulong)*(byte *)((long)DAT_1011ba010 + uVar12) * 8);
  }
  FUN_1003b9a60(local_258,lVar19,8,bVar20);
  FUN_1003b9a60(local_478,lVar19 + 0x40,8,uVar21 | 2);
  FUN_1003b9a60(local_698,lVar19 + 0x80,8,uVar21 | 2);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar13 = FUN_1003ba9d0(local_258);
  if (*pcVar23 == '\0') {
    pcVar22 = "";
  }
  else {
    pcVar22 = "(";
  }
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar19 = local_108;
  if (local_108 == 0) {
    lVar19 = local_f8;
  }
  uVar14 = FUN_1003ba9d0(local_478);
  uVar15 = FUN_1003ba9d0(local_698);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  if (*pcVar23 == '\0') {
    pcVar16 = "";
  }
  else {
    pcVar16 = ")";
  }
  FUN_10038e8e0(uVar2,"%s = %s%s%sdot(%s, %s)%s%s;\n",uVar13,pcVar23,pcVar22,lVar19,uVar14,uVar15,
                local_60,pcVar16);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

