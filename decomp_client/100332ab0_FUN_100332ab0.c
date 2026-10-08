
void FUN_100332ab0(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100332ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x140))(plVar1,param_2);
    return;
  }
  return;
}

