
undefined8 FUN_1003bf450(long param_1,long param_2)

{
  long lVar1;
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
  uint uVar14;
  long lVar15;
  undefined1 local_8b8 [16];
  int local_8a8;
  undefined4 local_818;
  undefined1 *local_810;
  undefined1 *local_800;
  undefined4 local_770;
  undefined1 *local_768;
  undefined1 *local_758;
  undefined4 local_6c8;
  undefined1 *local_6c0;
  undefined1 *local_6b0;
  char local_6a0;
  undefined1 local_698 [16];
  int local_688;
  undefined4 local_5f8;
  undefined1 *local_5f0;
  undefined1 *local_5e0;
  undefined4 local_550;
  undefined1 *local_548;
  undefined1 *local_538;
  undefined4 local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_490;
  char local_480;
  undefined1 local_478 [8];
  char *local_470;
  int local_468;
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
  undefined1 local_258 [8];
  char *local_250;
  int local_248;
  uint local_244;
  undefined4 local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a0;
  undefined4 local_110;
  undefined1 *local_108;
  undefined1 *local_f8;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 local_40;
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar1 = *(long *)(param_2 + 0x40);
  local_38 = lVar15;
  FUN_1003b9a60(local_258,lVar1 + 0x80,1,0);
  FUN_1003b9a60(local_478,lVar1 + 0xc0,1,0);
  if (*(char *)(lVar1 + 0x38) == '\r') goto LAB_1003bfb49;
  if (*(char *)(lVar1 + 0x78) != '\r') {
    if ((*(byte *)(lVar1 + 0xb9) & 1) == 0) {
      if (((((*(byte *)(lVar1 + 0x30) & *(byte *)(lVar1 + 0xb0)) == 0) ||
           (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0xa8))) ||
          (*(int *)(lVar1 + 0x2c) != *(int *)(lVar1 + 0xac))) ||
         (*(char *)(lVar1 + 0x38) != *(char *)(lVar1 + 0xb8))) {
LAB_1003bf568:
        if ((((*(byte *)(lVar1 + 0x70) & *(byte *)(lVar1 + 0xb0)) == 0) ||
            (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0xa8))) ||
           ((*(int *)(lVar1 + 0x6c) != *(int *)(lVar1 + 0xac) ||
            (*(char *)(lVar1 + 0x78) != *(char *)(lVar1 + 0xb8))))) goto LAB_1003bf6d2;
        lVar2 = *(long *)(lVar1 + 0x48);
        if ((lVar2 != 0) && (lVar3 = *(long *)(lVar1 + 0x88), lVar3 != 0)) {
          pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar13 = (char *)(lVar2 + 0x7c);
          }
          pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
          if (*(long *)(lVar3 + 0x80) == 0) {
            pcVar12 = (char *)(lVar3 + 0x7c);
          }
          if (*pcVar13 != *pcVar12) goto LAB_1003bf6d2;
        }
      }
      else {
        lVar2 = *(long *)(lVar1 + 8);
        if ((lVar2 != 0) && (lVar3 = *(long *)(lVar1 + 0x88), lVar3 != 0)) {
          pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar13 = (char *)(lVar2 + 0x7c);
          }
          pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
          if (*(long *)(lVar3 + 0x80) == 0) {
            pcVar12 = (char *)(lVar3 + 0x7c);
          }
          if (*pcVar13 != *pcVar12) goto LAB_1003bf568;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      *puVar6 = 0;
      local_1b8 = 0;
      FUN_1003ba4c0(local_258,local_244,0);
      if ((local_244 & 0xff) < 0xf) {
        pcVar13 = "i";
        switch(local_244 & 0xff) {
        case 1:
          pcVar13 = "u";
          break;
        case 2:
          break;
        default:
switchD_1003bf65d_caseD_3:
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
        if ((local_244 & 0xff) != 0xf) goto switchD_1003bf65d_caseD_3;
        pcVar13 = "a";
      }
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar13,"Tmp0",puVar6);
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      *puVar6 = 0;
      local_1b8 = 0;
      local_250 = "Tmp0";
    }
