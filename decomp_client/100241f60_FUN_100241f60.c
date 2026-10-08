
undefined4 FUN_100241f60(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  QSize *pQVar5;
  QString *pQVar6;
  long lVar7;
  QArrayData *local_48;
  undefined8 local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar2 = CAbstractTask::getCurrentSubTask();
  switch(uVar2) {
  case 0:
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask Prepare.");
    FUN_100241d80(param_1);
    break;
  case 1:
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask ShowProgressScreen.");
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_10018c280(uVar3);
    uVar4 = FUN_100319d40(uVar3);
    uVar3 = 0;
    FUN_10035b1b0(uVar4,1,0);
    uVar4 = FUN_100370280();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_38,uVar3);
    pQVar5 = (QSize *)FUN_1003704b0(uVar4,&local_38,DAT_100e152b8);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1002420ac;
      }
      QArrayData::deallocate(local_38,2,8);
    }
LAB_1002420ac:
    if (pQVar5 != (QSize *)0x0) {
      uVar3 = FUN_10036da80(pQVar5);
      local_40 = CONCAT44((int)((ulong)uVar3 >> 0x20) + *(int *)PTR_PD10_Height_1021e14d8,
                          *(int *)PTR_PD10_Width_1021e14d0 + (int)uVar3);
      QWidget::resize(pQVar5);
      WidgetUtils::setWindowResizeEnabled((QWidget *)pQVar5,false);
    }
    FUN_100815b00(param_1);
    iVar1 = *(int *)(param_1 + 0x58);
    uVar2 = *(undefined4 *)(param_1 + 0x5c);
    if (iVar1 < 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
      lVar7 = *(long *)(param_1 + 0x50);
      if (-1 < *(int *)(lVar7 + 0x10)) {
        QTimer::stop();
        lVar7 = *(long *)(param_1 + 0x50);
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      QTimer::start((int)lVar7);
      iVar1 = *(int *)(param_1 + 0x58);
    }
    FUN_100815b40(param_1,iVar1,uVar2);
    uVar2 = 0;
    break;
  case 2:
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask DisableSound.");
    FUN_100242400(param_1);
    break;
  case 3:
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask Upgrading.");
    goto LAB_1002422ce;
  case 4:
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask EnableSound.");
    FUN_1002424e0(param_1);
    break;
  case 5:
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask HideProgressScreen.");
    pQVar6 = (QString *)CMessageManager::instance();
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_48,uVar3);
    CMessageManager::clearMessageQueue(pQVar6);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10024224e;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_10024224e:
    if (-1 < *(int *)(*(long *)(param_1 + 0x50) + 0x10)) {
      QTimer::stop();
    }
    FUN_100815b20(param_1);
    uVar2 = 0;
    break;
  case 6:
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask Finish.");
    if (*(char *)(param_1 + 0x4d) == '\0') {
      if (*(char *)(param_1 + 0x4c) != '\0') {
        *(undefined1 *)(param_1 + 0x4c) = 0;
        FUN_1002425c0(param_1,0x18a8d);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x4d) = 0;
      CAbstractTask::appendSubTask((int)param_1);
    }
    break;
  case 7:
    FUN_100df99c0("","prl_client_app",0,"Task Upgrade: subtask WaitForUpgrading.");
    CAbstractTask::appendSubTask((int)param_1);
LAB_1002422ce:
    uVar2 = 0;
    CAbstractTask::setWaitForSubTaskCompletion();
    break;
  default:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Unknown sub task.");
    uVar2 = 0x80000009;
  }
  return uVar2;
}

