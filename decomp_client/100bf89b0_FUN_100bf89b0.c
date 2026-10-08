
undefined8 FUN_100bf89b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  if ((DAT_102311d60 == 0) && (DAT_102311d60 = FUN_100c5ff30(FUN_100bf8ab0), DAT_102311d60 == 0)) {
    return 0;
  }
  if ((DAT_102311d68 == 0) && (DAT_102311d68 = FUN_100c5ff30(FUN_100bf8ac0), DAT_102311d68 == 0)) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_100bf3540(0xc,"obj_xref.c",0x9f);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = param_1;
    puVar2[1] = param_2;
    puVar2[2] = param_3;
    iVar1 = FUN_100c604e0(DAT_102311d60,puVar2);
    uVar3 = 0;
    if (iVar1 == 0) {
      FUN_100bf3910(puVar2);
    }
    else {
      iVar1 = FUN_100c604e0(DAT_102311d68,puVar2);
      if (iVar1 != 0) {
        FUN_100c60880(DAT_102311d60);
        FUN_100c60880(DAT_102311d68);
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

