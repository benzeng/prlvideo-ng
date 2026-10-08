
void FUN_1003a86c0(long param_1,undefined8 param_2)

{
  long in_RAX;
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = in_RAX;
  uVar1 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  FUN_1003b7590(uVar1,param_2);
  plVar2 = operator_new(0x70);
  uVar1 = CVmGenericNetworkAdapter::getLinkRateLimit();
  uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  FUN_100446e30(plVar2,uVar1,uVar3);
  QWidget::setAttribute(plVar2,0x37,1);
  QObject::connect(&local_28,plVar2,"2finished(int)",param_1,"1onDlgFinished(int)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  (**(code **)(*plVar2 + 0x1a0))(plVar2);
  return;
}

