
void FUN_10035c110(long param_1,undefined8 param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010035c12a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 200))(plVar1,param_2,param_3);
  return;
}

