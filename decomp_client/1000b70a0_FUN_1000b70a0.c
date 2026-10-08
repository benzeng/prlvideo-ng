
void FUN_1000b70a0(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x88))();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000b70b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(plVar1);
    return;
  }
  return;
}

