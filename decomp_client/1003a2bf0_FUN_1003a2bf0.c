
void FUN_1003a2bf0(long param_1,int param_2)

{
  QString *pQVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_1003a24d0();
  QStackedWidget::currentWidget();
  plVar3 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar3 == (long *)0x0) goto LAB_1003a2db7;
  lVar4 = FUN_1003b0a30(param_1 + 0x20);
  if (lVar4 == 0) goto LAB_1003a2db7;
  pQVar1 = *(QString **)(param_1 + 0x10);
  local_50 = (QArrayData *)QString::fromAscii_helper("%1 - %2",7);
  uVar5 = FUN_1003b0a30(param_1 + 0x20);
  FUN_10018d830(&local_58,uVar5);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  (**(code **)(*plVar3 + 0x1b0))(&local_60,plVar3);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a2cf7;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a2cf7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a2d27;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003a2d27:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a2d57;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003a2d57:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a2d87;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a2d87:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003a2db7;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003a2db7:
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x28) + 10) & 1) == 0) {
    if (param_2 < 0) {
      return;
    }
    FUN_1003b0ad0(param_1 + 0x20);
    iVar2 = CMappingModel::getSubmitPolicy();
    if (iVar2 != 1) {
      return;
    }
    WidgetUtils::reparentNonBlockingDialogsTo((QWidget *)0x0,*(QWidget **)(param_1 + 0x10));
  }
  else if (param_2 < 0) {
    QWidget::show();
    QWidget::raise();
    return;
  }
  QWidget::close();
  return;
}

