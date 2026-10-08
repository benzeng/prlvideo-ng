
void FUN_10033bb20(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c8d0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  pvVar2 = operator_new(0x20);
  FUN_100a4d220(pvVar2,param_2);
  *(void **)(param_1 + 0x30) = pvVar2;
  FUN_10033bc00(param_1);
  FUN_10033bca0(param_1);
  return;
}

