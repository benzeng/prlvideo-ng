
void FUN_1002b6dd0(long param_1)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (((*(long *)(param_1 + 0x40) != 0) && (*(int *)(*(long *)(param_1 + 0x40) + 4) != 0)) &&
     (*(long *)(param_1 + 0x48) != 0)) {
    QWidget::raise();
    QWidget::activateWindow();
    return;
  }
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 - 3U < 3) {
    pQVar2 = (QString *)CMessageManager::instance();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_30,uVar3);
    CMessageManager::raiseSpecificMessageBox(pQVar2,(int)&local_30);
    if (*(int *)local_30 == -1) {
      return;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    pQVar2 = (QString *)CMessageManager::instance();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_28,uVar3);
    CMessageManager::raiseSpecificMessageBox(pQVar2,(int)&local_28);
    if (*(int *)local_28 == -1) {
      return;
    }
    local_30 = local_28;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate(local_30,2,8);
  return;
}

