
void FUN_100228fa0(long param_1)

{
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    CSdkRequest::cancel();
    return;
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

