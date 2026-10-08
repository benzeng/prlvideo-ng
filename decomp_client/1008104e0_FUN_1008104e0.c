
void FUN_1008104e0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_100214d20(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_100214f00();
      return;
    case 2:
      uVar1 = FUN_100214c50();
      break;
    case 3:
      uVar1 = FUN_100214e50();
      break;
    default:
      goto switchD_100810502_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100810502_default:
  return;
}

