
void FUN_1003a1d00(long param_1,int param_2)

{
  QString *pQVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  QWidget *pQVar7;
  undefined8 uVar8;
  long lVar9;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  ulong local_38;
  undefined1 local_29;
  
  if (param_2 < 0) {
    return;
  }
  iVar2 = QStackedWidget::count();
  if (iVar2 <= param_2) {
    return;
  }
  QStackedWidget::widget((int)*(undefined8 *)(param_1 + 0x38));
  plVar5 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  uVar3 = FUN_1003a0360(param_1,plVar5);
  lVar6 = FUN_1003a0140();
  local_38 = (ulong)uVar3 | lVar6 << 0x20;
  pQVar7 = (QWidget *)QWidget::window();
  uVar4 = MacUtils::getToolbarMinimumWidth(pQVar7);
  if ((int)uVar3 < (int)uVar4) {
    uVar3 = uVar4;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar3);
  QWidget::setFixedSize(*(QSize **)(param_1 + 0x38));
  iVar2 = QStackedWidget::currentIndex();
  if (iVar2 != param_2) {
    QStackedWidget::setCurrentIndex((int)*(undefined8 *)(param_1 + 0x38));
  }
  lVar6 = FUN_1003b0a30(param_1 + 0x20);
  if (lVar6 == 0) goto LAB_1003a1f3b;
  pQVar1 = *(QString **)(param_1 + 0x10);
  local_50 = (QArrayData *)QString::fromAscii_helper("%1 - %2",7);
  uVar8 = FUN_1003b0a30(param_1 + 0x20);
  FUN_10018d830(&local_58,uVar8);
  QString::arg(&local_48,&local_50,&local_58,0,0x20);
  (**(code **)(*plVar5 + 0x1b0))(&local_60,plVar5);
  QString::arg(&local_40,&local_48,&local_60,0,0x20);
  QWidget::setWindowTitle(pQVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a1e7b;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1003a1e7b:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a1eab;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1003a1eab:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a1edb;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003a1edb:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a1f0b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1003a1f0b:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003a1f3b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003a1f3b:
  FUN_1003a2540(param_1);
  QWidget::show();
  FUN_10039f0a0(param_1);
  FUN_1003a30a0(param_1,0);
  FUN_1003a3290(param_1);
  plVar5 = (long *)QApplication::focusWidget();
  lVar6 = *(long *)(param_1 + 0x10);
  lVar9 = QApplication::activeWindow();
  if (((plVar5 != (long *)0x0) && (lVar6 == lVar9)) &&
     (lVar6 = (**(code **)(*plVar5 + 8))(plVar5,"QAbstractButton"), lVar6 != 0)) {
    QWidget::setFocus(*(undefined8 *)(plVar5[1] + 0x10),7);
  }
  return;
}

