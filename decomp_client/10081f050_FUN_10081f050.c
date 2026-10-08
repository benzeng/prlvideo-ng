
void FUN_10081f050(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010081f085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))();
      return;
    case 1:
      FUN_10029bda0();
      return;
    case 2:
      FUN_10029bde0();
      return;
    case 3:
      FUN_10029c560();
      return;
    case 4:
      FUN_10029d9f0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_10029de80();
      return;
    case 6:
      uVar1 = FUN_10029bb60();
      break;
    case 7:
      uVar1 = FUN_10029bbc0();
      break;
    case 8:
      uVar1 = FUN_10029c390();
      break;
    case 9:
      uVar1 = FUN_10029c780();
      break;
    default:
      goto switchD_10081f07a_default;
    }
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar1;
    }
  }
switchD_10081f07a_default:
  return;
}

