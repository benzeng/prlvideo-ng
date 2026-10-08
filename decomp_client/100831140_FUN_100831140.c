
void FUN_100831140(QObject *param_1)

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
      if (*piVar1 != 0) goto LAB_10083118a;
      piVar1 = *(int **)(param_1 + 0x20);
    }
    FUN_100352600(param_1 + 0x20,piVar1);
  }
LAB_10083118a:
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

