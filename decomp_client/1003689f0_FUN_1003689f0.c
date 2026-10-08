
void FUN_1003689f0(QObject *param_1,undefined8 param_2,QObject *param_3,QObject *param_4,
                  QObject *param_5)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1021f01c0;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(QObject **)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_100368ba0(param_1);
  FUN_100368e20(param_1);
  return;
}

