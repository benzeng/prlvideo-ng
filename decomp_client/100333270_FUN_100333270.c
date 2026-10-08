
void FUN_100333270(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100333285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x68))();
    return;
  }
  return;
}

