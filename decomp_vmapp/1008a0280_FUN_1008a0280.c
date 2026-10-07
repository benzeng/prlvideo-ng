
long FUN_1008a0280(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_38;
  
  local_38 = *param_2;
  lVar2 = FUN_1008a5f10(0,&local_38,param_3,&DAT_100be10c8);
  if (lVar2 != 0) {
    lVar3 = FUN_10089fd00(lVar2);
    FUN_1008a4c40(lVar2,&DAT_100be10c8);
    uVar1 = local_38;
    if (lVar3 != 0) {
      lVar2 = FUN_100892350(lVar3);
      FUN_1008924e0(lVar3);
      if (lVar2 == 0) {
        return 0;
      }
      *param_2 = uVar1;
      if (param_1 == (long *)0x0) {
        return lVar2;
      }
      FUN_100863f80(*param_1);
      *param_1 = lVar2;
      return lVar2;
    }
  }
  return 0;
}

