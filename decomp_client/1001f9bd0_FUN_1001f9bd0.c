
void FUN_1001f9bd0(long param_1)

{
  if (((*(long *)(param_1 + 0x38) != 0) && (*(int *)(*(long *)(param_1 + 0x38) + 4) != 0)) &&
     (*(long *)(param_1 + 0x40) != 0)) {
    CSdkRequest::cancel();
    return;
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

