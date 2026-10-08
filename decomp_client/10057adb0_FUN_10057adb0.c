
void FUN_10057adb0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021f3a50;
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  piVar1 = *(int **)(param_1 + 0x30);
  if (*piVar1 != -1) {
    if (*piVar1 != 0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_10057adff;
      piVar1 = *(int **)(param_1 + 0x30);
    }
    FUN_1001c45d0(param_1 + 0x30,piVar1);
  }
LAB_10057adff:
  FUN_1000fe670(param_1 + 0x28);
  QObject::~QObject(param_1);
  return;
}

