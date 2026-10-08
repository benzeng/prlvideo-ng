
void FUN_100a1e9b0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102237950;
  piVar1 = *(int **)(param_1 + 0x10);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100a1e9f1;
      piVar1 = *(int **)(param_1 + 0x10);
    }
    FUN_100a1eb90(param_1 + 0x10,piVar1);
  }
LAB_100a1e9f1:
  QObject::~QObject(param_1);
  return;
}

