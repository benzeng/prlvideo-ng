
undefined8 FUN_100c9dfc0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_102318448 == 0) && (DAT_102318448 = FUN_100c5ff30(FUN_100c9e050), DAT_102318448 == 0)) {
    uVar2 = 0x4d;
  }
  else {
    iVar1 = FUN_100c604e0(DAT_102318448,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x51;
  }
  FUN_100c62ee0(0x22,0x68,0x41,"v3_lib.c",uVar2);
  return 0;
}

