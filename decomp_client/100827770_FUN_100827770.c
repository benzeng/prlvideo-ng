
void FUN_100827770(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x0001008277a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002d9640(param_1,*(undefined1 *)param_4[1]);
      return;
    case 2:
      FUN_1002d9c10();
      return;
    case 3:
      FUN_1002d9ca0(param_1,param_4[1]);
      return;
    case 4:
      FUN_1002d9fd0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1002da0a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 6:
      uVar1 = FUN_1002d9ff0();
      break;
    case 7:
      uVar1 = FUN_1002d8e20();
      break;
    default:
      goto switchD_10082779a_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10082779a_default:
  return;
}

