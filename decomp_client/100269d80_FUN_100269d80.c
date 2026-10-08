
void FUN_100269d80(long param_1)

{
  int iVar1;
  QString *pQVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  iVar1 = CAbstractTask::getCurrentSubTask();
  if (iVar1 == 9) {
    pQVar2 = (QString *)CMessageManager::instance();
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    FUN_100188480(&local_28,uVar3);
    CMessageManager::raiseSpecificMessageBox(pQVar2,(int)&local_28);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
    }
  }
  else {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if ((((iVar1 == 8) && (*(long *)(param_1 + 0x58) != 0)) &&
        (*(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) && (*(long *)(param_1 + 0x60) != 0)) {
      QWidget::raise();
      QWidget::activateWindow();
      return;
    }
  }
  return;
}

