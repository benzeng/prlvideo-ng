
undefined8 FUN_100c9e170(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    if ((DAT_102318448 == 0) && (DAT_102318448 = FUN_100c5ff30(FUN_100c9e050), DAT_102318448 == 0))
    break;
    iVar1 = FUN_100c604e0(DAT_102318448,param_1);
    if (iVar1 == 0) {
      uVar2 = 0x51;
      goto LAB_100c9e215;
    }
    iVar1 = param_1[0x1a];
    param_1 = param_1 + 0x1a;
  }
  uVar2 = 0x4d;
LAB_100c9e215:
  FUN_100c62ee0(0x22,0x68,0x41,"v3_lib.c",uVar2);
  return 0;
}

