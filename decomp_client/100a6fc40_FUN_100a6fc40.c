
undefined1 FUN_100a6fc40(long param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  QMutex::lock();
  *param_3 = 0;
  if (*(char *)(param_1 + 1) == '\0') {
    uVar1 = 1;
    if (*(int *)(param_1 + 8) == 10) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      if (param_2 == -1) {
        uVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x30),param_1 + 0x20U);
      }
      else {
        uVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x30),param_1 + 0x20U);
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
      if (*(char *)(param_1 + 1) != '\0') {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_3 = 1;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_3 = 1;
    uVar1 = 1;
  }
  QMutex::unlock();
  return uVar1;
}

