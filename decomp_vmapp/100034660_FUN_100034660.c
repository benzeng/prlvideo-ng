
void FUN_100034660(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x2c);
  *(int *)(param_1 + 0x50) = iVar1;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Resumed m_tmpRevisionDefault = %d");
    iVar1 = *(int *)(param_1 + 0x50);
  }
  *(int *)(param_1 + 0x50) = iVar1 + 1;
  QMutex::unlock();
  return;
}

