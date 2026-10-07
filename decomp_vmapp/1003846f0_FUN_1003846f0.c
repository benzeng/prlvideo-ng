
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003846f0(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte bVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  
  iVar16 = FUN_10032df20(param_2);
  iVar17 = *(int *)(param_2 + 0xc);
  iVar25 = *(int *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x24) - 8U < 3) {
    iVar24 = 1;
  }
  else {
    iVar24 = *(int *)(param_2 + 0x14);
    if (*(int *)(param_2 + 0x24) == 7) {
      iVar25 = 1;
    }
  }
  lVar26 = 0;
  if ((param_3 & 0xffffffff) < (ulong)(*(long *)(param_2 + 0x48) - *(long *)(param_2 + 0x40) >> 3))
  {
    lVar26 = *(long *)(*(long *)(param_2 + 0x40) + (param_3 & 0xffffffff) * 8);
  }
  uVar1 = *(uint *)(lVar26 + 0x10);
  uVar27 = *(uint *)(lVar26 + 0x20);
  plVar2 = *(long **)(param_1 + 0x18);
  if (0xffffff < *(uint *)(&DAT_100b3e3b4 + (ulong)uVar27 * 8)) {
    uVar20 = (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar27 * 8) >> 0x18) * iVar17;
    if (3 < uVar27 - 0x73) {
      uVar20 = uVar20 + 3 & 0xfffffffc;
    }
    uVar20 = uVar20 * iVar25;
    goto switchD_100384814_caseD_11;
  }
  uVar20 = 0;
  uVar23 = 0;
  switch(uVar27 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    uVar23 = iVar17 * 2 + 3U & 0xfffffffc;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
    uVar23 = iVar17 + 3U & 0xfffffffc;
    break;
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    uVar23 = iVar17 << 2;
    break;
  case 10:
    uVar23 = iVar17 << 3;
    goto switchD_100384814_caseD_0;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    uVar23 = iVar17 * 2 + 6U & 0xfffffff8;
    break;
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x1a:
  case 0x1b:
  case 0x35:
  case 0x36:
  case 0x38:
    uVar23 = iVar17 * 4 + 0xcU & 0xfffffff0;
  }
  switch(uVar27 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
switchD_100384814_caseD_0:
    uVar20 = uVar23 * iVar25;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar20 = iVar25 * uVar23 * 3 >> 1;
    break;
  case 7:
    uVar20 = iVar25 * uVar23 * 2;
    break;
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
    uVar20 = uVar23 * (iVar25 + 3U & 0xfffffffc) >> 2;
  }
