
void FUN_100818820(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10025a970(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_10025a9d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_10025a310();
      break;
    case 3:
      uVar1 = FUN_10025a870();
      break;
    default:
      goto switchD_100818842_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100818842_default:
  return;
}

