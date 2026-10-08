
void FUN_10081b050(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      uVar1 = FUN_100275660();
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar1;
      }
    }
    else if (param_3 == 0) {
      FUN_100275bb0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    }
  }
  return;
}

