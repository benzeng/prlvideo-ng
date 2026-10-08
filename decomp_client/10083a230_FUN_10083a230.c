
void FUN_10083a230(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083a255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
                    /* WARNING: Could not recover jumptable at 0x00010083a25f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d8))();
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x00010083a269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1b0))();
      return;
    case 3:
      FUN_1004aabe0();
      return;
    case 4:
      FUN_1004aad70(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
  }
  return;
}

