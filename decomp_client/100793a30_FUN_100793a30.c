
void FUN_100793a30(long param_1)

{
  long *plVar1;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x20), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0xa0))(plVar1);
    return;
  }
  FUN_100790cf0();
  return;
}

