
void FUN_10073b0f0(QObject *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  long local_40;
  long local_38;
  undefined1 local_29;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102227e80;
  piVar1 = (int *)*param_2;
  *(int **)(param_1 + 0x10) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  piVar1 = (int *)param_2[1];
  *(int **)(param_1 + 0x18) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_29 = *piVar1 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  uVar2 = FUN_10073d800();
  uVar2 = FUN_10073dab0(uVar2);
  QObject::connect(&local_38,uVar2,"2sigStreamsChanged()",param_1,"1onStreamsChanged()",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  uVar2 = FUN_10073b300(param_1 + 0x10);
  QObject::connect(&local_40,uVar2,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                   param_1,"1onVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  FUN_10073b490(param_1);
  return;
}

