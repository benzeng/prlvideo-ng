
void FUN_10034f2c0(QObject *param_1,undefined8 param_2)

{
  QTimer *this;
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d4e0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  param_1[0x28] = (QObject)0x0;
  this = (QTimer *)(param_1 + 0x30);
  QTimer::QTimer(this,(QObject *)0x0);
  cVar1 = FUN_100124e00();
  if (cVar1 != '\0') {
    FUN_100352270("GUI::VmType",0,0);
    uVar3 = FUN_10098ae20();
    QObject::connect(local_38,uVar3,"2battStateChanged(BattWatcher::BatteryState)",param_1,
                     "1onBattStateChanged(BattWatcher::BatteryState)",2);
    bVar2 = 1;
    if (local_38[0] != 0) {
      bVar2 = QMetaObject::Connection::isConnected_helper();
      bVar2 = bVar2 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)local_38);
    uVar3 = FUN_10098ae20();
    QObject::connect(&local_40,uVar3,"2battRemainingCapacityChanged(int)",param_1,
                     "1onBattRemainingCapacityChanged(int)",2);
    if (bVar2 == 0) {
      if (local_40 == 0) {
        cVar1 = '\0';
      }
      else {
        cVar1 = QMetaObject::Connection::isConnected_helper();
      }
    }
    else {
      cVar1 = '\0';
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,param_1,"2check()",param_1,"1onFinishChange()",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_48 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x10),
                     "2vmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",
                     param_1,
                     "1onVmConfigurationChanged(const CVmConfiguration&, const CVmConfiguration&)",2
                    );
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_50 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x10),
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",param_1,
                     "1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_58 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x10),"2vmTypeChanged(GUI::VmType)",param_1
                     ,"1onVmTypeChanged(GUI::VmType)",2);
    if (cVar1 == '\0') {
      cVar1 = '\0';
    }
    else if (local_60 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QTimer::setInterval((int)this);
    param_1[0x4c] = (QObject)((byte)param_1[0x4c] | 1);
    QObject::connect(&local_68,this,"2timeout()",param_1,"1onTimeout()",2);
    if ((cVar1 != '\0') && (local_68 != 0)) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    lVar4 = FUN_10098ae20();
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar4 + 0x14);
    lVar4 = FUN_10098ae20();
    *(int *)(param_1 + 0x1c) = *(int *)(lVar4 + 0x18) / 100;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

