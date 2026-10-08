
void FUN_100859c30(undefined8 param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    return;
  }
  if (param_3 == 2) {
    uVar2 = FUN_10075b1b0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
  }
  else {
    if (param_3 == 1) {
      uVar1 = FUN_10075b190(param_1,*(undefined8 *)param_4[1]);
      if ((undefined4 *)*param_4 == (undefined4 *)0x0) {
        return;
      }
      *(undefined4 *)*param_4 = uVar1;
      return;
    }
    if (param_3 != 0) {
      return;
    }
    uVar2 = FUN_10075b170();
  }
  if ((undefined8 *)*param_4 != (undefined8 *)0x0) {
    *(undefined8 *)*param_4 = uVar2;
  }
  return;
}

