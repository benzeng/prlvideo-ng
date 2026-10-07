
void FUN_1002af430(long param_1,int param_2)

{
  int iVar1;
  
  QMutex::lock();
  iVar1 = *(int *)(param_1 + 0x8c0);
  if ((param_2 != 0) && (iVar1 == 0)) {
    QWaitCondition::wakeOne();
    iVar1 = *(int *)(param_1 + 0x8c0);
  }
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x8c0) = param_2;
  }
  QMutex::unlock();
  return;
}

