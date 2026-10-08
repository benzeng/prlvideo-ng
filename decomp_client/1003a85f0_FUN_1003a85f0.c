
void FUN_1003a85f0(long param_1)

{
  long in_RAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_28;
  
  local_28 = in_RAX;
  plVar1 = operator_new(0x170);
  uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  FUN_100436120(plVar1,uVar2,uVar3);
  QWidget::setAttribute(plVar1,0x37,1);
  QObject::connect(&local_28,plVar1,"2finished(int)",param_1,"1onDlgFinished(int)",0);
  if (local_28 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  (**(code **)(*plVar1 + 0x1a0))(plVar1);
  return;
}

