
/* Function Stack Size: 0x10 bytes */

void PDBarButtonItem::reset(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = _vm;
  piVar2 = *(int **)(param_1 + _vm);
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (pvVar3 = *(void **)(param_1 + lVar5), pvVar3 != (void *)0x0)) {
      operator_delete(pvVar3);
    }
    puVar1 = (undefined8 *)(param_1 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  puVar4 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_setItemToolTip__1022695b0,0);
  (*(code *)puVar4)(param_1,PTR_s_setImage__102268cd0,0);
  uVar6 = (*(code *)puVar4)(PTR__OBJC_CLASS___NSNotificationCenter_10226a7a8,
                            PTR_s_defaultCenter_102268ba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar4)(uVar6,PTR_s_removeObserver__102268c30,param_1);
  (*(code *)PTR__objc_release_1021e1c70)(uVar6);
  return;
}

