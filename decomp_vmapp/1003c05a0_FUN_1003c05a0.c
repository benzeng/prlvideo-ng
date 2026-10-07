
undefined8 FUN_1003c05a0(long param_1,long param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
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
  uVar1 = *(ushort *)(param_2 + 0x4c);
  pcVar7 = (char *)0x0;
  if (uVar1 < 0x1e) {
    if (uVar1 != 0) {
      if (uVar1 == 0xe) {
        pcVar7 = "/";
      }
      goto LAB_1003c05fd;
    }
  }
  else {
    if (uVar1 == 0x38) {
      pcVar7 = "*";
      goto LAB_1003c05fd;
    }
    if (uVar1 != 0x1e) goto LAB_1003c05fd;
  }
  pcVar7 = "+";
LAB_1003c05fd:
  uVar8 = 8;
  if (uVar1 == 0x1e) {
    uVar8 = 2;
  }
  lVar6 = *(long *)(param_2 + 0x40);
  FUN_1003b9a60(local_258,lVar6,uVar8,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_478,lVar6 + 0x40,uVar8,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_698,lVar6 + 0x80,uVar8,*(undefined1 *)(lVar6 + 0x30));
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar6 = local_108;
  if (local_108 == 0) {
    lVar6 = local_f8;
  }
  uVar4 = FUN_1003ba9d0(local_478);
  uVar5 = FUN_1003ba9d0(local_698);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar2,"%s = %s%s %s %s%s;\n",uVar3,lVar6,uVar4,pcVar7,uVar5,local_60);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

