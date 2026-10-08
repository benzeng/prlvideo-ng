
void FUN_1008382d0(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10042edf0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 1:
      FUN_10042ef00(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 2:
      FUN_10042ee10(param_1,*(undefined8 *)(param_4 + 8));
      return;
    case 3:
      FUN_10042ea00();
      return;
    case 4:
                    /* WARNING: Could not recover jumptable at 0x00010083831b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

