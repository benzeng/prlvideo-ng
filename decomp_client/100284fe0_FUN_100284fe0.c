
void FUN_100284fe0(long *param_1,int param_2)

{
  long *plVar1;
  
  if ((param_2 < 0) && (plVar1 = (long *)param_1[5], plVar1 != (long *)0x0)) {
    param_1[5] = 0;
    (**(code **)(*plVar1 + 0x20))();
  }
                    /* WARNING: Could not recover jumptable at 0x00010028501d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,param_2);
  return;
}

