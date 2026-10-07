
void FUN_1004ed660(QThread *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_metaObject_100bc3920;
  QMutex::~QMutex((QMutex *)(param_1 + 0x30));
  QMutex::~QMutex((QMutex *)(param_1 + 0x28));
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1004ed6ae;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_1004ed6d0(param_1 + 0x20,piVar1);
  }
LAB_1004ed6ae:
  QThread::~QThread(param_1);
  operator_delete(param_1);
  return;
}

