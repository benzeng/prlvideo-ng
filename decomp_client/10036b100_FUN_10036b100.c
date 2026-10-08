
void FUN_10036b100(long param_1)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CWindowVisibilityObserver *this;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar1 = '\0';
  QObject::connect(&local_30,uVar3,"2vmConfigurationChanged(const CVmConfiguration&)",param_1,
                   "1onAfterVmConfigurationChanged(const CVmConfiguration&)",0);
  if (local_30 != 0) {
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_30);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  cVar2 = '\0';
  QObject::connect(&local_38,uVar3,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onAfterVmStateChanged(VIRTUAL_MACHINE_STATE)",0);
  if (cVar1 != '\0') {
    if (local_38 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar3 = FUN_10018c280(uVar3);
  uVar3 = FUN_100319960(uVar3);
  QObject::connect(&local_40,uVar3,
                   "2viewModeChanged(GUI::VmDisplayViewMode, GUI::VmDisplayViewMode)",param_1,
                   "1updateWindow()",0);
  if ((cVar2 == '\0') || (local_40 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_100152280();
    QObject::connect((Connection *)&local_48,uVar3,"2connectedServersNumberChanged(uint, uint)",
                     param_1,"1updateWindowTitle(uint)",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)PTR_self_1021e1388;
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar3 = FUN_100152280();
    QObject::connect(&local_48,uVar3,"2connectedServersNumberChanged(uint, uint)",param_1,
                     "1updateWindowTitle(uint)",0);
    if ((cVar1 != '\0') && (local_48 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      cVar1 = '\0';
      QObject::connect(&local_50,*(undefined8 *)PTR_self_1021e1388,"2activeStateWillChange(bool)",
                       param_1,"1updateModalitySettings(bool)",0);
      if (cVar2 != '\0') {
        if (local_50 == 0) {
          cVar1 = '\0';
        }
        else {
          cVar1 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_10036b374;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar3 = *(undefined8 *)PTR_self_1021e1388;
  }
  cVar1 = '\0';
  QObject::connect(&local_50,uVar3,"2activeStateWillChange(bool)",param_1,
                   "1updateModalitySettings(bool)",0);
LAB_10036b374:
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar4 = FUN_10018c280(uVar4);
  cVar2 = '\0';
  QObject::connect(&local_58,uVar3,"2deviceBarVisiblilityChanged(bool)",uVar4,
                   "1updatePowerOptimization()",0);
  if (cVar1 != '\0') {
    if (local_58 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  this = operator_new(0x18);
  CWindowVisibilityObserver::CWindowVisibilityObserver(this,*(QWidget **)(param_1 + 0x10));
  QObject::connect(&local_60,this,"2windowVisibilityChanged(bool)",param_1,
                   "1onWindowVisiblilityChanged(bool)",0);
  if ((cVar2 != '\0') && (local_60 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

