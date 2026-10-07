
undefined8 FUN_1003be9e0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
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
  lVar6 = *(long *)(param_2 + 0x40);
  uVar7 = 2;
  if (*(short *)(param_2 + 0x4c) != 0x23) {
    uVar7 = 8;
    if (*(short *)(param_2 + 0x4c) == 0x52) {
      uVar7 = 1;
    }
  }
  FUN_1003b9a60(local_258,lVar6,uVar7,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_478,lVar6 + 0x40,uVar7,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_698,lVar6 + 0x80,uVar7,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_8b8,lVar6 + 0xc0,uVar7,*(undefined1 *)(lVar6 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar6 = local_108;
  if (local_108 == 0) {
    lVar6 = local_f8;
  }
  uVar3 = FUN_1003ba9d0(local_478);
  uVar4 = FUN_1003ba9d0(local_698);
  uVar5 = FUN_1003ba9d0(local_8b8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar1,"%s = %s%s * %s + %s%s;\n",uVar2,lVar6,uVar3,uVar4,uVar5,local_60);
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

