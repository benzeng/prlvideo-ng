
void FUN_1003b02a0(QObject *param_1,undefined8 param_2,QObject *param_3,undefined8 param_4,
                  QObject *param_5)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_5);
  *(undefined ***)param_1 = &PTR_FUN_1021f1d50;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  param_1[0x78] = (QObject)0x0;
  return;
}

