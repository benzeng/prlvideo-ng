
void FUN_1003302f0(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c260;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  uVar1 = FUN_100319c00(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  param_1[0x28] = (QObject)0x0;
  FUN_1003303a0(param_1);
  return;
}

