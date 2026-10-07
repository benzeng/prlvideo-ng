
undefined8 FUN_1003be670(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  bool bVar11;
  undefined1 local_698 [544];
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  char *pcVar10;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar7 = *(long *)(param_2 + 0x40);
  uVar1 = *(ushort *)(param_2 + 0x4c);
  pcVar10 = (char *)0x0;
  pcVar9 = (char *)0x0;
  uVar2 = (uint)uVar1;
  if (0x30 < uVar1) {
    if (uVar1 < 0x4f) {
      if (uVar1 != 0x31) {
        pcVar6 = (char *)0x0;
        if (uVar1 != 0x39) goto switchD_1003be6f7_caseD_23;
        goto switchD_1003be6f7_caseD_27;
      }
    }
    else if (uVar1 != 0x4f) {
      bVar11 = uVar1 == 0x50;
      goto LAB_1003be6de;
    }
switchD_1003be6f7_caseD_22:
    pcVar6 = "lessThan";
    pcVar9 = "<";
    goto switchD_1003be6f7_caseD_23;
  }
  if (uVar1 < 0x20) {
    if (uVar2 != 0x18) {
      bVar11 = uVar2 == 0x1d;
LAB_1003be6de:
      pcVar6 = (char *)0x0;
      pcVar9 = pcVar10;
      if (!bVar11) goto switchD_1003be6f7_caseD_23;
      goto switchD_1003be6f7_caseD_21;
    }
switchD_1003be6f7_caseD_20:
    pcVar6 = "equal";
    pcVar9 = "==";
  }
  else {
    pcVar6 = (char *)0x0;
    pcVar9 = pcVar10;
    switch(uVar1) {
    case 0x20:
      goto switchD_1003be6f7_caseD_20;
    case 0x21:
switchD_1003be6f7_caseD_21:
      pcVar6 = "greaterThanEqual";
      pcVar9 = ">=";
      break;
    case 0x22:
      goto switchD_1003be6f7_caseD_22;
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
      break;
    case 0x27:
switchD_1003be6f7_caseD_27:
      pcVar6 = "notEqual";
      pcVar9 = "!=";
      break;
    default:
      pcVar6 = (char *)0x0;
    }
  }
switchD_1003be6f7_caseD_23:
  uVar8 = 8;
  uVar2 = uVar2 - 0x20;
  if (uVar2 < 0x31) {
    if ((0x87UL >> ((ulong)uVar2 & 0x3f) & 1) == 0) {
      if ((0x1800000000000U >> ((ulong)uVar2 & 0x3f) & 1) != 0) {
        uVar8 = 1;
      }
    }
    else {
      uVar8 = 2;
    }
  }
  FUN_1003b9a60(local_258,lVar7,4,*(undefined1 *)(lVar7 + 0x30));
  FUN_1003b9a60(local_478,lVar7 + 0x40,uVar8,*(undefined1 *)(lVar7 + 0x30));
  FUN_1003b9a60(local_698,lVar7 + 0x80,uVar8,*(undefined1 *)(lVar7 + 0x30));
  uVar8 = *(undefined8 *)(param_1 + 8);
  if ((*(byte *)(lVar7 + 0x30) & *(byte *)(lVar7 + 0x30) - 1) == 0) {
    uVar3 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    lVar7 = local_108;
    if (local_108 == 0) {
      lVar7 = local_f8;
    }
    uVar4 = FUN_1003ba9d0(local_478);
    uVar5 = FUN_1003ba9d0(local_698);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    if (local_60 == 0) {
      local_60 = local_50;
    }
    FUN_10038e8e0(uVar8,"%s = %s%s %s %s%s;\n",uVar3,lVar7,uVar4,pcVar9,uVar5,local_60);
  }
  else {
    uVar3 = FUN_1003ba9d0(local_258);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    lVar7 = local_108;
    if (local_108 == 0) {
      lVar7 = local_f8;
    }
    uVar4 = FUN_1003ba9d0(local_478);
    uVar5 = FUN_1003ba9d0(local_698);
    if (local_40 != '\0') {
      FUN_1003ba140(local_258);
    }
    if (local_60 == 0) {
      local_60 = local_50;
    }
    FUN_10038e8e0(uVar8,"%s = %s%s(%s, %s)%s;\n",uVar3,lVar7,pcVar6,uVar4,uVar5,local_60);
  }
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

