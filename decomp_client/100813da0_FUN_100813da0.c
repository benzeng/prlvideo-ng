
void FUN_100813da0(long *param_1,int param_2,int param_3,long param_4)

{
  if (param_2 == 0) {
    if (param_3 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000100813dc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x120))();
      return;
    }
    if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100813dc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x118))(param_1,**(undefined4 **)(param_4 + 8));
      return;
    }
    if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100813de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1,**(undefined1 **)(param_4 + 8));
      return;
    }
  }
  return;
}

