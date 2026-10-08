
void FUN_10007cc70(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  
  QObject::sender();
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10222fe70);
  if (lVar2 != 0) {
    local_28 = FUN_10007c850(param_1);
    FUN_10007c720(param_1,&local_28);
    QWidget::resize(*(QSize **)(param_1 + 0x10));
    puVar1 = PTR__objc_msgSend_1021e1c68;
    uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
    uVar4 = FUN_10008bad0(lVar2);
    (*(code *)puVar1)(uVar3,PTR_s_selectItem__102269f08,uVar4);
  }
  return;
}

