
void FUN_1001c3d40(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021ff050;
  QProcess::~QProcess((QProcess *)(param_1 + 0x20));
  piVar1 = *(int **)(param_1 + 0x10);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_1001c3d8e;
      piVar1 = *(int **)(param_1 + 0x10);
    }
    FUN_1001c45d0(param_1 + 0x10,piVar1);
  }
LAB_1001c3d8e:
  QObject::~QObject(param_1);
  return;
}

