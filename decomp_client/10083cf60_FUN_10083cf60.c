
void FUN_10083cf60(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083cf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1c0))();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083cf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 2:
      FUN_100545f50(param_1,**(undefined1 **)(param_4 + 8));
      return;
    case 3:
      FUN_100545980();
      return;
    case 4:
      FUN_1005452f0();
      return;
    case 5:
      FUN_100545fc0(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

