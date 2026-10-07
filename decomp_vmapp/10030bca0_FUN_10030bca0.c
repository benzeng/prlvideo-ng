
void FUN_10030bca0(undefined8 *param_1,undefined1 param_2)

{
  long lVar1;
  
  if ((param_1[2] == 0) || (param_1[4] == 0)) {
    param_1[4] = 0;
  }
  else {
    lVar1 = FUN_1002adb30(*param_1);
    FUN_1002fab50(*param_1,param_1 + 0x14cd,param_2);
    param_1[4] = 0;
    if (lVar1 != param_1[2]) {
      FUN_1002adb30(*param_1,lVar1);
      return;
    }
  }
  return;
}

