
void FUN_10042b470(QObject *param_1,QObject *param_2,QObject *param_3,CVmHardDisk *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  CVmHardDisk *this;
  QObject *pQVar3;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1021f22b0;
  *(QObject **)(param_1 + 0x10) = param_2;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0xe8) = uVar2;
  *(QObject **)(param_1 + 0xf0) = param_3;
  this = operator_new(0x158);
  CVmHardDisk::CVmHardDisk(this,param_4);
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)this);
  *(undefined8 *)(param_1 + 0xf8) = uVar2;
  *(CVmHardDisk **)(param_1 + 0x100) = this;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  pQVar3 = operator_new(0x40);
  uVar2 = 0;
  if ((*(long *)(param_1 + 0xe8) != 0) && (uVar2 = 0, *(int *)(*(long *)(param_1 + 0xe8) + 4) != 0))
  {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
  }
  uVar1 = CVmDevice::getIndex();
  FUN_100213e30(pQVar3,uVar2,uVar1);
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  *(undefined8 *)(param_1 + 0x128) = uVar2;
  *(QObject **)(param_1 + 0x130) = pQVar3;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  FUN_10042b710(param_1);
  FUN_10042b870();
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x128) != 0) &&
     (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x128) + 4) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x130);
  }
  CAbstractTask::setOption(uVar2,2,0);
  QTimer::singleShot(0,param_1,"1setupDiskInfo()");
  return;
}

