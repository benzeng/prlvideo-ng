
undefined8 FUN_10023dcc0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  QWidget *pQVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  pQVar3 = (QWidget *)FUN_100323e30(uVar4,0);
  if (pQVar3 == (QWidget *)0x0) {
LAB_10023de40:
    FUN_10023ded0(param_1);
    return 0;
  }
  cVar1 = MacUtils::isWindowInNativeFullScreen(pQVar3);
  if ((cVar1 != '\0') && (cVar1 = FUN_1003798b0(pQVar3), cVar1 == '\0')) {
    QWidget::activateWindow();
    goto LAB_10023de40;
  }
  CAbstractTask::setWaitForSubTaskCompletion();
  FUN_10023e000(param_1,pQVar3,1);
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
  FUN_100df99c0("","prl_client_app",0,
                "Start animate entering in native fullscreen. Vm [%s], display [%d]",pQVar5,uVar2);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023ddda;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_10023ddda:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10023de0a;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10023de0a:
  cVar1 = MacUtils::isWindowInNativeFullScreen(pQVar3);
  if (cVar1 != '\0') {
    return 0;
  }
  QWidget::show();
  QWidget::update();
  QWidget::activateWindow();
  MacUtils::toogleNativeFullScreen(pQVar3);
  return 0;
}

