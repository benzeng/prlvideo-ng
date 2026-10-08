
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowToolbarController::_cxx_destruct(ID param_1,SEL param_2)

{
  int *piVar1;
  long lVar2;
  
  _objc_destroyWeak(_coherenceButton + param_1);
  _objc_destroyWeak(_window + param_1);
  lVar2 = _messageProvider;
  piVar1 = *(int **)(param_1 + _messageProvider);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + lVar2));
    }
  }
  lVar2 = _vm;
  piVar1 = *(int **)(param_1 + _vm);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + lVar2));
    }
  }
  lVar2 = _vmConsoleWindow;
  piVar1 = *(int **)(param_1 + _vmConsoleWindow);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
      operator_delete(*(void **)(param_1 + lVar2));
    }
  }
  return;
}

