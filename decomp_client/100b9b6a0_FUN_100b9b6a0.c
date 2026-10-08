
void FUN_100b9b6a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_1023118c8 == 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    iVar1 = FUN_100bc14d0();
    if (iVar1 != 0) {
      FUN_100b9b710(param_1,param_2,param_3,0);
      return;
    }
    uVar2 = 0xfffffff8;
  }
  FUN_100b9d470(uVar2,0);
  return;
}

