
void FUN_10081ae00(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010081ae2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      uVar1 = FUN_100274d20();
      break;
    case 2:
      uVar1 = FUN_100274d90();
      break;
    case 3:
      uVar1 = FUN_100274f00();
      break;
    case 4:
      uVar1 = FUN_100274fd0();
      break;
    default:
      goto switchD_10081ae22_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081ae22_default:
  return;
}

