
void FUN_100818ea0(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100818ed5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_1002626d0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_100262470();
      return;
    case 3:
      FUN_1002624d0();
      return;
    case 4:
      FUN_1002624f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_1002623a0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 6:
      uVar1 = FUN_100260de0();
      break;
    case 7:
      uVar1 = FUN_1002610b0();
      break;
    case 8:
      uVar1 = FUN_100261d50();
      break;
    case 9:
      uVar1 = FUN_100262240();
      break;
    default:
      goto switchD_100818eca_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_100818eca_default:
  return;
}

