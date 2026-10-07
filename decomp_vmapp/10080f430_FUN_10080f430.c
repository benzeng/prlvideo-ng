
undefined8 FUN_10080f430(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100815300(*param_1,param_1 + 1,param_1 + 2,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_100885600(lVar2);
    uVar3 = 1;
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0x10d,0xb9,"ssl_lib.c",0x50e);
      uVar3 = 0;
    }
  }
  return uVar3;
}

