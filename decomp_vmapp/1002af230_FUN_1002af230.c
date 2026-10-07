
void FUN_1002af230(long param_1,uint param_2,char param_3)

{
  if (((*(char *)(param_1 + 0x8d0) == '\0') &&
      (*(char *)(param_1 + 0x9dc + (ulong)param_2 * 0x8f0) != param_3)) &&
     (*(char *)(param_1 + 0x9dc + (ulong)param_2 * 0x8f0) = param_3, param_3 != '\0')) {
    QMutex::lock();
    *(uint *)(param_1 + 0x8c8) = *(uint *)(param_1 + 0x8c8) | 1 << ((byte)param_2 & 0x1f);
    QWaitCondition::wakeOne();
    QMutex::unlock();
    return;
  }
  return;
}

