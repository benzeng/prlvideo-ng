
void FUN_1008479b0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0xc) {
    if (param_3 == 0) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = FUN_10062e910();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
    else if (param_3 == 1) {
      uVar1 = FUN_10062e6c0();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
    else if (param_3 == 0) {
      FUN_10062e790(param_1,*(undefined4 *)param_4[1]);
      return;
    }
  }
  return;
}

