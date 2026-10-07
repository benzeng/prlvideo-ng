
undefined8 FUN_10080f490(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_100815300(**(undefined8 **)(param_1 + 0x170),param_1 + 0xb8,param_1 + 0xc0,param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar1 = FUN_100885600(lVar2);
    uVar3 = 1;
    if (iVar1 == 0) {
      FUN_100887ce0(0x14,0x10f,0xb9,"ssl_lib.c",0x51f);
      uVar3 = 0;
    }
  }
  return uVar3;
}

