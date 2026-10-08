
void FUN_10033ad20(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c750;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_10033adc0(param_1);
  FUN_10033ae70(param_1);
  return;
}

