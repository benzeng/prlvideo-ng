
/* Function Stack Size: 0x10 bytes */

void PDAccountTitleButton::dealloc(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  objc_super local_30;
  undefined1 local_19;
  
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_removeButton_102269718);
  lVar4 = _controller;
  piVar2 = *(int **)(param_1 + _controller);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_19 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_19) && (pvVar3 = *(void **)(param_1 + lVar4), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    puVar1 = (undefined8 *)(param_1 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  local_30.super_class = (class_t *)PTR_PDAccountTitleButton_10226aba0;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_102268c60);
  return;
}

