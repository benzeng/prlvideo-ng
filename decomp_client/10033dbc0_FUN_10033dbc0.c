
void FUN_10033dbc0(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  long local_20;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 == 0) {
    QObject::connect(&local_28,param_1,
                     "2switchViewModeToDeferred( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                     ,param_1,
                     "1onDeferredSwitchViewModeTo( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                     ,2);
LAB_10033dc7c:
    if (local_28 != 0) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      goto LAB_10033dcd1;
    }
  }
  else {
    QObject::connect(&local_20,lVar2,
                     "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                     "1onAfterVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",0);
    if (local_20 == 0) {
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      QObject::connect(&local_28,param_1,
                       "2switchViewModeToDeferred( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                       ,param_1,
                       "1onDeferredSwitchViewModeTo( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                       ,2);
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_20);
      QObject::connect(&local_28,param_1,
                       "2switchViewModeToDeferred( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                       ,param_1,
                       "1onDeferredSwitchViewModeTo( GUI::VmDisplayViewMode, const GUI::VmDesktopViewModeSwitchOptions& )"
                       ,2);
      if (cVar1 != '\0') goto LAB_10033dc7c;
    }
  }
  cVar1 = '\0';
LAB_10033dcd1:
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  QObject::connect(&local_30,uVar3,
                   "2vmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,param_1,
                   "1onVmPrimaryDisplayViewModeChanged(const QString&, GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)"
                   ,0);
  if ((cVar1 != '\0') && (local_30 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  return;
}

