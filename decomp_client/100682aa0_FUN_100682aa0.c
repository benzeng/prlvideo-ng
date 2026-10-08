
void FUN_100682aa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  if (((*(long *)(param_1 + 0x130) != 0) && (*(int *)(*(long *)(param_1 + 0x130) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x138), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100682ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,0x80000275,param_3,*(code **)(*plVar1 + 0x78));
    return;
  }
  if (((*(long *)(param_1 + 0x120) != 0) && (*(int *)(*(long *)(param_1 + 0x120) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x128), plVar1 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100682aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x78))(plVar1,0x80000275);
    return;
  }
  return;
}

