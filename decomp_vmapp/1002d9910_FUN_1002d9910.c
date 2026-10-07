
void FUN_1002d9910(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 8) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001002d9928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,*(undefined8 *)(param_1 + 0x10));
  return;
}

