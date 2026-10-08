
void FUN_10035d400(QObject *param_1,QObject *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  
  uVar1 = 0;
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220db70;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 1;
  uVar1 = FUN_100cd2260(param_3);
  if (DAT_102310a08 == (void *)0x0) {
    pvVar2 = operator_new(0x220);
    FUN_1007cc3f0(pvVar2);
    DAT_102273890 = 1;
    DAT_102310a08 = pvVar2;
  }
  FUN_1007d2920(DAT_102310a08,uVar1);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined **)(param_1 + 0x40) = PTR_shared_null_1021e15e8;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_10035d690(param_1);
  return;
}

