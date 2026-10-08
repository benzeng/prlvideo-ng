
void FUN_100838fb0(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100838fd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x000100838fdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    case 2:
      FUN_100451460();
      return;
    case 3:
      FUN_100451580();
      return;
    case 4:
      FUN_100451520(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

