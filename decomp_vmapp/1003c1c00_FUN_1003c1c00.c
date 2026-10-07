
undefined8 FUN_1003c1c00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  undefined1 local_478 [544];
  undefined1 local_258 [336];
  long local_108;
  long local_f8;
  long local_60;
  long local_50;
  char local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar4 = (char *)0x0;
  if (*(short *)(param_2 + 0x4c) == 0xc) {
    pcVar4 = "dFdy";
  }
  pcVar6 = "dFdx";
  if (*(short *)(param_2 + 0x4c) != 0xb) {
    pcVar6 = pcVar4;
  }
  lVar5 = *(long *)(param_2 + 0x40);
  FUN_1003b9a60(local_258,lVar5,8,*(undefined1 *)(lVar5 + 0x30));
  FUN_1003b9a60(local_478,lVar5 + 0x40,8,*(undefined1 *)(lVar5 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar5 = local_108;
  if (local_108 == 0) {
    lVar5 = local_f8;
  }
  uVar3 = FUN_1003ba9d0(local_478);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar1,"%s = %s%s(%s)%s;\n",uVar2,lVar5,pcVar6,uVar3,local_60);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

