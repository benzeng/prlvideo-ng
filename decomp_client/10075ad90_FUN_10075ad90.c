
void FUN_10075ad90(QObject *param_1,QObject *param_2)

{
  long in_RAX;
  void *pvVar1;
  long local_28;
  
  local_28 = in_RAX;
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102228a70;
  pvVar1 = operator_new(0x40);
  FUN_1007598f0(pvVar1,param_1);
  *(void **)(param_1 + 0x18) = pvVar1;
  pvVar1 = operator_new(0x28);
  FUN_100072800(pvVar1,param_1);
  *(void **)(param_1 + 0x10) = pvVar1;
  QObject::connect(&local_28,pvVar1,"2iconGeometryChanged()",param_1,"2iconGeometryChanged()",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

