
void FUN_1002b40b0(long param_1)

{
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (*(long *)(param_1 + 0x28) != 0)) {
    CSpotlightWrapper::stopSearch();
  }
  CAbstractTask::terminate((int)param_1);
  return;
}

