
void FUN_1008238e0(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 2) {
      uVar1 = FUN_1002c65c0();
    }
    else {
      if (param_3 != 1) {
        if (param_3 != 0) {
          return;
        }
        FUN_1002c5460(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
        return;
      }
      uVar1 = FUN_1002c6510();
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
  return;
}

