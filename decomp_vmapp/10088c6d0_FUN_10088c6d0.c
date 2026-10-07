
undefined8 FUN_10088c6d0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_2 == 6) {
    iVar1 = FUN_100886f00(param_4,8);
    uVar2 = 0;
    if (0 < iVar1) {
      FUN_10082a900(param_4);
      uVar2 = 1;
    }
  }
  return uVar2;
}

