
void FUN_1000f8df0(long param_1,uint param_2)

{
  int iVar1;
  
  QMutex::lock();
  if (*(int *)(param_1 + 0x5c) == 3) {
    if ((*(uint *)(param_1 + 100) >> (param_2 & 0x1f) & 1) == 0) {
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1 << ((byte)param_2 & 0x1f);
      iVar1 = *(int *)(param_1 + 0x60) + 1;
      *(int *)(param_1 + 0x60) = iVar1;
      if (iVar1 == *(int *)(param_1 + 0x58)) {
        QTimer::stop();
        FUN_1000f8af0(param_1);
      }
    }
  }
  QMutex::unlock();
  return;
}

