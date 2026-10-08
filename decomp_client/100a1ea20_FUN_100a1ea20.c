
void FUN_100a1ea20(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_102237950;
  piVar1 = *(int **)(param_1 + 0x10);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_100a1ea61;
      piVar1 = *(int **)(param_1 + 0x10);
    }
    FUN_100a1eb90(param_1 + 0x10,piVar1);
  }
LAB_100a1ea61:
  QObject::~QObject(param_1);
  operator_delete(param_1);
  return;
}

