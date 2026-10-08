
/* Function Stack Size: 0x18 bytes */

void PDToolsBarButtonItem::setVm_(ID param_1,SEL param_2,CVmWrap *param_3)

{
  long *plVar1;
  long lVar2;
  CSignalSelectorBinding *this;
  int *piVar3;
  int *piVar4;
  objc_super local_48;
  undefined1 local_31;
  
  local_48.super_class = (class_t *)PTR_PDToolsBarButtonItem_10226ab98;
  local_48.receiver = param_1;
  _objc_msgSendSuper2(&local_48,PTR_s_setVm__102268e58);
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_updateToolsState_102269710);
  if (((*(long *)(param_1 + _vmToolsStateChangeBinding) != 0) &&
      (*(int *)(*(long *)(param_1 + _vmToolsStateChangeBinding) + 4) != 0)) &&
     (plVar1 = *(long **)(_vmToolsStateChangeBinding + 8 + param_1), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x20))();
  }
  lVar2 = _vmToolsStateChangeBinding;
  this = operator_new(0x18);
  CSignalSelectorBinding::CSignalSelectorBinding
            (this,(QObject *)param_3,"2vmToolsStateChanged(PRL_VM_TOOLS_STATE, PRL_VM_TOOLS_STATE)",
             (objc_object *)param_1,(objc_selector *)PTR_s_updateToolsState_102269710);
  piVar3 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  piVar4 = *(int **)(param_1 + lVar2);
  if (piVar4 != piVar3) {
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
      piVar4 = *(int **)(param_1 + lVar2);
    }
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + -1;
      local_31 = *piVar4 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + lVar2) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + lVar2));
      }
    }
    *(int **)(param_1 + lVar2) = piVar3;
    *(CSignalSelectorBinding **)(param_1 + 8 + lVar2) = this;
  }
  if (piVar3 != (int *)0x0) {
    LOCK();
    *piVar3 = *piVar3 + -1;
    local_31 = *piVar3 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar3);
    }
  }
  return;
}

