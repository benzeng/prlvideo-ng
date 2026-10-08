
void FUN_1002ea050(long param_1)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    CSdkRequest::cancel();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

