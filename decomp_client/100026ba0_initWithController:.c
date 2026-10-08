
/* Function Stack Size: 0x18 bytes */

ID PDAccountTitleButton::initWithController_
             (ID param_1,SEL param_2,CLicenseTitleBarController *param_3)

{
  long lVar1;
  ID IVar2;
  int *piVar3;
  int *piVar4;
  objc_super local_40;
  undefined1 local_29;
  
  local_40.super_class = (class_t *)PTR_PDAccountTitleButton_10226aba0;
  local_40.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,PTR_s_init_102268ca8);
  if (IVar2 != 0) {
    piVar3 = (int *)0x0;
    if (param_3 != (CLicenseTitleBarController *)0x0) {
      piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)param_3);
    }
    lVar1 = _controller;
    piVar4 = *(int **)(IVar2 + _controller);
    if (piVar4 != piVar3) {
      if (piVar3 != (int *)0x0) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
        piVar4 = *(int **)(IVar2 + lVar1);
      }
      if (piVar4 != (int *)0x0) {
        LOCK();
        *piVar4 = *piVar4 + -1;
        local_29 = *piVar4 != 0;
        UNLOCK();
        if ((!(bool)local_29) && (*(void **)(IVar2 + lVar1) != (void *)0x0)) {
          operator_delete(*(void **)(IVar2 + lVar1));
        }
      }
      *(int **)(IVar2 + lVar1) = piVar3;
      *(CLicenseTitleBarController **)(IVar2 + 8 + lVar1) = param_3;
    }
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      local_29 = *piVar3 != 0;
      UNLOCK();
      if (!(bool)local_29) {
        operator_delete(piVar3);
      }
    }
  }
  return IVar2;
}

