
void FUN_10081ca00(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = FUN_10028a9c0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
    else if (param_3 == 0) {
      FUN_10028abc0(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

