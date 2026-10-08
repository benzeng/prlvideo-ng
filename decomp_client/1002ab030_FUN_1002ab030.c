
void FUN_1002ab030(long param_1,undefined4 param_2)

{
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    FUN_1005a82a0(*(long *)(param_1 + 0x40),param_2);
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

