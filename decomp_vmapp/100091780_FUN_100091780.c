
void FUN_100091780(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10818);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
  }
  plVar1 = *(long **)(param_1 + 0x10810);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001000917be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
    return;
  }
  return;
}

