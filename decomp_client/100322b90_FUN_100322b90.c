
void FUN_100322b90(QObject *param_1,QObject *param_2)

{
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined **)param_1 = &DAT_1021ef980;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15d0;
  return;
}

