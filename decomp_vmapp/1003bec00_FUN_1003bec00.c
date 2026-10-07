
undefined8 FUN_1003bec00(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
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
  pcVar7 = (char *)0x0;
  uVar1 = *(ushort *)(param_2 + 0x4c) - 0x24;
  if (uVar1 < 0x31) {
    if ((0x800000010001U >> ((ulong)uVar1 & 0x3f) & 1) == 0) {
      if ((0x1000000008002U >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
        pcVar7 = "min";
      }
    }
    else {
      pcVar7 = "max";
    }
  }
  lVar5 = *(long *)(param_2 + 0x40);
  if (*(ushort *)(param_2 + 0x4c) - 0x53 < 2) {
    uVar6 = 1;
  }
  else {
    uVar6 = 8;
    if (uVar1 < 2) {
      uVar6 = 2;
    }
  }
  FUN_1003b9a60(local_258,lVar5,uVar6,*(undefined1 *)(lVar5 + 0x30));
  FUN_1003b9a60(local_478,lVar5 + 0x40,uVar6,*(undefined1 *)(lVar5 + 0x30));
  FUN_1003b9a60(local_698,lVar5 + 0x80,uVar6,*(undefined1 *)(lVar5 + 0x30));
  uVar6 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar5 = local_108;
  if (local_108 == 0) {
    lVar5 = local_f8;
  }
  uVar3 = FUN_1003ba9d0(local_478);
  uVar4 = FUN_1003ba9d0(local_698);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar6,"%s = %s%s(%s, %s)%s;\n",uVar2,lVar5,pcVar7,uVar3,uVar4,local_60);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

