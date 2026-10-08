
void FUN_1003a89c0(long param_1)

{
  long in_RAX;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_38;
  
  local_38 = in_RAX;
  plVar1 = operator_new(0x90);
  uVar2 = FUN_1003b0a90(*(undefined8 *)(param_1 + 0x18));
  uVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  uVar4 = FUN_1003b0a30(*(undefined8 *)(param_1 + 0x18));
  uVar5 = FUN_1003b0b20(*(undefined8 *)(param_1 + 0x18));
  FUN_1004459e0(plVar1,uVar2,uVar3,uVar4,uVar5);
  QWidget::setAttribute(plVar1,0x37,1);
  QObject::connect(&local_38,plVar1,"2finished(int)",param_1,"1onDlgFinished(int)",0);
  if (local_38 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  (**(code **)(*plVar1 + 0x1a0))(plVar1);
  return;
}

