
void FUN_100846a50(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10062b4d0();
      return;
    case 1:
      FUN_10062b7d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_10062c6a0();
      return;
    case 3:
      uVar1 = FUN_10062b530();
      break;
    case 4:
      uVar1 = FUN_10062c670();
      break;
    default:
      goto switchD_100846a72_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100846a72_default:
  return;
}

