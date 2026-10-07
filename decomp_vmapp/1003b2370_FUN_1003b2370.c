
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003b2370(long param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar22 [16];
  byte local_c0;
  undefined4 local_bf;
  undefined4 *local_b8;
  undefined1 local_b0;
  long local_a8;
  long lStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_60;
  long *local_58;
  long *local_50;
  long local_48;
  long *local_40;
  long *local_38;
  
  local_48 = 0;
  local_40 = &local_48;
  local_38 = &local_48;
  local_60 = 0;
  plVar20 = &local_60;
  local_58 = plVar20;
  local_50 = plVar20;
  lVar17 = **(long **)(*(long *)(param_1 + 0x20) + 0xf0);
  if (lVar17 != 0) {
    plVar18 = plVar20;
    do {
      cVar12 = FUN_1003b4f00();
      plVar19 = plVar18;
      if (cVar12 == '\0') {
        *(undefined4 *)(lVar17 + 0x30) = 1;
        plVar19 = (long *)(lVar17 + 0x18);
        *(long **)(lVar17 + 0x28) = &local_60;
        *(long **)(lVar17 + 0x20) = plVar18;
        local_58[2] = (long)plVar19;
        local_58 = plVar19;
        plVar20 = plVar19;
      }
      lVar17 = **(long **)(lVar17 + 8);
      plVar18 = plVar19;
    } while (lVar17 != 0);
  }
  while( true ) {
    iVar14 = 0;
    bVar3 = 0;
    lVar17 = 0;
    while (plVar20 != &local_60) {
      lVar2 = *plVar20;
      plVar20 = (long *)(lVar2 + 0x18);
      lVar16 = *(long *)(lVar2 + 0x28);
      *(undefined8 *)(lVar16 + 8) = *(undefined8 *)(lVar2 + 0x20);
      *(long *)(*(long *)(lVar2 + 0x20) + 0x10) = lVar16;
      *(long **)(lVar2 + 0x20) = plVar20;
      *(long **)(lVar2 + 0x28) = plVar20;
      lVar16 = *(long *)(lVar2 + 0x40);
      local_70 = 0;
      local_78 = (void *)0x0;
      local_80 = (void *)0x0;
      local_98._8_8_ = 0;
      local_98._0_8_ = *(ulong *)(lVar2 + 0x38);
      local_98 = local_98 << 0x40;
      lStack_a0 = lVar2;
      local_a8 = lVar16;
      local_b0 = *(undefined1 *)(lVar16 + 0x30);
      local_c0 = 0;
      local_b8 = &local_bf;
      local_bf = 0;
      local_88 = local_b0;
      iVar13 = FUN_1003c47c0(&local_a8,&local_c0);
      if (iVar13 == 2) {
        *(long **)(lVar2 + 0x20) = &local_48;
        *(long **)(lVar2 + 0x28) = local_38;
        local_38[1] = (long)plVar20;
        local_38 = plVar20;
      }
      else {
        iVar14 = iVar14 + 1;
        *(undefined4 *)(lVar2 + 0x30) = 0;
        if ((((iVar13 == 0) && ((char)local_bf != '\0')) && (local_bf._1_1_ != '\0')) &&
           ((local_c0 & local_c0 - 1) != 0)) {
          FUN_1003b4a30(param_1,lVar2,&local_bf,1);
        }
      }
      auVar11 = _DAT_100b2ddb0;
      uVar10 = _UNK_100b2ddac;
      uVar9 = _UNK_100b2dda8;
      uVar8 = _UNK_100b2dda4;
      uVar7 = _DAT_100b2dda0;
      iVar6 = _UNK_100b2dd9c;
      iVar5 = _UNK_100b2dd98;
      iVar4 = PTR___mh_execute_header_100b2dd90._4_4_;
      iVar13 = (int)PTR___mh_execute_header_100b2dd90;
      if (*(int *)(lVar2 + 0x30) != 0) {
        bVar1 = *(byte *)(lVar16 + 0x30);
        lVar16 = 0;
        if (DAT_1011ba010 == (undefined4 *)0x0) {
          do {
            iVar15 = (int)lVar16;
            uVar21 = iVar15 + iVar13;
            uVar23 = iVar15 + iVar4;
            uVar24 = iVar15 + iVar5;
            uVar25 = iVar15 + iVar6;
            auVar22._0_4_ =
                 (uVar21 >> 7 & uVar7) +
                 (uVar21 >> 6 & uVar7) +
                 (uVar21 >> 5 & uVar7) +
                 (uVar21 >> 4 & uVar7) +
                 (uVar21 >> 3 & uVar7) +
                 (uVar21 >> 2 & uVar7) + (uVar21 >> 1 & uVar7) + (uVar21 & uVar7);
            auVar22._4_4_ =
                 (uVar23 >> 7 & uVar8) +
                 (uVar23 >> 6 & uVar8) +
                 (uVar23 >> 5 & uVar8) +
                 (uVar23 >> 4 & uVar8) +
                 (uVar23 >> 3 & uVar8) +
                 (uVar23 >> 2 & uVar8) + (uVar23 >> 1 & uVar8) + (uVar23 & uVar8);
            auVar22._8_4_ =
                 (uVar24 >> 7 & uVar9) +
                 (uVar24 >> 6 & uVar9) +
                 (uVar24 >> 5 & uVar9) +
                 (uVar24 >> 4 & uVar9) +
                 (uVar24 >> 3 & uVar9) +
                 (uVar24 >> 2 & uVar9) + (uVar24 >> 1 & uVar9) + (uVar24 & uVar9);
            auVar22._12_4_ =
                 (uVar25 >> 7 & uVar10) +
                 (uVar25 >> 6 & uVar10) +
                 (uVar25 >> 5 & uVar10) +
                 (uVar25 >> 4 & uVar10) +
                 (uVar25 >> 3 & uVar10) +
                 (uVar25 >> 2 & uVar10) + (uVar25 >> 1 & uVar10) + (uVar25 & uVar10);
            auVar22 = pshufb(auVar22,auVar11);
            *(int *)((long)&DAT_1011b9f10 + lVar16) = auVar22._0_4_;
            lVar16 = lVar16 + 4;
          } while (lVar16 != 0x100);
          DAT_1011ba010 = &DAT_1011b9f10;
        }
        bVar1 = *(byte *)((long)DAT_1011ba010 + (ulong)bVar1);
        if (bVar1 < bVar3 || lVar17 == 0) {
          lVar17 = lVar2;
          bVar3 = bVar1;
        }
      }
      plVar20 = local_58;
      if (local_80 != (void *)0x0) {
        if (local_78 != local_80) {
          local_78 = (void *)((~((long)local_78 + (-4 - (long)local_80)) & 0xfffffffffffffffcU) +
                             (long)local_78);
        }
        operator_delete(local_80);
        plVar20 = local_58;
      }
    }
    if ((local_40 == &local_48) || ((iVar14 == 0 && (lVar17 == 0)))) break;
    if ((iVar14 == 0) && (lVar17 != 0)) {
      *(undefined4 *)(lVar17 + 0x30) = 0;
    }
    local_50 = local_38;
    local_38[1] = (long)&local_60;
    plVar20 = local_40;
    local_58 = local_40;
    local_40[2] = (long)&local_60;
    local_40 = &local_48;
    local_38 = &local_48;
  }
  return 0;
}

