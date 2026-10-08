
void FUN_10033b5d0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c810;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  pvVar2 = operator_new(0x18);
  FUN_100a40680(pvVar2,param_1 + 0x10);
  *(void **)(param_1 + 0x20) = pvVar2;
  FUN_10033b6e0(param_1);
  return;
}

