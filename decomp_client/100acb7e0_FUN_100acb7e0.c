
void FUN_100acb7e0(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_100ae50a0(param_2,param_3);
  if (plVar2 != (long *)0x0) {
    iVar1 = FUN_100ae5050(plVar2);
    if (iVar1 - 2U < 2) {
      FUN_100ad0230(*(undefined8 *)(param_1 + 0x78),plVar2);
    }
    else if (iVar1 == 1) {
      FUN_100acb840(param_1,plVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x000100acb839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2);
    return;
  }
  return;
}

