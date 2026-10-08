
void FUN_100ae8800(long param_1,undefined8 param_2)

{
  int *piVar1;
  void *pvVar2;
  Connection local_30 [15];
  undefined1 local_21;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_21 = *piVar1 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (pvVar2 = *(void **)(param_1 + 0x18), pvVar2 != (void *)0x0)) {
      operator_delete(pvVar2);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  pvVar2 = operator_new(0x40);
  FUN_100ae9de0(pvVar2,param_1,param_2);
  *(void **)(param_1 + 0x10) = pvVar2;
  QObject::connect(local_30,pvVar2,"2messageReceived(const QString&)",param_1,
                   "2messageReceived(const QString&)",0);
  QMetaObject::Connection::~Connection(local_30);
  return;
}

