
void FUN_1007862e0(QObject *param_1,QObject *param_2,undefined4 param_3,QObject *param_4)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f7200;
  *(QObject **)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  QVariant::QVariant((QVariant *)(param_1 + 0x20),0);
  uVar1 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(QObject **)(param_1 + 0x38) = param_4;
  param_1[0x48] = (QObject)0x0;
  return;
}

