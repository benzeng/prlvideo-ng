
void FUN_10081d9e0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = FUN_1002916e0();
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = FUN_100291660();
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
  return;
}

