
undefined8 FUN_1003bbf00(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined1 local_8b8 [544];
  undefined1 local_698 [336];
  long local_548;
  long local_538;
  long local_4a0;
  long local_490;
  char local_480;
  undefined1 local_478 [544];
  undefined1 local_258 [544];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar9 = *(long *)(param_2 + 0x40);
  lVar3 = *(long *)(*(long *)(lVar9 + 8) + 0x80);
  pbVar5 = (byte *)(*(long *)(lVar9 + 8) + 0x7c);
  if (lVar3 != 0) {
    pbVar5 = (byte *)(lVar3 + 0x48);
  }
  bVar1 = *pbVar5;
  local_38 = lVar2;
  if (bVar1 == 4) {
    FUN_1003b9a60(local_258,lVar9,4,*(undefined1 *)(lVar9 + 0x30));
    FUN_1003b9a60(local_478,lVar9 + 0x40,4,*(undefined1 *)(lVar9 + 0x30));
    pcVar8 = "%s = not(%s);\n";
    if ((*(byte *)(lVar9 + 0x30) & *(byte *)(lVar9 + 0x30) - 1) == 0) {
      pcVar8 = "%s = !%s;\n";
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_1003ba9d0(local_258);
    uVar7 = FUN_1003ba9d0(local_478);
    FUN_10038e8e0(uVar4,pcVar8,uVar6,uVar7);
    FUN_1003b9b40(local_478);
    puVar10 = local_258;
  }
  else {
    bVar11 = 2;
    if ((bVar1 & 3) != 0) {
      bVar11 = bVar1;
    }
    FUN_1003b9a60(local_698,lVar9,bVar11,*(undefined1 *)(lVar9 + 0x30));
    FUN_1003b9a60(local_8b8,lVar9 + 0x40,bVar11,*(undefined1 *)(lVar9 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_1003ba9d0(local_698);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    lVar9 = local_548;
    if (local_548 == 0) {
      lVar9 = local_538;
    }
    uVar7 = FUN_1003ba9d0(local_8b8);
    if (local_480 != '\0') {
      FUN_1003ba140(local_698);
    }
    if (local_4a0 == 0) {
      local_4a0 = local_490;
    }
    FUN_10038e8e0(uVar4,"%s = %s~%s%s;\n",uVar6,lVar9,uVar7,local_4a0);
    FUN_1003b9b40(local_8b8);
    puVar10 = local_698;
  }
  FUN_1003b9b40(puVar10);
  if (lVar2 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

