
void FUN_100327dc0(QObject *param_1)

{
  int *piVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_10220b9e0;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_100df99c0("","prl_client_app",0,"(!) Warning: A not closed gate is being destroyed!");
  }
  QTimer::~QTimer((QTimer *)(param_1 + 0x28));
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + 0x10) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + 0x10));
    }
  }
  QObject::~QObject(param_1);
  return;
}

