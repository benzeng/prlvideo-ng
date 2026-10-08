
void FUN_100ae8ac0(QObject *param_1,QObject *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  Connection local_38 [13];
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  piVar1 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar1 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_2b = *piVar1 != 0;
      UNLOCK();
      piVar2 = *(int **)(param_1 + 0x18);
    }
    if (piVar2 != (int *)0x0) {
      LOCK();
      *piVar2 = *piVar2 + -1;
      local_2a = *piVar2 != 0;
      UNLOCK();
      if ((!(bool)local_2a) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar1;
    *(QObject **)(param_1 + 0x20) = param_2;
  }
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    local_29 = *piVar1 != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(piVar1);
    }
  }
  if (param_3 == '\0') {
    QObject::disconnect(*(QObject **)(param_1 + 0x10),"2messageReceived(const QString&)",param_1,
                        "1activateWindow()");
  }
  else {
    QObject::connect(local_38,*(QObject **)(param_1 + 0x10),"2messageReceived(const QString&)",
                     param_1,"1activateWindow()",0);
    QMetaObject::Connection::~Connection(local_38);
  }
  return;
}

