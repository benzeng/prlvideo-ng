
void FUN_10081f650(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10029faa0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_10029f730(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      uVar1 = FUN_10029f750();
      break;
    case 3:
      uVar1 = FUN_10029f860();
      break;
    default:
      goto switchD_10081f672_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081f672_default:
  return;
}

