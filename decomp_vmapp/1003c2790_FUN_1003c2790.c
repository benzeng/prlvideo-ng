
undefined8 FUN_1003c2790(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar8 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(*(long *)(lVar8 + 8) + 0x80);
  puVar5 = (undefined1 *)(*(long *)(lVar8 + 8) + 0x7c);
  if (lVar3 != 0) {
    puVar5 = (undefined1 *)(lVar3 + 0x48);
  }
  uVar1 = *puVar5;
  local_38 = lVar2;
  FUN_1003b9a60(local_258,lVar8,uVar1,*(undefined1 *)(lVar8 + 0x30));
  FUN_1003b9a60(local_478,lVar8 + 0x40,uVar1,*(undefined1 *)(lVar8 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar8 = local_108;
  if (local_108 == 0) {
    lVar8 = local_f8;
  }
  uVar7 = FUN_1003ba9d0(local_478);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar4,"%s = %sbitCount(%s)%s;\n",uVar6,lVar8,uVar7,local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (lVar2 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

