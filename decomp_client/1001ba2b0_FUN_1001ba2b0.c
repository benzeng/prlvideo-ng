
void FUN_1001ba2b0(QObject *param_1)

{
  QObject *pQVar1;
  long in_RAX;
  long local_18;
  
  if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
     (pQVar1 = *(QObject **)(param_1 + 0x28), pQVar1 != (QObject *)0x0)) {
    if (param_1[0x18] == (QObject)0x0) {
      QObject::disconnect(pQVar1,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",
                          param_1,"1onVmStateChanged()");
      return;
    }
    local_18 = in_RAX;
    QObject::connect(&local_18,pQVar1,
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",param_1,
                     "1onVmStateChanged()",0);
    if (local_18 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_18);
  }
  return;
}

