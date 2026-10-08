
void FUN_100825d00(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100068ca0(param_1,*(undefined1 *)param_4[1]);
      return;
    case 1:
      FUN_1002ce8c0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100068400();
      return;
    case 3:
      uVar1 = FUN_1002cdca0();
      break;
    case 4:
      uVar1 = FUN_100068900();
      break;
    case 5:
      uVar1 = FUN_1000691e0();
      break;
    case 6:
      uVar1 = FUN_1002cec10();
      break;
    default:
      goto switchD_100825d22_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100825d22_default:
  return;
}

