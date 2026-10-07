
undefined8 FUN_1003c1860(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 local_698 [336];
  long local_548;
  long local_538;
  long local_4a0;
  long local_490;
  char local_480;
  undefined1 local_478 [544];
  undefined1 local_258 [544];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = *(long *)(param_2 + 0x40);
  lVar2 = *(long *)(*(long *)(lVar6 + 8) + 0x80);
  puVar5 = (undefined1 *)(lVar2 + 0x48);
  if (lVar2 == 0) {
    puVar5 = (undefined1 *)(*(long *)(lVar6 + 8) + 0x7c);
  }
  uVar1 = *puVar5;
  FUN_1003b9a60(local_258,lVar6,uVar1,*(undefined1 *)(lVar6 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_1003ba9d0(local_258);
  FUN_10038e8e0(uVar3,uVar4);
  bVar9 = (*(byte *)(lVar6 + 0x78) & 0xfe) == 8;
  pcVar7 = "[";
  if (bVar9) {
    pcVar7 = "(";
  }
  pcVar8 = "]";
  if (bVar9) {
    pcVar8 = ")";
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),pcVar7);
  FUN_1003b9a60(local_478,lVar6 + 0x40,2,*(undefined1 *)(lVar6 + 0x70));
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar3,uVar4);
  if (*(short *)(param_2 + 0x52) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8)," + %d");
  }
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),pcVar8);
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar6,*(undefined1 *)(lVar6 + 0x30));
  FUN_1003b9a60(local_698,lVar6 + 0x80,uVar1,*(undefined1 *)(lVar6 + 0x30));
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (local_480 != '\0') {
    FUN_1003ba140(local_698);
  }
  lVar6 = local_548;
  if (local_548 == 0) {
    lVar6 = local_538;
  }
  uVar4 = FUN_1003ba9d0(local_698);
  if (local_480 != '\0') {
    FUN_1003ba140(local_698);
  }
  if (local_4a0 == 0) {
    local_4a0 = local_490;
  }
  FUN_10038e8e0(uVar3," = %s%s%s;\n",lVar6,uVar4,local_4a0);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

