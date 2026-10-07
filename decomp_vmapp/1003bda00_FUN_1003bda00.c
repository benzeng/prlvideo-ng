
undefined8 FUN_1003bda00(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  undefined1 local_1138 [8];
  char *local_1130;
  int local_1128;
  uint local_1124;
  undefined4 local_1098;
  undefined1 *local_1090;
  undefined1 *local_1080;
  undefined4 local_ff0;
  undefined1 *local_fe8;
  undefined1 *local_fd8;
  undefined4 local_f48;
  undefined1 *local_f40;
  undefined1 *local_f30;
  undefined1 local_f20;
  undefined1 local_f18 [8];
  char *local_f10;
  int local_f08;
  uint local_f04;
  undefined4 local_e78;
  undefined1 *local_e70;
  undefined1 *local_e60;
  undefined4 local_dd0;
  undefined1 *local_dc8;
  undefined1 *local_db8;
  undefined4 local_d28;
  undefined1 *local_d20;
  undefined1 *local_d10;
  undefined1 local_d00;
  undefined1 local_cf8 [8];
  char *local_cf0;
  int local_ce8;
  uint local_ce4;
  undefined4 local_c58;
  undefined1 *local_c50;
  undefined1 *local_c40;
  undefined4 local_bb0;
  undefined1 *local_ba8;
  undefined1 *local_b98;
  undefined4 local_b08;
  undefined1 *local_b00;
  undefined1 *local_af0;
  undefined1 local_ae0;
  undefined1 local_ad8 [16];
  int local_ac8;
  undefined4 local_a38;
  undefined1 *local_a30;
  undefined1 *local_a20;
  undefined4 local_990;
  undefined1 *local_988;
  undefined1 *local_978;
  undefined4 local_8e8;
  undefined1 *local_8e0;
  undefined1 *local_8d0;
  char local_8c0;
  undefined1 local_8b8 [544];
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar14 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(*(long *)(lVar14 + 8) + 0x80);
  puVar6 = (undefined1 *)(*(long *)(lVar14 + 8) + 0x7c);
  if (lVar2 != 0) {
    puVar6 = (undefined1 *)(lVar2 + 0x48);
  }
  uVar1 = *puVar6;
  if (((*(byte *)(lVar14 + 0x79) & 1) == 0) &&
     ((*(byte *)(lVar14 + 0x70) & *(byte *)(lVar14 + 0x70) - 1) == 0)) {
    FUN_1003b9a60(local_258,lVar14,uVar1,*(undefined1 *)(lVar14 + 0x30));
    FUN_1003b9a60(local_478,lVar14 + 0x40,4,*(undefined1 *)(lVar14 + 0x70));
    FUN_1003b9a60(local_698,lVar14 + 0x80,uVar1,*(undefined1 *)(lVar14 + 0x30));
    FUN_1003b9a60(local_8b8,lVar14 + 0xc0,uVar1,*(undefined1 *)(lVar14 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    lVar14 = local_108;
    if (local_108 == 0) {
      lVar14 = local_f8;
    }
    uVar8 = FUN_1003ba9d0(local_478);
    uVar9 = FUN_1003ba9d0(local_698);
    uVar10 = FUN_1003ba9d0(local_8b8);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    if (local_60 == 0) {
      local_60 = local_50;
    }
    FUN_10038e8e0(uVar4,"%s = %s%s ? %s : %s%s;\n",uVar7,lVar14,uVar8,uVar9,uVar10,local_60);
    FUN_1003b9b40(local_8b8);
    FUN_1003b9b40(local_698);
    FUN_1003b9b40(local_478);
    puVar6 = local_258;
    goto LAB_1003be36d;
  }
  FUN_1003b9a60(local_ad8,lVar14,uVar1,0);
  FUN_1003b9a60(local_cf8,lVar14 + 0x40,4,0);
  FUN_1003b9a60(local_f18,lVar14 + 0x80,uVar1,0);
  FUN_1003b9a60(local_1138,lVar14 + 0xc0,uVar1,0);
  if (((((*(byte *)(lVar14 + 0x79) & 1) == 0) &&
       ((*(byte *)(lVar14 + 0x30) & *(byte *)(lVar14 + 0x70)) != 0)) &&
      (*(int *)(lVar14 + 0x28) == *(int *)(lVar14 + 0x68))) &&
     ((*(int *)(lVar14 + 0x2c) == *(int *)(lVar14 + 0x6c) &&
      (*(char *)(lVar14 + 0x38) == *(char *)(lVar14 + 0x78))))) {
    lVar2 = *(long *)(lVar14 + 8);
    if ((lVar2 != 0) && (lVar3 = *(long *)(lVar14 + 0x48), lVar3 != 0)) {
      pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar13 = (char *)(lVar2 + 0x7c);
      }
      pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar12 = (char *)(lVar3 + 0x7c);
      }
      if (*pcVar13 != *pcVar12) goto LAB_1003bdd8d;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar6 = local_c50;
    if (local_c50 == (undefined1 *)0x0) {
      puVar6 = local_c40;
    }
    *puVar6 = 0;
    local_c58 = 0;
    FUN_1003ba4c0(local_cf8,local_ce4,0);
    if ((local_ce4 & 0xff) < 0xf) {
      pcVar13 = "i";
      switch(local_ce4 & 0xff) {
      case 1:
        pcVar13 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003bdbcb_caseD_3:
        pcVar13 = "?";
        break;
      case 4:
        pcVar13 = "b";
        break;
      case 8:
        pcVar13 = "";
      }
    }
    else {
      if ((local_ce4 & 0xff) != 0xf) goto switchD_1003bdbcb_caseD_3;
      pcVar13 = "a";
    }
    puVar6 = local_c50;
    if (local_c50 == (undefined1 *)0x0) {
      puVar6 = local_c40;
    }
    FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar13,"Tmp0",puVar6);
    puVar6 = local_c50;
    if (local_c50 == (undefined1 *)0x0) {
      puVar6 = local_c40;
    }
    *puVar6 = 0;
    local_c58 = 0;
    local_cf0 = "Tmp0";
  }
LAB_1003bdd8d:
  if ((((*(byte *)(lVar14 + 0xb9) & 1) == 0) &&
      ((*(byte *)(lVar14 + 0x30) & *(byte *)(lVar14 + 0xb0)) != 0)) &&
     ((*(int *)(lVar14 + 0x28) == *(int *)(lVar14 + 0xa8) &&
      ((*(int *)(lVar14 + 0x2c) == *(int *)(lVar14 + 0xac) &&
       (*(char *)(lVar14 + 0x38) == *(char *)(lVar14 + 0xb8))))))) {
    lVar2 = *(long *)(lVar14 + 8);
    if ((lVar2 != 0) && (lVar3 = *(long *)(lVar14 + 0x88), lVar3 != 0)) {
      pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar13 = (char *)(lVar2 + 0x7c);
      }
      pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar12 = (char *)(lVar3 + 0x7c);
      }
      if (*pcVar13 != *pcVar12) goto LAB_1003bdf0e;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar6 = local_e70;
    if (local_e70 == (undefined1 *)0x0) {
      puVar6 = local_e60;
    }
    *puVar6 = 0;
    local_e78 = 0;
    FUN_1003ba4c0(local_f18,local_f04,0);
    if ((local_f04 & 0xff) < 0xf) {
      pcVar13 = "i";
      switch(local_f04 & 0xff) {
      case 1:
        pcVar13 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003bde99_caseD_3:
        pcVar13 = "?";
        break;
      case 4:
        pcVar13 = "b";
        break;
      case 8:
        pcVar13 = "";
      }
    }
    else {
      if ((local_f04 & 0xff) != 0xf) goto switchD_1003bde99_caseD_3;
      pcVar13 = "a";
    }
    puVar6 = local_e70;
    if (local_e70 == (undefined1 *)0x0) {
      puVar6 = local_e60;
    }
    FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar13,"Tmp1",puVar6);
    puVar6 = local_e70;
    if (local_e70 == (undefined1 *)0x0) {
      puVar6 = local_e60;
    }
    *puVar6 = 0;
    local_e78 = 0;
    local_f10 = "Tmp1";
  }
