
undefined8 FUN_1003651c0(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  
  if (3 < DAT_10230ffd0) {
    uVar3 = QApplication::focusWidget();
    lVar4 = QApplication::focusWidget();
    if (lVar4 == 0) {
      pcVar6 = "";
    }
    else {
      puVar5 = (undefined8 *)QApplication::focusWidget();
      (**(code **)*puVar5)(puVar5);
      pcVar6 = (char *)QMetaObject::className();
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",4,
                  "Process focus out. The widget which has taken the focus: %p %s",uVar3,pcVar6);
  }
  iVar2 = QFocusEvent::reason();
  if (iVar2 == 1) {
    if (3 < DAT_10230ffd0) {
      FUN_100df99c0("[HID_CTL]","prl_client_app",4,"Ignore lost focus by tab");
    }
  }
  else {
    QWidget::focusWidget();
    lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1290);
    iVar2 = QFocusEvent::reason();
    cVar1 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
    if ((cVar1 == '\0') && (lVar4 == 0 || iVar2 != 0)) {
      (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),4);
    }
  }
  return 0;
}

