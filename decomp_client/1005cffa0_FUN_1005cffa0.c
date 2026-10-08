
void FUN_1005cffa0(long param_1,undefined1 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001005cffb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return;
}

