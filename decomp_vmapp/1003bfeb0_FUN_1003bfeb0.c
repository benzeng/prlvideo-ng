
undefined8 FUN_1003bfeb0(long param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  char *pcVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  undefined1 uVar11;
  long lVar12;
  undefined1 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar12 = *(long *)(param_2 + 0x40);
  uVar2 = *(ushort *)(param_2 + 0x4c);
  uVar13 = 0;
  if (uVar2 < 0x56) {
    if (uVar2 < 0x2b) {
      uVar7 = 8;
      if (uVar2 == 0x1b) {
        uVar9 = 2;
      }
      else {
        uVar9 = 1;
        uVar11 = 0;
        if (uVar2 != 0x1c) goto LAB_1003bff73;
      }
    }
    else if (uVar2 == 0x2b) {
      uVar9 = 8;
      uVar7 = 2;
    }
    else {
      uVar11 = 0;
      uVar13 = 0;
      if (uVar2 != 0x36) goto LAB_1003bff73;
      lVar3 = *(long *)(*(long *)(lVar12 + 8) + 0x80);
      puVar10 = (undefined1 *)(lVar3 + 0x48);
      if (lVar3 == 0) {
        puVar10 = (undefined1 *)(*(long *)(lVar12 + 8) + 0x7c);
      }
      uVar9 = *puVar10;
      uVar7 = uVar9;
    }
  }
  else {
    uVar11 = 0;
    uVar13 = 0;
    if (uVar2 != 0x56) goto LAB_1003bff73;
    uVar9 = 8;
    uVar7 = 1;
  }
  uVar11 = uVar9;
  uVar13 = uVar7;
LAB_1003bff73:
  if (uVar2 == 0x36) {
    pcVar15 = "";
  }
  else {
    pcVar15 = (char *)FUN_1003a78b0(uVar11,*(undefined1 *)(lVar12 + 0x30));
  }
  FUN_1003b9a60(local_258,lVar12,uVar11,*(undefined1 *)(lVar12 + 0x30));
  FUN_1003b9a60(local_478,lVar12 + 0x40,uVar13,*(undefined1 *)(lVar12 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar12 = local_108;
  if (local_108 == 0) {
    lVar12 = local_f8;
  }
  if (*pcVar15 == '\0') {
    pcVar14 = "";
  }
  else {
    pcVar14 = "(";
  }
  uVar6 = FUN_1003ba9d0(local_478);
  cVar1 = *pcVar15;
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  if (cVar1 == '\0') {
    pcVar8 = "";
  }
  else {
    pcVar8 = ")";
  }
  FUN_10038e8e0(uVar4,"%s = %s%s%s%s%s%s;\n",uVar5,lVar12,pcVar15,pcVar14,uVar6,pcVar8,local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

