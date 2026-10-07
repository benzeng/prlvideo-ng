
void FUN_100299f40(long param_1)

{
  long *plVar1;
  int iVar2;
  
  if (((*(long *)(param_1 + 0x118) != 0) &&
      (plVar1 = *(long **)(param_1 + 0x128), plVar1 != (long *)0x0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,1), -1 < iVar2)) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),1);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),2);
      if (-1 < iVar2) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),2);
        if (-1 < iVar2) {
          *(undefined4 *)(param_1 + 0x120) = 2;
          return;
        }
        (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),1);
      }
      (**(code **)(**(long **)(param_1 + 0x118) + 0x30))(*(long **)(param_1 + 0x118),0);
    }
                    /* WARNING: Could not recover jumptable at 0x000100299ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x128) + 0x30))(*(long **)(param_1 + 0x128),0);
    return;
  }
  return;
}

