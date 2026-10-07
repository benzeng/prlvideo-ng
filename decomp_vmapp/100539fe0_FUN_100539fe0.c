
void FUN_100539fe0(long param_1,long *param_2)

{
  bool bVar1;
  
  QMutex::lock();
  if (*param_2 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(long *)(*param_2 + 0x10) != 0;
  }
  *(bool *)(param_1 + 0x10) = bVar1;
  QWaitCondition::wakeAll();
  QMutex::unlock();
  return;
}

