
undefined8 FUN_1008c2a40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_1011c2a08 == 0) && (DAT_1011c2a08 = FUN_100884d30(FUN_1008c2ad0), DAT_1011c2a08 == 0)) {
    uVar2 = 0x4d;
  }
  else {
    iVar1 = FUN_1008852e0(DAT_1011c2a08,param_1);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = 0x51;
  }
  FUN_100887ce0(0x22,0x68,0x41,"v3_lib.c",uVar2);
  return 0;
}

