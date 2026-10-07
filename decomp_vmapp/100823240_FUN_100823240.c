
undefined8 FUN_100823240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((DAT_1011ccfc0 == 0) && (DAT_1011ccfc0 = FUN_100884d30(FUN_100823340), DAT_1011ccfc0 == 0)) {
    return 0;
  }
  if ((DAT_1011ccfc8 == 0) && (DAT_1011ccfc8 = FUN_100884d30(FUN_100823350), DAT_1011ccfc8 == 0)) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_10081ddd0(0xc,"obj_xref.c",0x9f);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    iVar1 = FUN_1008852e0(DAT_1011ccfc0,puVar2);
    uVar3 = 0;
    if (iVar1 == 0) {
      FUN_10081e1a0(puVar2);
    }
    else {
      iVar1 = FUN_1008852e0(DAT_1011ccfc8,puVar2);
      if (iVar1 != 0) {
        FUN_100885680(DAT_1011ccfc0);
        FUN_100885680(DAT_1011ccfc8);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

