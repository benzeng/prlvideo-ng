
void FUN_10007c720(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long in_RAX;
  undefined8 uVar4;
  long local_28;
  
  local_28 = in_RAX;
  uVar4 = FUN_100078040();
  cVar2 = FUN_10007a7a0(uVar4);
  if (cVar2 != '\0') {
    uVar4 = FUN_100078040();
    QObject::connect(&local_28,uVar4,"2resumeFinished()",param_1,"1onWindowResumed()",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    return;
  }
  QWidget::setMinimumWidth((int)*(undefined8 *)(param_1 + 0x10));
  iVar3 = FUN_100080630(*(undefined8 *)(param_1 + 0x28));
  puVar1 = PTR__objc_msgSend_1021e1c68;
  if (1 < iVar3) {
    uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                      (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
    (*(code *)puVar1)(uVar4,PTR_s_mode_102269ef8);
    QWidget::setMinimumHeight((int)*(undefined8 *)(param_1 + 0x10));
    QWidget::setMaximumHeight((int)*(undefined8 *)(param_1 + 0x10));
    return;
  }
  QWidget::setFixedHeight((int)*(undefined8 *)(param_1 + 0x10));
  return;
}

