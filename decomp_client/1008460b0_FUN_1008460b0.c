
void FUN_1008460b0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100629d30();
      return;
    case 1:
      FUN_100629f00(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_10062a290(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_10062a400();
      return;
    case 4:
      uVar1 = FUN_100629e00();
      break;
    case 5:
      uVar1 = FUN_10062a000();
      break;
    case 6:
      uVar1 = FUN_10062a3d0();
      break;
    default:
      goto switchD_1008460d2_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_1008460d2_default:
  return;
}