LAB_1003bdf0e:
  if (((((*(byte *)(lVar14 + 0xf9) & 1) == 0) &&
       ((*(byte *)(lVar14 + 0x30) & *(byte *)(lVar14 + 0xf0)) != 0)) &&
      (*(int *)(lVar14 + 0x28) == *(int *)(lVar14 + 0xe8))) &&
     ((*(int *)(lVar14 + 0x2c) == *(int *)(lVar14 + 0xec) &&
      (*(char *)(lVar14 + 0x38) == *(char *)(lVar14 + 0xf8))))) {
    lVar2 = *(long *)(lVar14 + 8);
    if ((lVar2 != 0) && (lVar3 = *(long *)(lVar14 + 200), lVar3 != 0)) {
      pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
      if (*(long *)(lVar2 + 0x80) == 0) {
        pcVar13 = (char *)(lVar2 + 0x7c);
      }
      pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
      if (*(long *)(lVar3 + 0x80) == 0) {
        pcVar12 = (char *)(lVar3 + 0x7c);
      }
      if (*pcVar13 != *pcVar12) goto LAB_1003be08f;
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    puVar6 = local_1090;
    if (local_1090 == (undefined1 *)0x0) {
      puVar6 = local_1080;
    }
    *puVar6 = 0;
    local_1098 = 0;
    FUN_1003ba4c0(local_1138,local_1124,0);
    if ((local_1124 & 0xff) < 0xf) {
      pcVar13 = "i";
      switch(local_1124 & 0xff) {
      case 1:
        pcVar13 = "u";
        break;
      case 2:
        break;
      default:
switchD_1003be01a_caseD_3:
        pcVar13 = "?";
        break;
      case 4:
        pcVar13 = "b";
        break;
      case 8:
        pcVar13 = "";
      }
    }
    else {
      if ((local_1124 & 0xff) != 0xf) goto switchD_1003be01a_caseD_3;
      pcVar13 = "a";
    }
    puVar6 = local_1090;
    if (local_1090 == (undefined1 *)0x0) {
      puVar6 = local_1080;
    }
    FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar13,"Tmp2",puVar6);
    puVar6 = local_1090;
    if (local_1090 == (undefined1 *)0x0) {
      puVar6 = local_1080;
    }
    *puVar6 = 0;
    local_1098 = 0;
    local_1130 = "Tmp2";
  }
