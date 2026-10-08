
/* Function Stack Size: 0x10 bytes */

void CVmConsoleWindowTitleBarController::dealloc(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_38;
  undefined *local_30;
  undefined1 local_21;
  
  IVar5 = NSNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                     PTR_s_defaultCenter_102268ba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar6,PTR_s_removeObserver__102268c30,param_1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  lVar4 = _vm;
  piVar2 = *(int **)(param_1 + _vm);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar3 = *(void **)(param_1 + lVar4), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    puVar1 = (undefined8 *)(param_1 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  lVar4 = _vmConsoleWindow;
  piVar2 = *(int **)(param_1 + _vmConsoleWindow);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar3 = *(void **)(param_1 + lVar4), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    puVar1 = (undefined8 *)(param_1 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  lVar4 = _messageProvider;
  piVar2 = *(int **)(param_1 + _messageProvider);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar3 = *(void **)(param_1 + lVar4), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    puVar1 = (undefined8 *)(param_1 + lVar4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  setEditVmButton_(param_1,PTR_s_setEditVmButton__102268c38,0);
  setBuyButton_(param_1,PTR_s_setBuyButton__102268c40,0);
  setBuyButtonView_(param_1,PTR_s_setBuyButtonView__102268c48,0);
  setCoherenceButton_(param_1,PTR_s_setCoherenceButton__102268c50,0);
  setTextTitleMessage_(param_1,PTR_s_setTextTitleMessage__102268c58,0);
  local_30 = PTR_CVmConsoleWindowTitleBarController_10226ab48;
  local_38 = param_1;
  CTitleBarController::dealloc((ID)&local_38,PTR_s_dealloc_102268c60);
  return;
}

