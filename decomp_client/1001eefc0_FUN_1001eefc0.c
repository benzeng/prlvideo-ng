
void FUN_1001eefc0(QThread *param_1,undefined8 *param_2,undefined8 param_3,QObject *param_4)

{
  int *piVar1;
  
  QThread::QThread(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_1021ffd20;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x24] = (QThread)0x0;
  return;
}

