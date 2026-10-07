
undefined8 FUN_1008dbc70(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1[1] == 0) {
    puVar2 = (undefined8 *)FUN_1008a4610(&DAT_100be7790);
    param_1[1] = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 1;
      uVar3 = FUN_100821870(0x15);
      **(undefined8 **)(param_1[1] + 0x10) = uVar3;
      *(undefined4 *)(*(long *)(param_1[1] + 0x10) + 0x10) = 1;
      FUN_100899890(*param_1);
      uVar3 = FUN_100821870(0x16);
      *param_1 = uVar3;
      goto LAB_1008dbd00;
    }
    uVar4 = 0x95;
    uVar3 = 0x41;
    uVar5 = 0x52;
  }
  else {
    iVar1 = FUN_100821ab0(*param_1);
    if (iVar1 == 0x16) {
LAB_1008dbd00:
      return param_1[1];
    }
    uVar4 = 0x85;
    uVar3 = 0x6c;
    uVar5 = 0x47;
  }
  FUN_100887ce0(0x2e,uVar4,uVar3,"cms_sd.c",uVar5);
  return 0;
}

