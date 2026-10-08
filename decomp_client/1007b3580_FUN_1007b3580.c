
void FUN_1007b3580(QObject *param_1,QObject *param_2,QObject *param_3,QObject *param_4,
                  QObject param_5)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,param_4);
  *(undefined ***)param_1 = &PTR_FUN_10222d640;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_3;
  param_1[0x20] = param_5;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(QObject **)(param_1 + 0x30) = param_2;
  return;
}

