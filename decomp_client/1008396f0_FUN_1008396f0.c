
void FUN_1008396f0(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100839715. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083971f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x000100839729. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b0))();
      return;
    case 3:
      FUN_10046b6f0();
      return;
    case 4:
      FUN_10046b7e0();
      return;
    case 5:
      FUN_10046b840();
      return;
    case 6:
      FUN_10046b930(param_1,*(undefined8 *)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
  }
  return;
}

