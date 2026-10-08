
void FUN_10039f0a0(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  QVariant local_50;
  QArrayData *local_40;
  Data_conflict local_38;
  QString local_30 [2];
  QArrayData *local_20;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  FUN_10039f310(&local_40,param_1);
  local_38.field15 = (QObject *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_11 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1df1466);
  QString::append((QString *)&local_38);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10039f12e;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10039f12e:
  QStackedWidget::currentWidget();
  plVar2 = (long *)QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022187a0);
  iVar1 = 0;
  if (plVar2 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar2 + 0x1a8))(plVar2);
  }
  QVariant::QVariant(&local_50,iVar1);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_11 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10039f1b1;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_10039f1b1:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10039f1e1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10039f1e1:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

