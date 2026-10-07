
void FUN_1002b1100(long param_1,uint param_2)

{
  uint uVar1;
  
  QMutex::lock();
  if (-1 < *(int *)(param_1 + 0x8c0)) {
    uVar1 = 1 << ((byte)param_2 & 0x1f);
    *(uint *)(param_1 + 0x8cc) = *(uint *)(param_1 + 0x8cc) | uVar1;
    QWaitCondition::wakeOne();
    if ((*(uint *)(param_1 + 0x8cc) >> (param_2 & 0x1f) & 1) != 0) {
      do {
        QWaitCondition::wait((QMutex *)(param_1 + 0x898),param_1 + 0x878);
      } while ((*(uint *)(param_1 + 0x8cc) & uVar1) != 0);
    }
  }
  QMutex::unlock();
  return;
}