LAB_1003bf6d2:
    if ((*(byte *)(lVar1 + 0xf9) & 1) == 0) {
      if (((((*(byte *)(lVar1 + 0x30) & *(byte *)(lVar1 + 0xf0)) == 0) ||
           (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0xe8))) ||
          (*(int *)(lVar1 + 0x2c) != *(int *)(lVar1 + 0xec))) ||
         (*(char *)(lVar1 + 0x38) != *(char *)(lVar1 + 0xf8))) {
LAB_1003bf766:
        if ((((*(byte *)(lVar1 + 0x70) & *(byte *)(lVar1 + 0xf0)) == 0) ||
            (*(int *)(lVar1 + 0x68) != *(int *)(lVar1 + 0xe8))) ||
           ((*(int *)(lVar1 + 0x6c) != *(int *)(lVar1 + 0xec) ||
            (*(char *)(lVar1 + 0x78) != *(char *)(lVar1 + 0xf8))))) goto LAB_1003bf8d1;
        lVar2 = *(long *)(lVar1 + 0x48);
        if ((lVar2 != 0) && (lVar3 = *(long *)(lVar1 + 200), lVar3 != 0)) {
          pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar13 = (char *)(lVar2 + 0x7c);
          }
          pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
          if (*(long *)(lVar3 + 0x80) == 0) {
            pcVar12 = (char *)(lVar3 + 0x7c);
          }
          if (*pcVar13 != *pcVar12) goto LAB_1003bf8d1;
        }
      }
      else {
        lVar2 = *(long *)(lVar1 + 8);
        if ((lVar2 != 0) && (lVar3 = *(long *)(lVar1 + 200), lVar3 != 0)) {
          pcVar13 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar13 = (char *)(lVar2 + 0x7c);
          }
          pcVar12 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
          if (*(long *)(lVar3 + 0x80) == 0) {
            pcVar12 = (char *)(lVar3 + 0x7c);
          }
          if (*pcVar13 != *pcVar12) goto LAB_1003bf766;
        }
      }
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar6 = local_3d0;
      if (local_3d0 == (undefined1 *)0x0) {
        puVar6 = local_3c0;
      }
      *puVar6 = 0;
      local_3d8 = 0;
      FUN_1003ba4c0(local_478,local_464,0);
      if ((local_464 & 0xff) < 0xf) {
        pcVar13 = "i";
        switch(local_464 & 0xff) {
        case 1:
          pcVar13 = "u";
          break;
        case 2:
          break;
        default:
switchD_1003bf85c_caseD_3:
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
        if ((local_464 & 0xff) != 0xf) goto switchD_1003bf85c_caseD_3;
        pcVar13 = "a";
      }
      puVar6 = local_3d0;
      if (local_3d0 == (undefined1 *)0x0) {
        puVar6 = local_3c0;
      }
      FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar13,"Tmp1",puVar6);
      puVar6 = local_3d0;
      if (local_3d0 == (undefined1 *)0x0) {
        puVar6 = local_3c0;
      }
      *puVar6 = 0;
      local_3d8 = 0;
      local_470 = "Tmp1";
    }
  }
