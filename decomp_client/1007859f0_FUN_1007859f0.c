
void FUN_1007859f0(long param_1,long param_2)

{
  long *plVar1;
  long local_10;
  
  if (param_2 != 0) {
    local_10 = param_2;
    plVar1 = (long *)FUN_100786040(param_1 + 0x18,&local_10);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100785a1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  return;
}

