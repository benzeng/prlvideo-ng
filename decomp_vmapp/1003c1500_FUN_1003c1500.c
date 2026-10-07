
undefined8 FUN_1003c1500(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  long lVar9;
  bool bVar10;
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
  lVar2 = *(long *)(param_2 + 0x40);
  bVar10 = (*(byte *)(lVar2 + 0x78) & 0xfe) == 8;
  pcVar6 = "]";
  if (bVar10) {
    pcVar6 = ")";
  }
  pcVar8 = "[";
  if (bVar10) {
    pcVar8 = "(";
  }
  lVar9 = *(long *)(*(long *)(lVar2 + 8) + 0x80);
  puVar7 = (undefined1 *)(lVar9 + 0x48);
  if (lVar9 == 0) {
    puVar7 = (undefined1 *)(*(long *)(lVar2 + 8) + 0x7c);
  }
  uVar1 = *puVar7;
  FUN_1003b9a60(local_258,lVar2,uVar1,*(undefined1 *)(lVar2 + 0x30));
  FUN_1003b9a60(local_478,lVar2 + 0x40,uVar1,0);
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = FUN_1003ba9d0(local_258);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  lVar9 = local_108;
  if (local_108 == 0) {
    lVar9 = local_f8;
  }
  uVar5 = FUN_1003ba9d0(local_478);
  FUN_10038e8e0(uVar3,"%s = %s%s%s",uVar4,lVar9,uVar5,pcVar8);
  pcVar8 = "";
  if ((*(short *)(param_2 + 0x50) != 0) && (*(char *)(lVar2 + 0xb8) != '\r')) {
    FUN_1003b9a60(local_698,lVar2 + 0x80,2,*(undefined1 *)(lVar2 + 0xb0));
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_1003ba9d0(local_698);
    FUN_10038e8e0(uVar3,"%s * %d",uVar4,*(undefined2 *)(param_2 + 0x50));
    FUN_1003b9b40(local_698);
    pcVar8 = " + ";
  }
  if (*(char *)(lVar2 + 0xf8) != '\r') {
    FUN_1003b9a60(local_8b8,lVar2 + 0xc0,2,*(undefined1 *)(lVar2 + 0xf0));
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar4 = FUN_1003ba9d0(local_8b8);
    FUN_10038e8e0(uVar3,"%s%s",pcVar8,uVar4);
    FUN_1003b9b40(local_8b8);
    pcVar8 = " + ";
  }
  if (*(short *)(param_2 + 0x52) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s%d",pcVar8);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar3,"%s%s",pcVar6,local_60);
  FUN_1003b9900(*(undefined8 *)(param_1 + 8),lVar2 + 0x40,*(undefined1 *)(lVar2 + 0x30));
  FUN_10038e8e0(*(undefined8 *)(param_1 + 8),";\n");
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