LAB_1003bf8d1:
  if (*(char *)(lVar1 + 0x38) != '\r') {
    FUN_1003b9a60(local_698,lVar1,1,0);
    uVar14 = 0;
    do {
      iVar5 = 1 << ((byte)uVar14 & 0x1f);
      if ((*(byte *)(lVar1 + 0x30) >> (uVar14 & 0x1f) & 1) != 0) {
        puVar6 = local_5f0;
        if (local_5f0 == (undefined1 *)0x0) {
          puVar6 = local_5e0;
        }
        *puVar6 = 0;
        local_5f8 = 0;
        puVar6 = local_548;
        if (local_548 == (undefined1 *)0x0) {
          puVar6 = local_538;
        }
        *puVar6 = 0;
        local_550 = 0;
        puVar6 = local_4a0;
        if (local_4a0 == (undefined1 *)0x0) {
          puVar6 = local_490;
        }
        *puVar6 = 0;
        local_4a8 = 0;
        local_480 = '\x01';
        puVar6 = local_1b0;
        if (local_1b0 == (undefined1 *)0x0) {
          puVar6 = local_1a0;
        }
        *puVar6 = 0;
        local_1b8 = 0;
        puVar6 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar6 = local_f8;
        }
        *puVar6 = 0;
        local_110 = 0;
        puVar6 = local_60;
        if (local_60 == (undefined1 *)0x0) {
          puVar6 = local_50;
        }
        *puVar6 = 0;
        local_68 = 0;
        local_40 = 1;
        puVar6 = local_3d0;
        if (local_3d0 == (undefined1 *)0x0) {
          puVar6 = local_3c0;
        }
        *puVar6 = 0;
        local_3d8 = 0;
        puVar6 = local_328;
        if (local_328 == (undefined1 *)0x0) {
          puVar6 = local_318;
        }
        *puVar6 = 0;
        local_330 = 0;
        puVar6 = local_280;
        if (local_280 == (undefined1 *)0x0) {
          puVar6 = local_270;
        }
        *puVar6 = 0;
        local_288 = 0;
        local_260 = 1;
        uVar4 = *(undefined8 *)(param_1 + 8);
        local_688 = iVar5;
        local_468 = iVar5;
        local_248 = iVar5;
        uVar7 = FUN_1003ba9d0(local_698);
        if (local_480 != '\0') {
          FUN_1003ba140(local_698);
        }
        puVar6 = local_548;
        if (local_548 == (undefined1 *)0x0) {
          puVar6 = local_538;
        }
        uVar8 = FUN_1003ba9d0(local_478);
        uVar9 = FUN_1003ba9d0(local_258);
        uVar10 = FUN_1003ba9d0(local_478);
        if (local_480 != '\0') {
          FUN_1003ba140(local_698);
        }
        puVar11 = local_4a0;
        if (local_4a0 == (undefined1 *)0x0) {
          puVar11 = local_490;
        }
        FUN_10038e8e0(uVar4,"%s = %sbool(%s) ? %s / %s : ~0u%s;\n",uVar7,puVar6,uVar8,uVar9,uVar10,
                      puVar11);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 4);
    FUN_1003b9b40(local_698);
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
LAB_1003bfb49:
  if (*(char *)(lVar1 + 0x78) != '\r') {
    FUN_1003b9a60(local_8b8,lVar1 + 0x40,1,0);
    uVar14 = 0;
    do {
      iVar5 = 1 << ((byte)uVar14 & 0x1f);
      if ((*(byte *)(lVar1 + 0x70) >> (uVar14 & 0x1f) & 1) != 0) {
        puVar6 = local_810;
        if (local_810 == (undefined1 *)0x0) {
          puVar6 = local_800;
        }
        *puVar6 = 0;
        local_818 = 0;
        puVar6 = local_768;
        if (local_768 == (undefined1 *)0x0) {
          puVar6 = local_758;
        }
        *puVar6 = 0;
        local_770 = 0;
        puVar6 = local_6c0;
        if (local_6c0 == (undefined1 *)0x0) {
          puVar6 = local_6b0;
        }
        *puVar6 = 0;
        local_6c8 = 0;
        local_6a0 = '\x01';
        puVar6 = local_1b0;
        if (local_1b0 == (undefined1 *)0x0) {
          puVar6 = local_1a0;
        }
        *puVar6 = 0;
        local_1b8 = 0;
        puVar6 = local_108;
        if (local_108 == (undefined1 *)0x0) {
          puVar6 = local_f8;
        }
        *puVar6 = 0;
        local_110 = 0;
        puVar6 = local_60;
        if (local_60 == (undefined1 *)0x0) {
          puVar6 = local_50;
        }
        *puVar6 = 0;
        local_68 = 0;
        local_40 = 1;
        puVar6 = local_3d0;
        if (local_3d0 == (undefined1 *)0x0) {
          puVar6 = local_3c0;
        }
        *puVar6 = 0;
        local_3d8 = 0;
        puVar6 = local_328;
        if (local_328 == (undefined1 *)0x0) {
          puVar6 = local_318;
        }
        *puVar6 = 0;
        local_330 = 0;
        puVar6 = local_280;
        if (local_280 == (undefined1 *)0x0) {
          puVar6 = local_270;
        }
        *puVar6 = 0;
        local_288 = 0;
        local_260 = 1;
        uVar4 = *(undefined8 *)(param_1 + 8);
        local_8a8 = iVar5;
        local_468 = iVar5;
        local_248 = iVar5;
        uVar7 = FUN_1003ba9d0(local_8b8);
        if (local_6a0 != '\0') {
          FUN_1003ba140(local_8b8);
        }
        puVar6 = local_768;
        if (local_768 == (undefined1 *)0x0) {
          puVar6 = local_758;
        }
        uVar8 = FUN_1003ba9d0(local_478);
        uVar9 = FUN_1003ba9d0(local_258);
        uVar10 = FUN_1003ba9d0(local_478);
        if (local_6a0 != '\0') {
          FUN_1003ba140(local_8b8);
        }
        puVar11 = local_6c0;
        if (local_6c0 == (undefined1 *)0x0) {
          puVar11 = local_6b0;
        }
        FUN_10038e8e0(uVar4,"%s = %sbool(%s) ? %s %% %s : ~0u%s;\n",uVar7,puVar6,uVar8,uVar9,uVar10,
                      puVar11);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < 4);
    FUN_1003b9b40(local_8b8);
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (lVar15 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

