
void FUN_100353210(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d660;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  pvVar2 = operator_new(0x60);
  FUN_100a66c30(pvVar2,param_2);
  *(void **)(param_1 + 0x20) = pvVar2;
  FUN_1003532f0(param_1);
  return;
}

