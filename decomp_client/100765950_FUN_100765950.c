
void FUN_100765950(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  long local_38;
  void *local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  uVar2 = FUN_10018c2b0(param_2);
  cVar1 = FUN_100112cc0(uVar2);
  if (cVar1 == '\0') {
    pvVar3 = operator_new(0x28);
    FUN_100764fe0(pvVar3,param_2,param_1);
    local_30 = pvVar3;
    QObject::connect(&local_38,pvVar3,"2uncompressedSizeChanged(qint64)",param_1,"2dataChanged()",0)
    ;
    if (local_38 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    FUN_100765da0(param_1 + 0x20,&local_28,&local_30);
    FUN_1007652e0(pvVar3);
  }
  return;
}

