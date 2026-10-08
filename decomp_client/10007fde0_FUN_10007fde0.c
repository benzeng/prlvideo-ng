
void FUN_10007fde0(long param_1,long param_2)

{
  char cVar1;
  long in_RAX;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long local_28;
  
  local_28 = in_RAX;
  uVar2 = FUN_100152280();
  lVar3 = FUN_100154930(uVar2,param_2 + 8,param_2);
  if (lVar3 != 0) {
    cVar1 = FUN_10018c1f0(lVar3,1);
    if (cVar1 == '\0') {
      lVar4 = FUN_10007fb70(param_1,param_2);
      if (lVar4 != 0) {
        FUN_10008b9b0(lVar4,lVar3);
        FUN_10008bf60(lVar4,param_1 + 0x28);
        return;
      }
      pvVar5 = operator_new(0x18);
      FUN_10008b530(pvVar5,lVar3);
      FUN_10007f510(param_1,pvVar5);
      return;
    }
    QObject::connect(&local_28,lVar3,"2vmAttributesChanged(CVmWrap::VmAttributes)",param_1,
                     "1onVmAttributesChanged(CVmWrap::VmAttributes)",0);
    if (local_28 != 0) {
      QMetaObject::Connection::isConnected_helper();
    }
    QMetaObject::Connection::~Connection((Connection *)&local_28);
  }
  return;
}

