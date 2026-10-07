
undefined8 FUN_10089f940(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != (long *)0x0) {
    if ((param_3 != -1) && (param_1[1] == 0)) {
      lVar1 = FUN_1008a8980();
      param_1[1] = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    if (*param_1 != 0) {
      FUN_100899890();
    }
    *param_1 = param_2;
    uVar2 = 1;
    if (param_3 != 0) {
      if (param_3 == -1) {
        if (param_1[1] != 0) {
          FUN_1008a89a0();
          param_1[1] = 0;
        }
      }
      else {
        FUN_10089b8d0(param_1[1],param_3,param_4);
      }
    }
  }
  return uVar2;
}

