
void FUN_100831090(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220d4e0;
  QTimer::~QTimer((QTimer *)(param_1 + 0x30));
  piVar1 = *(int **)(param_1 + 0x20);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1008310da;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_100352600(param_1 + 0x20,piVar1);
  }
LAB_1008310da:
  QObject::~QObject(param_1);
  return;
}

