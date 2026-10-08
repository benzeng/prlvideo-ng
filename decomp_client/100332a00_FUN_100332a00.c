
void FUN_100332a00(long param_1,undefined1 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x48);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100332a23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x110))(plVar1,param_2,param_3);
    return;
  }
  return;
}

