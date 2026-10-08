
void FUN_100146950(QObject *param_1,long *param_2,QObject *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  QObject::QObject(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021fc800;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(QObject **)(param_1 + 0x18) = param_3;
  uVar1 = (**(code **)(*param_2 + 0x68))(param_2);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = CVmDevice::getIndex();
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

