
void FUN_100a0cff0(QObject *param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int *piVar2;
  QTimer *this;
  long local_40;
  undefined1 local_37;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102236f50;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  FUN_100076800(param_1 + 0x18,param_3);
  piVar2 = (int *)*param_4;
  uVar1 = param_4[1];
  *(int **)(param_1 + 0x20) = piVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_37 = *piVar2 != 0;
    UNLOCK();
  }
  uVar1 = param_4[2];
  *(undefined8 *)(param_1 + 0x38) = param_4[3];
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  QVariant::QVariant((QVariant *)(param_1 + 0x40),(QVariant *)(param_4 + 4));
  param_1[0x50] = *(QObject *)(param_4 + 6);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x80000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined **)(param_1 + 0x70) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  this = operator_new(0x20);
  QTimer::QTimer(this,param_1);
  *(QTimer **)(param_1 + 0x88) = this;
  QObject::connect(&local_40,this,"2timeout()",param_1,"1onReplyTimeout()",0);
  if (local_40 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  *(byte *)(*(long *)(param_1 + 0x88) + 0x1c) = *(byte *)(*(long *)(param_1 + 0x88) + 0x1c) | 1;
  return;
}

