
void FUN_100034c80(long param_1)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x88) = iVar1;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Resumed m_tmpRevisionTable = %d");
    iVar1 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar1 + 1;
  QMutex::unlock();
  return;
}

