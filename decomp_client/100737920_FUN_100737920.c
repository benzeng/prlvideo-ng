
void FUN_100737920(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  long local_20;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_100154930(uVar1,param_2 + 8,param_2);
  if (lVar2 != 0) {
    cVar3 = FUN_10018c1f0(lVar2,1);
    if (cVar3 == '\0') {
      FUN_1007371c0(param_1,lVar2);
      return;
    }
    QObject::connect(&local_20,lVar2,"2vmAttributesChanged(CVmWrap::VmAttributes)",param_1,
                     "1onVmAttributesChanged(CVmWrap::VmAttributes)",0);
    if (local_20 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_20);
  }
  return;
}

