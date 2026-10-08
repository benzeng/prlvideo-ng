
void FUN_100827330(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002d8400(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      uVar1 = FUN_1002d7fb0();
      break;
    case 2:
      uVar1 = FUN_1002d80a0();
      break;
    case 3:
      uVar1 = FUN_1002d8340();
      break;
    default:
      goto switchD_100827352_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100827352_default:
  return;
}

