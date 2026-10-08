
void FUN_100859de0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = FUN_10075b250(param_1,*(undefined8 *)param_4[1],param_4[2]);
    }
    else {
      if (param_3 != 0) {
        return;
      }
      uVar1 = FUN_10075b1e0(param_1,*(undefined8 *)param_4[1],*(undefined4 *)param_4[2]);
    }
    if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
      *(undefined8 *)*param_4 = uVar1;
    }
  }
  return;
}

