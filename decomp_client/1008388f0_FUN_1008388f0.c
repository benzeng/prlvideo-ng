
void FUN_1008388f0(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10043fad0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 1:
      FUN_10043fb90(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 2:
      FUN_10043fb60();
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x000100838933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b8))();
      return;
    }
  }
  return;
}