switchD_100384814_caseD_11:
  uVar20 = uVar20 * iVar24;
  if (*(uint *)(plVar2 + 3) < uVar20) {
    lVar21 = *plVar2;
    if ((ulong)(plVar2[1] - lVar21) < (ulong)uVar20) {
      FUN_10005a320(plVar2);
      lVar21 = *plVar2;
    }
    ___bzero(lVar21,(ulong)uVar20);
    *(uint *)(plVar2 + 3) = uVar20;
  }
  if (uVar1 != 0) {
    uVar27 = 0;
    do {
      iVar17 = *(int *)(param_2 + 0x24);
      if (iVar17 == 7) {
        FUN_10032df20();
        iVar17 = *(int *)(param_2 + 0x24);
      }
      if (iVar17 - 8U < 3) {
        FUN_10032df20();
      }
      if (iVar16 != 0) {
        lVar21 = 0;
        do {
          iVar17 = (int)lVar21;
          if ((*(uint *)(*(long *)(lVar26 + 0x88) + lVar21 * 4) & 1 << ((byte)uVar27 & 0x1f)) == 0)
          {
            FUN_100383ac0();
          }
          lVar21 = lVar21 + 1;
        } while (iVar17 != iVar16 + -1);
      }
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar1);
  }
  auVar14 = _DAT_100b3e250;
  auVar13 = _DAT_100b3e240;
  iVar12 = _UNK_100b2ea3c;
  iVar11 = _UNK_100b2ea38;
  iVar10 = _UNK_100b2ea34;
  iVar9 = _DAT_100b2ea30;
  iVar8 = _UNK_100b2ea2c;
  iVar7 = _UNK_100b2ea28;
  iVar6 = _UNK_100b2ea24;
  iVar5 = _DAT_100b2ea20;
  uVar27 = _UNK_100b2dda8;
  iVar4 = _DAT_100b2dda0;
  iVar3 = _UNK_100b2dd9c;
  iVar24 = _UNK_100b2dd98;
  iVar25 = PTR___mh_execute_header_100b2dd90._4_4_;
  iVar17 = (int)PTR___mh_execute_header_100b2dd90;
  if (iVar16 != 0) {
    uVar20 = (uVar1 & 0xfffffff8) - 8;
    lVar21 = 0;
    do {
      if (uVar1 != 0) {
        uVar23 = *(uint *)(*(long *)(lVar26 + 0x88) + lVar21 * 4);
        uVar18 = 0;
        if (uVar1 == 0) {
LAB_100384c00:
          uVar19 = (uVar1 - 1) - uVar18;
          if ((uVar1 & 7) != 0) {
            iVar22 = -(uVar1 & 7);
            do {
              uVar23 = uVar23 | 1 << ((byte)uVar18 & 0x1f);
              uVar18 = uVar18 + 1;
              iVar22 = iVar22 + 1;
            } while (iVar22 != 0);
          }
          if (6 < uVar19) {
            do {
              bVar15 = (byte)uVar18;
              uVar23 = 1 << (bVar15 + 7 & 0x1f) |
                       1 << (bVar15 + 6 & 0x1f) |
                       1 << (bVar15 + 5 & 0x1f) |
                       1 << (bVar15 + 4 & 0x1f) |
                       1 << (bVar15 + 3 & 0x1f) |
                       1 << (bVar15 + 2 & 0x1f) |
                       1 << (bVar15 + 1 & 0x1f) | 1 << (bVar15 & 0x1f) | uVar23;
              uVar18 = uVar18 + 8;
            } while (uVar18 != uVar1);
          }
        }
        else {
          uVar18 = uVar1 & 0xfffffff8;
          auVar35 = ZEXT416(uVar23);
          if (uVar18 == 0) {
            uVar18 = 0;
            auVar28 = ZEXT816(0);
          }
          else {
            if (((uVar20 >> 3) + 1 & 1) == 0) {
              auVar41 = ZEXT816(0);
              uVar23 = 0;
            }
            else {
              auVar35 = auVar35 | auVar14;
              uVar23 = 8;
              auVar41 = auVar13;
            }
            auVar28 = auVar13;
            if (uVar20 != 0) {
              do {
                auVar30._0_4_ = (int)(float)((uVar23 + iVar17) * 0x800000 + iVar9);
                auVar30._4_4_ = (int)(float)((uVar23 + iVar25) * 0x800000 + iVar10);
                auVar30._8_4_ = (int)(float)((uVar23 + iVar24) * 0x800000 + iVar11);
                auVar30._12_4_ = (int)(float)((uVar23 + iVar3) * 0x800000 + iVar12);
                auVar32._4_4_ = auVar30._4_4_;
                auVar32._0_4_ = auVar30._4_4_;
                auVar32._8_4_ = auVar30._12_4_;
                auVar32._12_4_ = auVar30._12_4_;
                auVar31._0_4_ = auVar30._0_4_ * iVar4;
                auVar31._8_4_ = (undefined4)((auVar30._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar31._4_4_ = auVar30._4_4_ * iVar4;
                auVar31._12_4_ = (int)((auVar32._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar28._0_4_ = (int)(float)((uVar23 + iVar5) * 0x800000 + iVar9);
                auVar28._4_4_ = (int)(float)((uVar23 + iVar6) * 0x800000 + iVar10);
                auVar28._8_4_ = (int)(float)((uVar23 + iVar7) * 0x800000 + iVar11);
                auVar28._12_4_ = (int)(float)((uVar23 + iVar8) * 0x800000 + iVar12);
                auVar33._4_4_ = auVar28._4_4_;
                auVar33._0_4_ = auVar28._4_4_;
                auVar33._8_4_ = auVar28._12_4_;
                auVar33._12_4_ = auVar28._12_4_;
                auVar29._0_4_ = auVar28._0_4_ * iVar4;
                auVar29._8_4_ = (undefined4)((auVar28._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar29._4_4_ = auVar28._4_4_ * iVar4;
                auVar29._12_4_ = (int)((auVar33._8_8_ & 0xffffffff) * (ulong)uVar27);
                iVar22 = uVar23 + 8;
                auVar36._0_4_ = (int)(float)((iVar22 + iVar17) * 0x800000 + iVar9);
                auVar36._4_4_ = (int)(float)((iVar22 + iVar25) * 0x800000 + iVar10);
                auVar36._8_4_ = (int)(float)((iVar22 + iVar24) * 0x800000 + iVar11);
                auVar36._12_4_ = (int)(float)((iVar22 + iVar3) * 0x800000 + iVar12);
                auVar38._4_4_ = auVar36._4_4_;
                auVar38._0_4_ = auVar36._4_4_;
                auVar38._8_4_ = auVar36._12_4_;
                auVar38._12_4_ = auVar36._12_4_;
                auVar37._0_4_ = auVar36._0_4_ * iVar4;
                auVar37._8_4_ = (undefined4)((auVar36._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar37._4_4_ = auVar36._4_4_ * iVar4;
                auVar37._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar39._0_4_ = (int)(float)((iVar22 + iVar5) * 0x800000 + iVar9);
                auVar39._4_4_ = (int)(float)((iVar22 + iVar6) * 0x800000 + iVar10);
                auVar39._8_4_ = (int)(float)((iVar22 + iVar7) * 0x800000 + iVar11);
                auVar39._12_4_ = (int)(float)((iVar22 + iVar8) * 0x800000 + iVar12);
                auVar34._4_4_ = auVar39._4_4_;
                auVar34._0_4_ = auVar39._4_4_;
                auVar34._8_4_ = auVar39._12_4_;
                auVar34._12_4_ = auVar39._12_4_;
                auVar40._0_4_ = auVar39._0_4_ * iVar4;
                auVar40._8_4_ = (undefined4)((auVar39._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar40._4_4_ = auVar39._4_4_ * iVar4;
                auVar40._12_4_ = (int)((auVar34._8_8_ & 0xffffffff) * (ulong)uVar27);
                auVar35 = auVar37 | auVar31 | auVar35;
                auVar41 = auVar40 | auVar29 | auVar41;
                uVar23 = uVar23 + 0x10;
                auVar28 = auVar41;
              } while (uVar23 != uVar18);
            }
          }
          auVar35 = auVar35 | auVar28;
          auVar41._0_8_ = auVar35._8_8_;
          auVar41._8_4_ = auVar35._0_4_;
          auVar41._12_4_ = auVar35._4_4_;
          uVar23 = SUB164(auVar41 | auVar35,4) | SUB164(auVar41 | auVar35,0);
          if (uVar1 != uVar18) goto LAB_100384c00;
        }
        *(uint *)(*(long *)(lVar26 + 0x88) + lVar21 * 4) = uVar23;
      }
      iVar22 = (int)lVar21;
      lVar21 = lVar21 + 1;
    } while (iVar22 != iVar16 + -1);
  }
  return;
}

