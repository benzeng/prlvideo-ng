
undefined8 FUN_1008c2bf0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    if ((DAT_1011c2a08 == 0) && (DAT_1011c2a08 = FUN_100884d30(FUN_1008c2ad0), DAT_1011c2a08 == 0))
    break;
    iVar1 = FUN_1008852e0(DAT_1011c2a08,param_1);
    if (iVar1 == 0) {
      uVar2 = 0x51;
      goto LAB_1008c2c95;
    }
    iVar1 = param_1[0x1a];
    param_1 = param_1 + 0x1a;
  }
  uVar2 = 0x4d;
LAB_1008c2c95:
  FUN_100887ce0(0x22,0x68,0x41,"v3_lib.c",uVar2);
  return 0;
}

