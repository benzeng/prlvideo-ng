
void FUN_100787900(QObject *param_1,QObject *param_2,QObject *param_3,QObject *param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10222b370;
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
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pvVar2 = operator_new(0x18);
  FUN_100787250(pvVar2,param_2);
  *(void **)(param_1 + 0x38) = pvVar2;
  pvVar2 = operator_new(0x18);
  FUN_100788320(pvVar2,param_3,param_4,param_1);
  *(void **)(param_1 + 0x40) = pvVar2;
  pvVar2 = operator_new(0x18);
  FUN_10078b430(pvVar2,param_3,param_4,param_1);
  *(void **)(param_1 + 0x48) = pvVar2;
  FUN_100787a80(param_1);
  return;
}

