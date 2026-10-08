
void FUN_10081f390(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = FUN_10029e180();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
    else {
      if (param_3 == 1) {
        FUN_10029eb40(param_1,*(undefined8 *)param_4[1],param_4[2]);
        return;
      }
      if (param_3 == 0) {
        FUN_10029edf0();
        return;
      }
    }
  }
  return;
}

