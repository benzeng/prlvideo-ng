
undefined8 FUN_10023b480(QObject *param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  QObject *pQVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (param_2 != 0) {
    pQVar3 = (QObject *)FUN_10037a510(param_2);
    QObject::disconnect(pQVar3,"2windowDidExitFullScreen()",param_1,"1onDidExitNativeFullScreen()");
    cVar1 = QWidget::hasFocus();
    if (cVar1 != '\0') {
      param_1[0x34] = (QObject)0x1;
    }
    if (*(int *)(param_1 + 0x28) == 2) {
      return 0;
    }
    FUN_100379880(param_2);
    return 0;
  }
  if (DAT_10230ffd0 < 1) {
    return 0;
  }
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_38,uVar4);
  QString::toLocal8Bit();
  pQVar5 = local_30 + *(long *)(local_30 + 0x10);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar2 = FUN_100323e20(uVar4);
  FUN_100df99c0("","prl_client_app",1,
                "Inconsistency detected on switch VM\'s [%s] display [%d] to windowed mode. Display widget doesn\'t exist and cannot be created!"
                ,pQVar5,uVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023b59e;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10023b59e:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return 0;
}

