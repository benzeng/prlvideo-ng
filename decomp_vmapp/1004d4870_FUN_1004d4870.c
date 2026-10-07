
void FUN_1004d4870(ulong param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    QMutex::lock();
  }
  if ((*(long *)(param_1 + 0x10) != 0) && (*(int *)(param_1 + 0x18) != 0)) {
    QWaitCondition::wait((QMutex *)(param_1 + 8),param_1);
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1 == 0) {
    return;
  }
  QMutex::unlock();
  return;
}

