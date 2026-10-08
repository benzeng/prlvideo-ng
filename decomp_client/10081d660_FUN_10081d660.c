
void FUN_10081d660(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10028f390(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_1002900f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_1002910e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      uVar1 = FUN_10028ec80();
      break;
    case 4:
      uVar1 = FUN_10028edd0();
      break;
    case 5:
      uVar1 = FUN_10028f1c0();
      break;
    case 6:
      uVar1 = FUN_10028f000();
      break;
    case 7:
      uVar1 = FUN_10028f680();
      break;
    case 8:
      uVar1 = FUN_10028fec0();
      break;
    case 9:
      uVar1 = FUN_100290360();
      break;
    case 10:
      uVar1 = FUN_100291300();
      break;
    default:
      goto switchD_10081d68a_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081d68a_default:
  return;
}

