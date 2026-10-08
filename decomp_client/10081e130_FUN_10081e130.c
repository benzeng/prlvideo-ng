
void FUN_10081e130(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002944b0();
      return;
    case 1:
      uVar1 = FUN_1002936f0();
      break;
    case 2:
      uVar1 = FUN_100293890();
      break;
    case 3:
      uVar1 = FUN_1002942c0();
      break;
    default:
      goto switchD_10081e152_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081e152_default:
  return;
}

