
undefined8 FUN_1003bee10(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  undefined1 local_698 [336];
  long local_548;
  long local_538;
  long local_4a0;
  long local_490;
  char local_480;
  undefined1 local_478 [336];
  long local_328;
  long local_318;
  long local_280;
  long local_270;
  char local_260;
  undefined1 local_258 [8];
  char *local_250;
  uint local_248;
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
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar11 = *(long *)(param_2 + 0x40);
  local_38 = lVar12;
  FUN_1003b9a60(local_258,lVar11 + 0x80,8,0);
  cVar5 = *(char *)(lVar11 + 0x38);
  if (cVar5 == '\r') goto LAB_1003bf1a3;
  if ((*(char *)(lVar11 + 0x78) != '\r') && ((*(byte *)(lVar11 + 0xb9) & 1) == 0)) {
    if (((*(byte *)(lVar11 + 0x30) & *(byte *)(lVar11 + 0xb0)) == 0) ||
       (((*(int *)(lVar11 + 0x28) != *(int *)(lVar11 + 0xa8) ||
         (*(int *)(lVar11 + 0x2c) != *(int *)(lVar11 + 0xac))) ||
        (cVar5 != *(char *)(lVar11 + 0xb8))))) {
LAB_1003bef01:
      if ((((*(byte *)(lVar11 + 0x70) & *(byte *)(lVar11 + 0xb0)) != 0) &&
          (*(int *)(lVar11 + 0x68) == *(int *)(lVar11 + 0xa8))) &&
         ((*(int *)(lVar11 + 0x6c) == *(int *)(lVar11 + 0xac) &&
          (*(char *)(lVar11 + 0x78) == *(char *)(lVar11 + 0xb8))))) {
        lVar2 = *(long *)(lVar11 + 0x48);
        if ((lVar2 != 0) && (lVar3 = *(long *)(lVar11 + 0x88), lVar3 != 0)) {
          pcVar10 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
          if (*(long *)(lVar2 + 0x80) == 0) {
            pcVar10 = (char *)(lVar2 + 0x7c);
          }
          pcVar9 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
          if (*(long *)(lVar3 + 0x80) == 0) {
            pcVar9 = (char *)(lVar3 + 0x7c);
          }
          if (*pcVar10 != *pcVar9) goto LAB_1003bf068;
        }
        goto LAB_1003bef8f;
      }
    }
    else {
      lVar2 = *(long *)(lVar11 + 8);
      if ((lVar2 != 0) && (lVar3 = *(long *)(lVar11 + 0x88), lVar3 != 0)) {
        pcVar10 = (char *)(*(long *)(lVar2 + 0x80) + 0x48);
        if (*(long *)(lVar2 + 0x80) == 0) {
          pcVar10 = (char *)(lVar2 + 0x7c);
        }
        pcVar9 = (char *)(*(long *)(lVar3 + 0x80) + 0x48);
        if (*(long *)(lVar3 + 0x80) == 0) {
          pcVar9 = (char *)(lVar3 + 0x7c);
        }
        if (*pcVar10 != *pcVar9) goto LAB_1003bef01;
      }
LAB_1003bef8f:
      uVar4 = *(undefined8 *)(param_1 + 8);
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      *puVar6 = 0;
      local_1b8 = 0;
      FUN_1003ba4c0(local_258,local_244,0);
      if ((local_244 & 0xff) < 0xf) {
        pcVar10 = "i";
        switch(local_244 & 0xff) {
        case 1:
          pcVar10 = "u";
          break;
        case 2:
          break;
        default:
switchD_1003beff0_caseD_3:
          pcVar10 = "?";
          break;
        case 4:
          pcVar10 = "b";
          break;
        case 8:
          pcVar10 = "";
        }
      }
      else {
        if ((local_244 & 0xff) != 0xf) goto switchD_1003beff0_caseD_3;
        pcVar10 = "a";
      }
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      FUN_10038e8e0(uVar4,"%s%s = %s;\n",pcVar10,"Tmp1",puVar6);
      puVar6 = local_1b0;
      if (local_1b0 == (undefined1 *)0x0) {
        puVar6 = local_1a0;
      }
      *puVar6 = 0;
      local_1b8 = 0;
      local_250 = "Tmp1";
      cVar5 = *(char *)(lVar11 + 0x38);
    }
LAB_1003bf068:
    if (cVar5 == '\r') goto LAB_1003bf1a3;
  }
  FUN_1003b9a60(local_478,lVar11,8,*(undefined1 *)(lVar11 + 0x30));
  bVar1 = *(byte *)(lVar11 + 0x30);
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
  local_248 = (uint)bVar1;
  local_40 = 1;
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar7 = FUN_1003ba9d0(local_478);
  if (local_260 != '\0') {
    FUN_1003ba140(local_478);
  }
  lVar12 = local_328;
  if (local_328 == 0) {
    lVar12 = local_318;
  }
  uVar8 = FUN_1003ba9d0(local_258);
  if (local_260 != '\0') {
    FUN_1003ba140(local_478);
  }
  if (local_280 == 0) {
    local_280 = local_270;
  }
  FUN_10038e8e0(uVar4,"%s = %ssin(%s)%s;\n",uVar7,lVar12,uVar8,local_280);
  FUN_1003b9b40(local_478);
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1003bf1a3:
  if (*(char *)(lVar11 + 0x78) != '\r') {
    FUN_1003b9a60(local_698,lVar11 + 0x40,8,*(undefined1 *)(lVar11 + 0x70));
    bVar1 = *(byte *)(lVar11 + 0x70);
    if (local_1b0 == (undefined1 *)0x0) {
      local_1b0 = local_1a0;
    }
    *local_1b0 = 0;
    local_1b8 = 0;
    if (local_108 == (undefined1 *)0x0) {
      local_108 = local_f8;
    }
    *local_108 = 0;
    local_110 = 0;
    if (local_60 == (undefined1 *)0x0) {
      local_60 = local_50;
    }
    *local_60 = 0;
    local_68 = 0;
    local_248 = (uint)bVar1;
    local_40 = 1;
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar7 = FUN_1003ba9d0(local_698);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    lVar11 = local_548;
    if (local_548 == 0) {
      lVar11 = local_538;
    }
    uVar8 = FUN_1003ba9d0(local_258);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    if (local_4a0 == 0) {
      local_4a0 = local_490;
    }
    FUN_10038e8e0(uVar4,"%s = %scos(%s)%s;\n",uVar7,lVar11,uVar8,local_4a0);
    FUN_1003b9b40(local_698);
  }
  FUN_1003b9b40(local_258);
  if (lVar12 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

