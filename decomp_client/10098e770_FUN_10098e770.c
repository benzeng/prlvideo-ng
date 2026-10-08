
void FUN_10098e770(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1022339f0;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(QObject **)(param_1 + 0x20) = param_3;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}

