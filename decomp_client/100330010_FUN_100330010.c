
void FUN_100330010(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  long local_38 [2];
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c1a0;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  pvVar2 = operator_new(0x20);
  FUN_1003193b0(local_38,param_2);
  FUN_100a51960(pvVar2,local_38[0]);
  if (local_38[0] != 0) {
    _PrlHandle_Free();
  }
  *(void **)(param_1 + 0x20) = pvVar2;
  FUN_100330110(param_1);
  return;
}

