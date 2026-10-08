
void FUN_100769e00(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  
  iVar2 = 0;
  while( true ) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    iVar1 = FUN_10015d3a0(uVar3);
    if (iVar1 <= iVar2) break;
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_10015d330(uVar3,iVar2);
    FUN_100769f50(param_1);
    iVar2 = iVar2 + 1;
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  QObject::connect(&local_20,uVar3,"2afterVmAdded(CVmWrap)",param_1,"1onVmAdded(CVmWrap)",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  QObject::connect(&local_28,uVar3,"2beforeVmRemoved(CVmWrap)",param_1,"1onVmRemoved(CVmWrap)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  return;
}

