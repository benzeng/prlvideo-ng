
void FUN_1003346e0(QObject *param_1,QObject *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220c440;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  param_1[0x20] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0x24) = 2;
  puVar1 = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0x28) = PTR_shared_null_1021e12f0;
  param_1[0x30] = (QObject)0x0;
  *(undefined **)(param_1 + 0x38) = puVar1;
  FUN_100334830(param_1);
  return;
}

