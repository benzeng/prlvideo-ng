
undefined1 FUN_100796350(char *param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  QMutex::lock();
  *param_3 = 0;
  if (*param_1 == '\0') {
    uVar1 = 1;
    if (*(int *)(param_1 + 4) == 6) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      if (param_2 == -1) {
        uVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x28),(ulong)(param_1 + 0x20));
      }
      else {
        uVar1 = QWaitCondition::wait((QMutex *)(param_1 + 0x28),(ulong)(param_1 + 0x20));
      }
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if (*param_1 != '\0') {
        *param_1 = '\0';
        *param_3 = 1;
      }
    }
  }
  else {
    *param_1 = '\0';
    *param_3 = 1;
    uVar1 = 1;
  }
  QMutex::unlock();
  return uVar1;
}

