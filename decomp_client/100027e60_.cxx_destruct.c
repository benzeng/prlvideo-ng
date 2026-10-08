
/* Function Stack Size: 0x10 bytes */

void PDAccountTitleButton::_cxx_destruct(ID param_1,SEL param_2)

{
  int *piVar1;
  long lVar2;
  
  _objc_destroyWeak(_arrowButton + param_1);
  _objc_destroyWeak(_nameButton + param_1);
  lVar2 = _controller;
  piVar1 = *(int **)(param_1 + _controller);
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

