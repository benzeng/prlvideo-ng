
void FUN_100820bc0(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002ad4b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      uVar1 = (**(code **)(*param_1 + 0xc0))();
      break;
    case 2:
      uVar1 = FUN_1002ad3e0();
      break;
    case 3:
      uVar1 = (**(code **)(*param_1 + 200))();
      break;
    default:
      goto switchD_100820be2_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100820be2_default:
  return;
}

