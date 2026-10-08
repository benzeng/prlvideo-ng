
void FUN_1008155b0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100240e00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002407e0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_100241030();
      return;
    case 3:
      uVar1 = FUN_100240d60();
      break;
    case 4:
      uVar1 = FUN_100240800();
      break;
    case 5:
      uVar1 = FUN_100240150();
      break;
    case 6:
      uVar1 = FUN_100240650();
      break;
    case 7:
      uVar1 = FUN_100240e40();
      break;
    default:
      goto switchD_1008155d2_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_1008155d2_default:
  return;
}

