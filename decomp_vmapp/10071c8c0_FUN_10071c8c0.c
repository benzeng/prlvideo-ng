
void FUN_10071c8c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (DAT_1011ccb40 == 0) {
    uVar2 = 0xfffffffa;
  }
  else {
    iVar1 = FUN_1007426f0();
    if (iVar1 != 0) {
      FUN_10071c930(param_1,param_2,param_3,0);
      return;
    }
    uVar2 = 0xfffffff8;
  }
  FUN_10071e690(uVar2,0);
  return;
}

