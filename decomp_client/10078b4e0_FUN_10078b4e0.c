
void FUN_10078b4e0(QObject *param_1,QObject *param_2,QObject *param_3,QObject *param_4)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222b9b0;
  *(QObject **)(param_1 + 0x10) = param_2;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  uVar1 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_4;
  return;
}

