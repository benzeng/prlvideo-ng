
void FUN_1000eee00(QThread *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f8fb0;
  QThread::wait((ulong)param_1);
  piVar1 = *(int **)(param_1 + 0x18);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1000eee51;
      piVar1 = *(int **)(param_1 + 0x18);
    }
    FUN_1000ef250(param_1 + 0x18,piVar1);
  }
LAB_1000eee51:
  QMutex::~QMutex((QMutex *)(param_1 + 0x10));
  QThread::~QThread(param_1);
  return;
}

