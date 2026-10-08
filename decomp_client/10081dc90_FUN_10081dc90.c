
void FUN_10081dc90(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = FUN_100292020();
    }
    else if (param_3 == 1) {
      uVar1 = FUN_100291f50();
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = FUN_100291ec0();
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
  return;
}

