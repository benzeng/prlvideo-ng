
void FUN_10022c670(long param_1,undefined4 param_2)

{
  long *plVar1;
  
  if (((*(long *)(param_1 + 0x50) != 0) && (*(int *)(*(long *)(param_1 + 0x50) + 4) != 0)) &&
     (plVar1 = *(long **)(param_1 + 0x58), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x78))(plVar1,param_2);
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