LAB_1003be08f:
  uVar15 = 0;
  do {
    iVar5 = 1 << ((byte)uVar15 & 0x1f);
    if ((*(byte *)(lVar14 + 0x30) >> (uVar15 & 0x1f) & 1) != 0) {
      puVar6 = local_a30;
      if (local_a30 == (undefined1 *)0x0) {
        puVar6 = local_a20;
      }
      *puVar6 = 0;
      local_a38 = 0;
      puVar6 = local_988;
      if (local_988 == (undefined1 *)0x0) {
        puVar6 = local_978;
      }
      *puVar6 = 0;
      local_990 = 0;
      puVar6 = local_8e0;
      if (local_8e0 == (undefined1 *)0x0) {
        puVar6 = local_8d0;
      }
      *puVar6 = 0;
      local_8e8 = 0;
      local_8c0 = '\x01';
      puVar6 = local_c50;
      if (local_c50 == (undefined1 *)0x0) {
        puVar6 = local_c40;
      }
      *puVar6 = 0;
      local_c58 = 0;
      puVar6 = local_ba8;
      if (local_ba8 == (undefined1 *)0x0) {
        puVar6 = local_b98;
      }
      *puVar6 = 0;
      local_bb0 = 0;
      puVar6 = local_b00;
      if (local_b00 == (undefined1 *)0x0) {
        puVar6 = local_af0;
      }
      *puVar6 = 0;
      local_b08 = 0;
      local_ae0 = 1;
      puVar6 = local_e70;
      if (local_e70 == (undefined1 *)0x0) {
        puVar6 = local_e60;
      }
      *puVar6 = 0;
      local_e78 = 0;
      puVar6 = local_dc8;
      if (local_dc8 == (undefined1 *)0x0) {
        puVar6 = local_db8;
      }
      *puVar6 = 0;
      local_dd0 = 0;
      puVar6 = local_d20;
      if (local_d20 == (undefined1 *)0x0) {
        puVar6 = local_d10;
      }
      *puVar6 = 0;
      local_d28 = 0;
      local_d00 = 1;
      puVar6 = local_1090;
      if (local_1090 == (undefined1 *)0x0) {
        puVar6 = local_1080;
      }
      *puVar6 = 0;
      local_1098 = 0;
      puVar6 = local_fe8;
      if (local_fe8 == (undefined1 *)0x0) {
        puVar6 = local_fd8;
      }
      *puVar6 = 0;
      local_ff0 = 0;
      puVar6 = local_f40;
      if (local_f40 == (undefined1 *)0x0) {
        puVar6 = local_f30;
      }
      *puVar6 = 0;
      local_f48 = 0;
      local_f20 = 1;
      uVar4 = *(undefined8 *)(param_1 + 8);
      local_1128 = iVar5;
      local_f08 = iVar5;
      local_ce8 = iVar5;
      local_ac8 = iVar5;
      uVar7 = FUN_1003ba9d0(local_ad8);
      if (local_8c0 != '\0') {
        FUN_1003ba140(local_ad8);
      }
      puVar6 = local_988;
      if (local_988 == (undefined1 *)0x0) {
        puVar6 = local_978;
      }
      uVar8 = FUN_1003ba9d0(local_cf8);
      uVar9 = FUN_1003ba9d0(local_f18);
      uVar10 = FUN_1003ba9d0(local_1138);
      if (local_8c0 != '\0') {
        FUN_1003ba140(local_ad8);
      }
      puVar11 = local_8e0;
      if (local_8e0 == (undefined1 *)0x0) {
        puVar11 = local_8d0;
      }
      FUN_10038e8e0(uVar4,"%s = %s%s ? %s : %s%s;\n",uVar7,puVar6,uVar8,uVar9,uVar10,puVar11);
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 < 4);
  FUN_1003b9b40(local_1138);
  FUN_1003b9b40(local_f18);
  FUN_1003b9b40(local_cf8);
  puVar6 = local_ad8;
LAB_1003be36d:
  FUN_1003b9b40(puVar6);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

