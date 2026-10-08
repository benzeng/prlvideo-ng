
void FUN_1007ca700(QObject *param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  long local_68;
  long local_60;
  QString local_58;
  QString local_50;
  QSettings local_48 [23];
  undefined1 local_31;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222e1c0;
  ClientStatistics::ClientStatistics((ClientStatistics *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  CSbaInstallation::CSbaInstallation((CSbaInstallation *)(param_1 + 0x140));
  QDateTime::QDateTime((QDateTime *)(param_1 + 0x218));
  FUN_100a04400(&local_50);
  FUN_1007caa20(&local_58);
  QSettings::QSettings(local_48,&local_50,&local_58,(QObject *)0x0);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ca7c3;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007ca7c3:
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007ca7f3;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007ca7f3:
  FUN_100986130(local_48);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1001a61d0(pvVar2);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar2;
  }
  QObject::connect(&local_60,DAT_1023108e0,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,0);
  if (local_60 == 0) {
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  uVar3 = CTaskManager::instance();
  QObject::connect(&local_68,uVar3,"2taskStarted(QPointer<CAbstractTask>)",param_1,
                   "1onTaskStarted(QPointer<CAbstractTask>)",0);
  if ((cVar1 != '\0') && (local_68 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_68);
  FUN_1007cabc0(param_1);
  FUN_1007cb5b0(param_1);
  FUN_1007cb7d0(param_1);
  FUN_1007cb9f0(param_1);
  FUN_1007cbc10(param_1);
  FUN_1007cbe30(param_1);
  FUN_1007cc110(param_1);
  QSettings::~QSettings(local_48);
  return;
}

