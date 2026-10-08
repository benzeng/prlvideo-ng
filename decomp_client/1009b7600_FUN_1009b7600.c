
void FUN_1009b7600(QThread *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
                  QObject *param_5)

{
  int *piVar1;
  
  QThread::QThread(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102235b40;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*param_2 != 0) {
    *(long *)(param_1 + 0x10) = *param_2;
    (*DAT_102310a48)();
  }
  piVar1 = (int *)*param_3;
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0x20) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}

