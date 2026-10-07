
undefined8 FUN_1003bc140(long param_1,long param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  char *local_6a0;
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
  local_6a0 = (char *)0x0;
  if (uVar1 < 0x55) {
    if (uVar1 == 0x29) {
      lVar8 = *(long *)(param_2 + 0x40);
      lVar9 = lVar8 + 0x40;
      lVar10 = lVar8 + 0x80;
      local_6a0 = "<<";
    }
    else {
      if (uVar1 == 0x2a) goto LAB_1003bc1c2;
LAB_1003bc1c9:
      lVar8 = *(long *)(param_2 + 0x40);
      lVar9 = lVar8 + 0x40;
      lVar10 = lVar8 + 0x80;
      if (uVar1 != 0x2a) {
        if (uVar1 == 0x55) {
          bVar11 = 1;
          goto LAB_1003bc22a;
        }
        bVar11 = 0;
        if (uVar1 != 0x57) goto LAB_1003bc22a;
        goto LAB_1003bc201;
      }
    }
    bVar11 = 2;
  }
  else {
    if (uVar1 == 0x55) {
LAB_1003bc1c2:
      local_6a0 = ">>";
      goto LAB_1003bc1c9;
    }
    if (uVar1 != 0x57) goto LAB_1003bc1c9;
    lVar8 = *(long *)(param_2 + 0x40);
    lVar9 = lVar8 + 0x40;
    lVar10 = lVar8 + 0x80;
    local_6a0 = "^";
LAB_1003bc201:
    lVar2 = *(long *)(*(long *)(lVar8 + 8) + 0x80);
    pbVar7 = (byte *)(lVar2 + 0x48);
    if (lVar2 == 0) {
      pbVar7 = (byte *)(*(long *)(lVar8 + 8) + 0x7c);
    }
    bVar11 = 2;
    if ((*pbVar7 & 3) != 0) {
      bVar11 = *pbVar7;
    }
  }
LAB_1003bc22a:
  FUN_1003b9a60(local_258,lVar8,bVar11,*(undefined1 *)(lVar8 + 0x30));
  FUN_1003b9a60(local_478,lVar9,bVar11,*(undefined1 *)(lVar8 + 0x30));
  FUN_1003b9a60(local_698,lVar10,bVar11,*(undefined1 *)(lVar8 + 0x30));
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
  uVar6 = FUN_1003ba9d0(local_698);
  if (local_40 != '\0') {
    FUN_1003ba140(local_258);
  }
  if (local_60 == 0) {
    local_60 = local_50;
  }
  FUN_10038e8e0(uVar3,"%s = %s%s %s %s%s;\n",uVar4,lVar9,uVar5,local_6a0,uVar6,local_60);
  FUN_1003b9b40(local_698);
  FUN_1003b9b40(local_478);
  FUN_1003b9b40(local_258);
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

