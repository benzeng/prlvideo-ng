
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1003c28f0(long param_1,long param_2)

{
  short sVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  char *pcVar21;
  long lVar22;
  long lVar23;
  char *pcVar24;
  char cVar25;
  undefined *puVar26;
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 local_8b8 [8];
  char *local_8b0;
  undefined4 local_8a8;
  uint local_8a4;
  undefined4 local_818;
  undefined1 *local_810;
  undefined1 *local_800;
  undefined4 local_770;
  undefined1 *local_768;
  undefined1 *local_758;
  undefined4 local_6c8;
  undefined1 *local_6c0;
  undefined1 *local_6b0;
  undefined1 local_6a0;
  undefined1 local_698 [8];
  char *local_690;
  undefined4 local_688;
  uint local_684;
  undefined4 local_5f8;
  undefined1 *local_5f0;
  undefined1 *local_5e0;
  undefined4 local_550;
  undefined1 *local_548;
  undefined1 *local_538;
  undefined4 local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_490;
  undefined1 local_480;
  undefined1 local_478 [8];
  char *local_470;
  undefined4 local_468;
  uint local_464;
  undefined4 local_3d8;
  undefined1 *local_3d0;
  undefined1 *local_3c0;
  undefined4 local_330;
  undefined1 *local_328;
  undefined1 *local_318;
  undefined4 local_288;
  undefined1 *local_280;
  undefined1 *local_270;
  undefined1 local_260;
  undefined1 local_258 [16];
  undefined4 local_248;
  undefined4 local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  undefined4 local_110;
  undefined1 *local_108;
  undefined1 *local_f8;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar23 = *(long *)(param_2 + 0x40);
  sVar1 = *(short *)(param_2 + 0x4c);
  cVar25 = (sVar1 != 0x8a) + '\x01';
  FUN_1003b9a60(local_258,lVar23,cVar25);
  FUN_1003b9a60(local_478,lVar23 + 0xc0,cVar25);
  FUN_1003b9a60(local_698,lVar23 + 0x40,2);
  FUN_1003b9a60(local_8b8,lVar23 + 0x80,2);
  if (((((*(byte *)(lVar23 + 0xf9) & 1) == 0) &&
       ((*(byte *)(lVar23 + 0x30) & *(byte *)(lVar23 + 0xf0)) != 0)) &&
      (*(int *)(lVar23 + 0x28) == *(int *)(lVar23 + 0xe8))) &&
     ((*(int *)(lVar23 + 0x2c) == *(int *)(lVar23 + 0xec) &&
      (*(char *)(lVar23 + 0x38) == *(char *)(lVar23 + 0xf8))))) {
    lVar22 = *(long *)(lVar23 + 8);
    if ((lVar22 != 0) && (lVar2 = *(long *)(lVar23 + 200), lVar2 != 0)) {
      pcVar24 = (char *)(*(long *)(lVar22 + 0x80) + 0x48);
      if (*(long *)(lVar22 + 0x80) == 0) {
        pcVar24 = (char *)(lVar22 + 0x7c);
      }
      pcVar21 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar21 = (char *)(lVar2 + 0x7c);
      }
      if (*pcVar24 != *pcVar21) goto LAB_1003c2b19;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    *puVar19 = 0;
    local_3d8 = 0;
    FUN_1003ba4c0(local_478,local_464,0);
    if ((local_464 & 0xff) < 0xf) {
      pcVar24 = "i";
      switch(local_464 & 0xff) {
      case 1:
        pcVar24 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003c2aa1_caseD_3:
        pcVar24 = "?";
        break;
      case 4:
        pcVar24 = "b";
        break;
      case 8:
        pcVar24 = "";
      }
    }
    else {
      if ((local_464 & 0xff) != 0xf) goto switchD_1003c2aa1_caseD_3;
      pcVar24 = "a";
    }
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    FUN_10038e8e0(uVar3,"%s%s = %s;\n",pcVar24,"Tmp0",puVar19);
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    *puVar19 = 0;
    local_3d8 = 0;
    local_470 = "Tmp0";
  }
LAB_1003c2b19:
  if ((((*(byte *)(lVar23 + 0x79) & 1) == 0) &&
      ((*(byte *)(lVar23 + 0x30) & *(byte *)(lVar23 + 0x70)) != 0)) &&
     ((*(int *)(lVar23 + 0x28) == *(int *)(lVar23 + 0x68) &&
      ((*(int *)(lVar23 + 0x2c) == *(int *)(lVar23 + 0x6c) &&
       (*(char *)(lVar23 + 0x38) == *(char *)(lVar23 + 0x78))))))) {
    lVar22 = *(long *)(lVar23 + 8);
    if ((lVar22 != 0) && (lVar2 = *(long *)(lVar23 + 0x48), lVar2 != 0)) {
      pcVar24 = (char *)(*(long *)(lVar22 + 0x80) + 0x48);
      if (*(long *)(lVar22 + 0x80) == 0) {
        pcVar24 = (char *)(lVar22 + 0x7c);
      }
      pcVar21 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar21 = (char *)(lVar2 + 0x7c);
      }
      if (*pcVar24 != *pcVar21) goto LAB_1003c2c8e;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    *puVar19 = 0;
    local_5f8 = 0;
    FUN_1003ba4c0(local_698,local_684,0);
    if ((local_684 & 0xff) < 0xf) {
      pcVar24 = "i";
      switch(local_684 & 0xff) {
      case 1:
        pcVar24 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003c2c16_caseD_3:
        pcVar24 = "?";
        break;
      case 4:
        pcVar24 = "b";
        break;
      case 8:
        pcVar24 = "";
      }
    }
    else {
      if ((local_684 & 0xff) != 0xf) goto switchD_1003c2c16_caseD_3;
      pcVar24 = "a";
    }
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    FUN_10038e8e0(uVar3,"%s%s = %s;\n",pcVar24,"Tmp1",puVar19);
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    *puVar19 = 0;
    local_5f8 = 0;
    local_690 = "Tmp1";
  }
LAB_1003c2c8e:
  if (((((*(byte *)(lVar23 + 0xb9) & 1) != 0) ||
       ((*(byte *)(lVar23 + 0x30) & *(byte *)(lVar23 + 0xb0)) == 0)) ||
      (*(int *)(lVar23 + 0x28) != *(int *)(lVar23 + 0xa8))) ||
     ((*(int *)(lVar23 + 0x2c) != *(int *)(lVar23 + 0xac) ||
      (*(char *)(lVar23 + 0x38) != *(char *)(lVar23 + 0xb8))))) goto LAB_1003c2e15;
  lVar22 = *(long *)(lVar23 + 8);
  if ((lVar22 != 0) && (lVar2 = *(long *)(lVar23 + 0x88), lVar2 != 0)) {
    pcVar24 = (char *)(*(long *)(lVar22 + 0x80) + 0x48);
    if (*(long *)(lVar22 + 0x80) == 0) {
      pcVar24 = (char *)(lVar22 + 0x7c);
    }
    pcVar21 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
    if (*(long *)(lVar2 + 0x80) == 0) {
      pcVar21 = (char *)(lVar2 + 0x7c);
    }
    if (*pcVar24 != *pcVar21) goto LAB_1003c2e15;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar19 = local_810;
  if (local_810 == (undefined1 *)0x0) {
    puVar19 = local_800;
  }
  *puVar19 = 0;
  local_818 = 0;
  FUN_1003ba4c0(local_8b8,local_8a4,0);
  if ((local_8a4 & 0xff) < 0xf) {
    pcVar24 = "i";
    switch(local_8a4 & 0xff) {
    case 1:
      pcVar24 = "u";
      break;
    case 2:
      break;
    default:
switchD_1003c2d9d_caseD_3:
      pcVar24 = "?";
      break;
    case 4:
      pcVar24 = "b";
      break;
    case 8:
      pcVar24 = "";
    }
  }
  else {
    if ((local_8a4 & 0xff) != 0xf) goto switchD_1003c2d9d_caseD_3;
    pcVar24 = "a";
  }
  puVar19 = local_810;
  if (local_810 == (undefined1 *)0x0) {
    puVar19 = local_800;
  }
  FUN_10038e8e0(uVar3,"%s%s = %s;\n",pcVar24,"Tmp2",puVar19);
  puVar19 = local_810;
  if (local_810 == (undefined1 *)0x0) {
    puVar19 = local_800;
  }
  *puVar19 = 0;
  local_818 = 0;
  local_8b0 = "Tmp2";
LAB_1003c2e15:
  bVar7 = *(byte *)(lVar23 + 0x30);
  if ((bVar7 & 1) != 0) {
    puVar19 = local_1b0;
    if (local_1b0 == (undefined1 *)0x0) {
      puVar19 = local_1a0;
    }
    *puVar19 = 0;
    local_1b8 = 0;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    *puVar19 = 0;
    local_110 = 0;
    puVar19 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar19 = local_50;
    }
    *puVar19 = 0;
    local_68 = 0;
    local_248 = 1;
    local_40 = '\x01';
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    *puVar19 = 0;
    local_3d8 = 0;
    puVar19 = local_328;
    if (local_328 == (undefined1 *)0x0) {
      puVar19 = local_318;
    }
    *puVar19 = 0;
    local_330 = 0;
    puVar19 = local_280;
    if (local_280 == (undefined1 *)0x0) {
      puVar19 = local_270;
    }
    *puVar19 = 0;
    local_288 = 0;
    local_468 = 1;
    local_260 = 1;
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    *puVar19 = 0;
    local_5f8 = 0;
    puVar19 = local_548;
    if (local_548 == (undefined1 *)0x0) {
      puVar19 = local_538;
    }
    *puVar19 = 0;
    local_550 = 0;
    puVar19 = local_4a0;
    if (local_4a0 == (undefined1 *)0x0) {
      puVar19 = local_490;
    }
    *puVar19 = 0;
    local_4a8 = 0;
    local_688 = 1;
    local_480 = 1;
    puVar19 = local_810;
    if (local_810 == (undefined1 *)0x0) {
      puVar19 = local_800;
    }
    *puVar19 = 0;
    local_818 = 0;
    puVar19 = local_768;
    if (local_768 == (undefined1 *)0x0) {
      puVar19 = local_758;
    }
    *puVar19 = 0;
    local_770 = 0;
    puVar19 = local_6c0;
    if (local_6c0 == (undefined1 *)0x0) {
      puVar19 = local_6b0;
    }
    *puVar19 = 0;
    local_6c8 = 0;
    local_8a8 = 1;
    local_6a0 = 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    auVar6 = _DAT_100b2ddb0;
    auVar5 = _DAT_100b2dda0;
    auVar4 = _PTR___mh_execute_header_100b2dd90;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    lVar22 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar20 = (int)lVar22;
        auVar29._0_4_ = iVar20 + auVar4._0_4_;
        auVar29._4_4_ = iVar20 + auVar4._4_4_;
        auVar29._8_4_ = iVar20 + auVar4._8_4_;
        auVar29._12_4_ = iVar20 + auVar4._12_4_;
        auVar38 = auVar29 & auVar5;
        auVar51._0_4_ = auVar29._0_4_ >> 1;
        auVar51._4_4_ = auVar29._4_4_ >> 1;
        auVar51._8_4_ = auVar29._8_4_ >> 1;
        auVar51._12_4_ = auVar29._12_4_ >> 1;
        auVar51 = auVar51 & auVar5;
        auVar39._0_4_ = auVar29._0_4_ >> 2;
        auVar39._4_4_ = auVar29._4_4_ >> 2;
        auVar39._8_4_ = auVar29._8_4_ >> 2;
        auVar39._12_4_ = auVar29._12_4_ >> 2;
        auVar39 = auVar39 & auVar5;
        auVar52._0_4_ = auVar29._0_4_ >> 3;
        auVar52._4_4_ = auVar29._4_4_ >> 3;
        auVar52._8_4_ = auVar29._8_4_ >> 3;
        auVar52._12_4_ = auVar29._12_4_ >> 3;
        auVar52 = auVar52 & auVar5;
        auVar40._0_4_ = auVar29._0_4_ >> 4;
        auVar40._4_4_ = auVar29._4_4_ >> 4;
        auVar40._8_4_ = auVar29._8_4_ >> 4;
        auVar40._12_4_ = auVar29._12_4_ >> 4;
        auVar40 = auVar40 & auVar5;
        auVar53._0_4_ = auVar29._0_4_ >> 5;
        auVar53._4_4_ = auVar29._4_4_ >> 5;
        auVar53._8_4_ = auVar29._8_4_ >> 5;
        auVar53._12_4_ = auVar29._12_4_ >> 5;
        auVar53 = auVar53 & auVar5;
        auVar41._0_4_ = auVar29._0_4_ >> 6;
        auVar41._4_4_ = auVar29._4_4_ >> 6;
        auVar41._8_4_ = auVar29._8_4_ >> 6;
        auVar41._12_4_ = auVar29._12_4_ >> 6;
        auVar41 = auVar41 & auVar5;
        auVar27._0_4_ = auVar29._0_4_ >> 7;
        auVar27._4_4_ = auVar29._4_4_ >> 7;
        auVar27._8_4_ = auVar29._8_4_ >> 7;
        auVar27._12_4_ = auVar29._12_4_ >> 7;
        auVar27 = auVar27 & auVar5;
        auVar28._0_4_ =
             auVar27._0_4_ +
             auVar41._0_4_ +
             auVar53._0_4_ +
             auVar40._0_4_ + auVar52._0_4_ + auVar39._0_4_ + auVar51._0_4_ + auVar38._0_4_;
        auVar28._4_4_ =
             auVar27._4_4_ +
             auVar41._4_4_ +
             auVar53._4_4_ +
             auVar40._4_4_ + auVar52._4_4_ + auVar39._4_4_ + auVar51._4_4_ + auVar38._4_4_;
        auVar28._8_4_ =
             auVar27._8_4_ +
             auVar41._8_4_ +
             auVar53._8_4_ +
             auVar40._8_4_ + auVar52._8_4_ + auVar39._8_4_ + auVar51._8_4_ + auVar38._8_4_;
        auVar28._12_4_ =
             auVar27._12_4_ +
             auVar41._12_4_ +
             auVar53._12_4_ +
             auVar40._12_4_ + auVar52._12_4_ + auVar39._12_4_ + auVar51._12_4_ + auVar38._12_4_;
        auVar29 = pshufb(auVar28,auVar6);
        *(int *)((long)&DAT_1011b9f10 + lVar22) = auVar29._0_4_;
        lVar22 = lVar22 + 4;
      } while (lVar22 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    bVar7 = *(byte *)((long)DAT_1011ba010 + 1);
    puVar26 = &DAT_100bbda40;
    if (sVar1 == 0x8a) {
      puVar26 = &DAT_100bbda10;
    }
    uVar9 = FUN_1003ba9d0(local_698);
    uVar10 = FUN_1003ba9d0(local_698);
    uVar11 = FUN_1003ba9d0(local_8b8);
    uVar12 = FUN_1003ba9d0(local_478);
    uVar13 = FUN_1003ba9d0(local_698);
    uVar14 = FUN_1003ba9d0(local_8b8);
    uVar15 = FUN_1003ba9d0(local_698);
    uVar16 = FUN_1003ba9d0(local_478);
    uVar17 = FUN_1003ba9d0(local_8b8);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    puVar18 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar18 = local_50;
    }
    FUN_10038e8e0(uVar3,
                  "%s = %s%s(bool(%s)) * ((%s + %s < 32) ? ((%s << (32 - (%s + %s))) >> (32 - %s)) : (%s >> %s))%s;\n"
                  ,uVar8,puVar19,*(undefined8 *)(puVar26 + (ulong)bVar7 * 8),uVar9,uVar10,uVar11,
                  uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,puVar18);
    bVar7 = *(byte *)(lVar23 + 0x30);
  }
  if ((bVar7 & 2) != 0) {
    puVar19 = local_1b0;
    if (local_1b0 == (undefined1 *)0x0) {
      puVar19 = local_1a0;
    }
    *puVar19 = 0;
    local_1b8 = 0;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    *puVar19 = 0;
    local_110 = 0;
    puVar19 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar19 = local_50;
    }
    *puVar19 = 0;
    local_68 = 0;
    local_248 = 2;
    local_40 = '\x01';
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    *puVar19 = 0;
    local_3d8 = 0;
    puVar19 = local_328;
    if (local_328 == (undefined1 *)0x0) {
      puVar19 = local_318;
    }
    *puVar19 = 0;
    local_330 = 0;
    puVar19 = local_280;
    if (local_280 == (undefined1 *)0x0) {
      puVar19 = local_270;
    }
    *puVar19 = 0;
    local_288 = 0;
    local_468 = 2;
    local_260 = 1;
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    *puVar19 = 0;
    local_5f8 = 0;
    puVar19 = local_548;
    if (local_548 == (undefined1 *)0x0) {
      puVar19 = local_538;
    }
    *puVar19 = 0;
    local_550 = 0;
    puVar19 = local_4a0;
    if (local_4a0 == (undefined1 *)0x0) {
      puVar19 = local_490;
    }
    *puVar19 = 0;
    local_4a8 = 0;
    local_688 = 2;
    local_480 = 1;
    puVar19 = local_810;
    if (local_810 == (undefined1 *)0x0) {
      puVar19 = local_800;
    }
    *puVar19 = 0;
    local_818 = 0;
    puVar19 = local_768;
    if (local_768 == (undefined1 *)0x0) {
      puVar19 = local_758;
    }
    *puVar19 = 0;
    local_770 = 0;
    puVar19 = local_6c0;
    if (local_6c0 == (undefined1 *)0x0) {
      puVar19 = local_6b0;
    }
    *puVar19 = 0;
    local_6c8 = 0;
    local_8a8 = 2;
    local_6a0 = 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    auVar6 = _DAT_100b2ddb0;
    auVar5 = _DAT_100b2dda0;
    auVar4 = _PTR___mh_execute_header_100b2dd90;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    lVar22 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar20 = (int)lVar22;
        auVar38._0_4_ = iVar20 + auVar4._0_4_;
        auVar38._4_4_ = iVar20 + auVar4._4_4_;
        auVar38._8_4_ = iVar20 + auVar4._8_4_;
        auVar38._12_4_ = iVar20 + auVar4._12_4_;
        auVar29 = auVar38 & auVar5;
        auVar54._0_4_ = auVar38._0_4_ >> 1;
        auVar54._4_4_ = auVar38._4_4_ >> 1;
        auVar54._8_4_ = auVar38._8_4_ >> 1;
        auVar54._12_4_ = auVar38._12_4_ >> 1;
        auVar54 = auVar54 & auVar5;
        auVar42._0_4_ = auVar38._0_4_ >> 2;
        auVar42._4_4_ = auVar38._4_4_ >> 2;
        auVar42._8_4_ = auVar38._8_4_ >> 2;
        auVar42._12_4_ = auVar38._12_4_ >> 2;
        auVar42 = auVar42 & auVar5;
        auVar55._0_4_ = auVar38._0_4_ >> 3;
        auVar55._4_4_ = auVar38._4_4_ >> 3;
        auVar55._8_4_ = auVar38._8_4_ >> 3;
        auVar55._12_4_ = auVar38._12_4_ >> 3;
        auVar55 = auVar55 & auVar5;
        auVar43._0_4_ = auVar38._0_4_ >> 4;
        auVar43._4_4_ = auVar38._4_4_ >> 4;
        auVar43._8_4_ = auVar38._8_4_ >> 4;
        auVar43._12_4_ = auVar38._12_4_ >> 4;
        auVar43 = auVar43 & auVar5;
        auVar56._0_4_ = auVar38._0_4_ >> 5;
        auVar56._4_4_ = auVar38._4_4_ >> 5;
        auVar56._8_4_ = auVar38._8_4_ >> 5;
        auVar56._12_4_ = auVar38._12_4_ >> 5;
        auVar56 = auVar56 & auVar5;
        auVar44._0_4_ = auVar38._0_4_ >> 6;
        auVar44._4_4_ = auVar38._4_4_ >> 6;
        auVar44._8_4_ = auVar38._8_4_ >> 6;
        auVar44._12_4_ = auVar38._12_4_ >> 6;
        auVar44 = auVar44 & auVar5;
        auVar30._0_4_ = auVar38._0_4_ >> 7;
        auVar30._4_4_ = auVar38._4_4_ >> 7;
        auVar30._8_4_ = auVar38._8_4_ >> 7;
        auVar30._12_4_ = auVar38._12_4_ >> 7;
        auVar30 = auVar30 & auVar5;
        auVar31._0_4_ =
             auVar30._0_4_ +
             auVar44._0_4_ +
             auVar56._0_4_ +
             auVar43._0_4_ + auVar55._0_4_ + auVar42._0_4_ + auVar54._0_4_ + auVar29._0_4_;
        auVar31._4_4_ =
             auVar30._4_4_ +
             auVar44._4_4_ +
             auVar56._4_4_ +
             auVar43._4_4_ + auVar55._4_4_ + auVar42._4_4_ + auVar54._4_4_ + auVar29._4_4_;
        auVar31._8_4_ =
             auVar30._8_4_ +
             auVar44._8_4_ +
             auVar56._8_4_ +
             auVar43._8_4_ + auVar55._8_4_ + auVar42._8_4_ + auVar54._8_4_ + auVar29._8_4_;
        auVar31._12_4_ =
             auVar30._12_4_ +
             auVar44._12_4_ +
             auVar56._12_4_ +
             auVar43._12_4_ + auVar55._12_4_ + auVar42._12_4_ + auVar54._12_4_ + auVar29._12_4_;
        auVar29 = pshufb(auVar31,auVar6);
        *(int *)((long)&DAT_1011b9f10 + lVar22) = auVar29._0_4_;
        lVar22 = lVar22 + 4;
      } while (lVar22 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    bVar7 = *(byte *)((long)DAT_1011ba010 + 1);
    puVar26 = &DAT_100bbda40;
    if (sVar1 == 0x8a) {
      puVar26 = &DAT_100bbda10;
    }
    uVar9 = FUN_1003ba9d0(local_698);
    uVar10 = FUN_1003ba9d0(local_698);
    uVar11 = FUN_1003ba9d0(local_8b8);
    uVar12 = FUN_1003ba9d0(local_478);
    uVar13 = FUN_1003ba9d0(local_698);
    uVar14 = FUN_1003ba9d0(local_8b8);
    uVar15 = FUN_1003ba9d0(local_698);
    uVar16 = FUN_1003ba9d0(local_478);
    uVar17 = FUN_1003ba9d0(local_8b8);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    puVar18 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar18 = local_50;
    }
    FUN_10038e8e0(uVar3,
                  "%s = %s%s(bool(%s)) * ((%s + %s < 32) ? ((%s << (32 - (%s + %s))) >> (32 - %s)) : (%s >> %s))%s;\n"
                  ,uVar8,puVar19,*(undefined8 *)(puVar26 + (ulong)bVar7 * 8),uVar9,uVar10,uVar11,
                  uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,puVar18);
    bVar7 = *(byte *)(lVar23 + 0x30);
  }
  if ((bVar7 & 4) != 0) {
    puVar19 = local_1b0;
    if (local_1b0 == (undefined1 *)0x0) {
      puVar19 = local_1a0;
    }
    *puVar19 = 0;
    local_1b8 = 0;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    *puVar19 = 0;
    local_110 = 0;
    puVar19 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar19 = local_50;
    }
    *puVar19 = 0;
    local_68 = 0;
    local_248 = 4;
    local_40 = '\x01';
    puVar19 = local_3d0;
    if (local_3d0 == (undefined1 *)0x0) {
      puVar19 = local_3c0;
    }
    *puVar19 = 0;
    local_3d8 = 0;
    puVar19 = local_328;
    if (local_328 == (undefined1 *)0x0) {
      puVar19 = local_318;
    }
    *puVar19 = 0;
    local_330 = 0;
    puVar19 = local_280;
    if (local_280 == (undefined1 *)0x0) {
      puVar19 = local_270;
    }
    *puVar19 = 0;
    local_288 = 0;
    local_468 = 4;
    local_260 = 1;
    puVar19 = local_5f0;
    if (local_5f0 == (undefined1 *)0x0) {
      puVar19 = local_5e0;
    }
    *puVar19 = 0;
    local_5f8 = 0;
    puVar19 = local_548;
    if (local_548 == (undefined1 *)0x0) {
      puVar19 = local_538;
    }
    *puVar19 = 0;
    local_550 = 0;
    puVar19 = local_4a0;
    if (local_4a0 == (undefined1 *)0x0) {
      puVar19 = local_490;
    }
    *puVar19 = 0;
    local_4a8 = 0;
    local_688 = 4;
    local_480 = 1;
    puVar19 = local_810;
    if (local_810 == (undefined1 *)0x0) {
      puVar19 = local_800;
    }
    *puVar19 = 0;
    local_818 = 0;
    puVar19 = local_768;
    if (local_768 == (undefined1 *)0x0) {
      puVar19 = local_758;
    }
    *puVar19 = 0;
    local_770 = 0;
    puVar19 = local_6c0;
    if (local_6c0 == (undefined1 *)0x0) {
      puVar19 = local_6b0;
    }
    *puVar19 = 0;
    local_6c8 = 0;
    local_8a8 = 4;
    local_6a0 = 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    auVar6 = _DAT_100b2ddb0;
    auVar5 = _DAT_100b2dda0;
    auVar4 = _PTR___mh_execute_header_100b2dd90;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    lVar22 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar20 = (int)lVar22;
        auVar32._0_4_ = iVar20 + auVar4._0_4_;
        auVar32._4_4_ = iVar20 + auVar4._4_4_;
        auVar32._8_4_ = iVar20 + auVar4._8_4_;
        auVar32._12_4_ = iVar20 + auVar4._12_4_;
        auVar29 = auVar32 & auVar5;
        auVar57._0_4_ = auVar32._0_4_ >> 1;
        auVar57._4_4_ = auVar32._4_4_ >> 1;
        auVar57._8_4_ = auVar32._8_4_ >> 1;
        auVar57._12_4_ = auVar32._12_4_ >> 1;
        auVar57 = auVar57 & auVar5;
        auVar45._0_4_ = auVar32._0_4_ >> 2;
        auVar45._4_4_ = auVar32._4_4_ >> 2;
        auVar45._8_4_ = auVar32._8_4_ >> 2;
        auVar45._12_4_ = auVar32._12_4_ >> 2;
        auVar45 = auVar45 & auVar5;
        auVar58._0_4_ = auVar32._0_4_ >> 3;
        auVar58._4_4_ = auVar32._4_4_ >> 3;
        auVar58._8_4_ = auVar32._8_4_ >> 3;
        auVar58._12_4_ = auVar32._12_4_ >> 3;
        auVar58 = auVar58 & auVar5;
        auVar46._0_4_ = auVar32._0_4_ >> 4;
        auVar46._4_4_ = auVar32._4_4_ >> 4;
        auVar46._8_4_ = auVar32._8_4_ >> 4;
        auVar46._12_4_ = auVar32._12_4_ >> 4;
        auVar46 = auVar46 & auVar5;
        auVar59._0_4_ = auVar32._0_4_ >> 5;
        auVar59._4_4_ = auVar32._4_4_ >> 5;
        auVar59._8_4_ = auVar32._8_4_ >> 5;
        auVar59._12_4_ = auVar32._12_4_ >> 5;
        auVar59 = auVar59 & auVar5;
        auVar47._0_4_ = auVar32._0_4_ >> 6;
        auVar47._4_4_ = auVar32._4_4_ >> 6;
        auVar47._8_4_ = auVar32._8_4_ >> 6;
        auVar47._12_4_ = auVar32._12_4_ >> 6;
        auVar47 = auVar47 & auVar5;
        auVar33._0_4_ = auVar32._0_4_ >> 7;
        auVar33._4_4_ = auVar32._4_4_ >> 7;
        auVar33._8_4_ = auVar32._8_4_ >> 7;
        auVar33._12_4_ = auVar32._12_4_ >> 7;
        auVar33 = auVar33 & auVar5;
        auVar34._0_4_ =
             auVar33._0_4_ +
             auVar47._0_4_ +
             auVar59._0_4_ +
             auVar46._0_4_ + auVar58._0_4_ + auVar45._0_4_ + auVar57._0_4_ + auVar29._0_4_;
        auVar34._4_4_ =
             auVar33._4_4_ +
             auVar47._4_4_ +
             auVar59._4_4_ +
             auVar46._4_4_ + auVar58._4_4_ + auVar45._4_4_ + auVar57._4_4_ + auVar29._4_4_;
        auVar34._8_4_ =
             auVar33._8_4_ +
             auVar47._8_4_ +
             auVar59._8_4_ +
             auVar46._8_4_ + auVar58._8_4_ + auVar45._8_4_ + auVar57._8_4_ + auVar29._8_4_;
        auVar34._12_4_ =
             auVar33._12_4_ +
             auVar47._12_4_ +
             auVar59._12_4_ +
             auVar46._12_4_ + auVar58._12_4_ + auVar45._12_4_ + auVar57._12_4_ + auVar29._12_4_;
        auVar29 = pshufb(auVar34,auVar6);
        *(int *)((long)&DAT_1011b9f10 + lVar22) = auVar29._0_4_;
        lVar22 = lVar22 + 4;
      } while (lVar22 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    bVar7 = *(byte *)((long)DAT_1011ba010 + 1);
    puVar26 = &DAT_100bbda40;
    if (sVar1 == 0x8a) {
      puVar26 = &DAT_100bbda10;
    }
    uVar9 = FUN_1003ba9d0(local_698);
    uVar10 = FUN_1003ba9d0(local_698);
    uVar11 = FUN_1003ba9d0(local_8b8);
    uVar12 = FUN_1003ba9d0(local_478);
    uVar13 = FUN_1003ba9d0(local_698);
    uVar14 = FUN_1003ba9d0(local_8b8);
    uVar15 = FUN_1003ba9d0(local_698);
    uVar16 = FUN_1003ba9d0(local_478);
    uVar17 = FUN_1003ba9d0(local_8b8);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    puVar18 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar18 = local_50;
    }
    FUN_10038e8e0(uVar3,
                  "%s = %s%s(bool(%s)) * ((%s + %s < 32) ? ((%s << (32 - (%s + %s))) >> (32 - %s)) : (%s >> %s))%s;\n"
                  ,uVar8,puVar19,*(undefined8 *)(puVar26 + (ulong)bVar7 * 8),uVar9,uVar10,uVar11,
                  uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,puVar18);
    bVar7 = *(byte *)(lVar23 + 0x30);
  }
  if ((bVar7 & 8) != 0) {
    if (local_1b0 == (undefined1 *)0x0) {
      local_1b0 = local_1a0;
    }
    *local_1b0 = 0;
    local_1b8 = 0;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    *puVar19 = 0;
    local_110 = 0;
    puVar19 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar19 = local_50;
    }
    *puVar19 = 0;
    local_68 = 0;
    local_248 = 8;
    local_40 = '\x01';
    if (local_3d0 == (undefined1 *)0x0) {
      local_3d0 = local_3c0;
    }
    *local_3d0 = 0;
    local_3d8 = 0;
    if (local_328 == (undefined1 *)0x0) {
      local_328 = local_318;
    }
    *local_328 = 0;
    local_330 = 0;
    if (local_280 == (undefined1 *)0x0) {
      local_280 = local_270;
    }
    *local_280 = 0;
    local_288 = 0;
    local_468 = 8;
    local_260 = 1;
    if (local_5f0 == (undefined1 *)0x0) {
      local_5f0 = local_5e0;
    }
    *local_5f0 = 0;
    local_5f8 = 0;
    if (local_548 == (undefined1 *)0x0) {
      local_548 = local_538;
    }
    *local_548 = 0;
    local_550 = 0;
    if (local_4a0 == (undefined1 *)0x0) {
      local_4a0 = local_490;
    }
    *local_4a0 = 0;
    local_4a8 = 0;
    local_688 = 8;
    local_480 = 1;
    if (local_810 == (undefined1 *)0x0) {
      local_810 = local_800;
    }
    *local_810 = 0;
    local_818 = 0;
    if (local_768 == (undefined1 *)0x0) {
      local_768 = local_758;
    }
    *local_768 = 0;
    local_770 = 0;
    if (local_6c0 == (undefined1 *)0x0) {
      local_6c0 = local_6b0;
    }
    *local_6c0 = 0;
    local_6c8 = 0;
    local_8a8 = 8;
    local_6a0 = 1;
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar8 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    auVar6 = _DAT_100b2ddb0;
    auVar5 = _DAT_100b2dda0;
    auVar4 = _PTR___mh_execute_header_100b2dd90;
    puVar19 = local_108;
    if (local_108 == (undefined1 *)0x0) {
      puVar19 = local_f8;
    }
    lVar23 = 0;
    if (DAT_1011ba010 == (undefined4 *)0x0) {
      do {
        iVar20 = (int)lVar23;
        auVar35._0_4_ = iVar20 + auVar4._0_4_;
        auVar35._4_4_ = iVar20 + auVar4._4_4_;
        auVar35._8_4_ = iVar20 + auVar4._8_4_;
        auVar35._12_4_ = iVar20 + auVar4._12_4_;
        auVar29 = auVar35 & auVar5;
        auVar60._0_4_ = auVar35._0_4_ >> 1;
        auVar60._4_4_ = auVar35._4_4_ >> 1;
        auVar60._8_4_ = auVar35._8_4_ >> 1;
        auVar60._12_4_ = auVar35._12_4_ >> 1;
        auVar60 = auVar60 & auVar5;
        auVar48._0_4_ = auVar35._0_4_ >> 2;
        auVar48._4_4_ = auVar35._4_4_ >> 2;
        auVar48._8_4_ = auVar35._8_4_ >> 2;
        auVar48._12_4_ = auVar35._12_4_ >> 2;
        auVar48 = auVar48 & auVar5;
        auVar61._0_4_ = auVar35._0_4_ >> 3;
        auVar61._4_4_ = auVar35._4_4_ >> 3;
        auVar61._8_4_ = auVar35._8_4_ >> 3;
        auVar61._12_4_ = auVar35._12_4_ >> 3;
        auVar61 = auVar61 & auVar5;
        auVar49._0_4_ = auVar35._0_4_ >> 4;
        auVar49._4_4_ = auVar35._4_4_ >> 4;
        auVar49._8_4_ = auVar35._8_4_ >> 4;
        auVar49._12_4_ = auVar35._12_4_ >> 4;
        auVar49 = auVar49 & auVar5;
        auVar62._0_4_ = auVar35._0_4_ >> 5;
        auVar62._4_4_ = auVar35._4_4_ >> 5;
        auVar62._8_4_ = auVar35._8_4_ >> 5;
        auVar62._12_4_ = auVar35._12_4_ >> 5;
        auVar62 = auVar62 & auVar5;
        auVar50._0_4_ = auVar35._0_4_ >> 6;
        auVar50._4_4_ = auVar35._4_4_ >> 6;
        auVar50._8_4_ = auVar35._8_4_ >> 6;
        auVar50._12_4_ = auVar35._12_4_ >> 6;
        auVar50 = auVar50 & auVar5;
        auVar36._0_4_ = auVar35._0_4_ >> 7;
        auVar36._4_4_ = auVar35._4_4_ >> 7;
        auVar36._8_4_ = auVar35._8_4_ >> 7;
        auVar36._12_4_ = auVar35._12_4_ >> 7;
        auVar36 = auVar36 & auVar5;
        auVar37._0_4_ =
             auVar36._0_4_ +
             auVar50._0_4_ +
             auVar62._0_4_ +
             auVar49._0_4_ + auVar61._0_4_ + auVar48._0_4_ + auVar60._0_4_ + auVar29._0_4_;
        auVar37._4_4_ =
             auVar36._4_4_ +
             auVar50._4_4_ +
             auVar62._4_4_ +
             auVar49._4_4_ + auVar61._4_4_ + auVar48._4_4_ + auVar60._4_4_ + auVar29._4_4_;
        auVar37._8_4_ =
             auVar36._8_4_ +
             auVar50._8_4_ +
             auVar62._8_4_ +
             auVar49._8_4_ + auVar61._8_4_ + auVar48._8_4_ + auVar60._8_4_ + auVar29._8_4_;
        auVar37._12_4_ =
             auVar36._12_4_ +
             auVar50._12_4_ +
             auVar62._12_4_ +
             auVar49._12_4_ + auVar61._12_4_ + auVar48._12_4_ + auVar60._12_4_ + auVar29._12_4_;
        auVar29 = pshufb(auVar37,auVar6);
        *(int *)((long)&DAT_1011b9f10 + lVar23) = auVar29._0_4_;
        lVar23 = lVar23 + 4;
      } while (lVar23 != 0x100);
      DAT_1011ba010 = &DAT_1011b9f10;
    }
    bVar7 = *(byte *)((long)DAT_1011ba010 + 1);
    puVar26 = &DAT_100bbda40;
    if (sVar1 == 0x8a) {
      puVar26 = &DAT_100bbda10;
    }
    uVar9 = FUN_1003ba9d0(local_698);
    uVar10 = FUN_1003ba9d0(local_698);
    uVar11 = FUN_1003ba9d0(local_8b8);
    uVar12 = FUN_1003ba9d0(local_478);
    uVar13 = FUN_1003ba9d0(local_698);
    uVar14 = FUN_1003ba9d0(local_8b8);
    uVar15 = FUN_1003ba9d0(local_698);
    uVar16 = FUN_1003ba9d0(local_478);
    uVar17 = FUN_1003ba9d0(local_8b8);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    if (local_60 == (undefined1 *)0x0) {
      local_60 = local_50;
    }
    FUN_10038e8e0(uVar3,
                  "%s = %s%s(bool(%s)) * ((%s + %s < 32) ? ((%s << (32 - (%s + %s))) >> (32 - %s)) : (%s >> %s))%s;\n"
                  ,uVar8,puVar19,*(undefined8 *)(puVar26 + (ulong)bVar7 * 8),uVar9,uVar10,uVar11,
                  uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,local_60);
  }
  FUN_1003b9b40(local_8b8);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

