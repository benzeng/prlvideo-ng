
void FUN_10035b750(long param_1,QObject *param_2)

{
  long *plVar1;
  long lVar2;
  QObject *pQVar3;
  int *piVar4;
  char *pcVar5;
  int *local_40;
  QObject *local_38;
  int *local_30;
  undefined1 local_21;
  
  lVar2 = QWidget::focusProxy();
  if ((lVar2 != 0) && (pQVar3 = (QObject *)QWidget::focusProxy(), pQVar3 != param_2)) {
    pQVar3 = (QObject *)QWidget::focusProxy();
    QObject::removeEventFilter(pQVar3);
  }
  QObject::removeEventFilter(param_2);
  lVar2 = *(long *)(param_1 + 0x18);
  if (((*(long *)(lVar2 + 0x48) != 0) && (*(int *)(*(long *)(lVar2 + 0x48) + 4) != 0)) &&
     (*(QObject **)(lVar2 + 0x50) == param_2)) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
    (**(code **)(*plVar1 + 0x18))(plVar1,0xb,0);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (((*(long *)(lVar2 + 0x58) != 0) && (*(int *)(*(long *)(lVar2 + 0x58) + 4) != 0)) &&
     (*(QObject **)(lVar2 + 0x60) == param_2)) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x28);
    (**(code **)(*plVar1 + 0x28))(plVar1,0xb);
  }
  QWidget::ungrabGesture(param_2,5);
  QWidget::ungrabGesture(param_2,4);
  FUN_10006b440(&local_30,*(long *)(param_1 + 0x18) + 0x40);
  piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  local_40 = piVar4;
  local_38 = param_2;
  FUN_10035cf90(&local_30,&local_40);
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_21 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_21) {
      operator_delete(piVar4);
    }
  }
  FUN_10035df20(*(undefined8 *)(param_1 + 0x18),&local_30);
  if (1 < DAT_10230ffd0) {
    if (*(undefined8 **)(*(long *)(param_2 + 8) + 0x10) == (undefined8 *)0x0) {
      pcVar5 = "Unknown";
    }
    else {
      (**(code **)**(undefined8 **)(*(long *)(param_2 + 8) + 0x10))();
      pcVar5 = (char *)QMetaObject::className();
    }
    FUN_100df99c0("[HID_CTL]","prl_client_app",2,"grabber %p Unregistered with parent %s",param_2,
                  pcVar5);
  }
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    FUN_10006b5d0(&local_30,local_30);
  }
  return;
}

