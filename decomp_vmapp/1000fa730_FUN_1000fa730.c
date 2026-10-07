
undefined1 FUN_1000fa730(long param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  int iVar3;
  QString QVar4;
  undefined1 uVar5;
  QString local_90;
  QFile local_88 [16];
  QString local_78;
  QFile local_70 [16];
  QArrayData *local_60;
  QDir local_58 [8];
  QString local_50;
  QFile local_48 [23];
  undefined1 local_31;
  
  QDir::QDir(local_58,(QString *)(param_1 + 0x18));
  local_60 = (QArrayData *)QString::fromAscii_helper("config.pvs",10);
  QDir::filePath(&local_50);
  QFile::QFile(local_48,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa7b7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1000fa7b7:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa7e7;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000fa7e7:
  QDir::~QDir(local_58);
  FUN_1006da530(&local_78);
  QFile::QFile(local_70,&local_78);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_31 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa836;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1000fa836:
  FUN_1006dba50(&local_90);
  QFile::QFile(local_88,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_31 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa888;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1000fa888:
  FUN_1008e3970("","vm",0,"create a new connection");
  iVar3 = CVmConfiguration::loadFromFile((QFile *)(param_1 + 0x60),SUB81(local_48,0));
  if (iVar3 != 0) {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Error: can\'t load the vm config");
    goto LAB_1000faabf;
  }
  QVar4.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
  pQVar1 = (QArrayData *)((QString *)(param_1 + 0x18))->field0_0x0;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  CVmIdentification::setHomePath(QVar4);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000fa94c;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1000fa94c:
  iVar3 = (**(code **)(*(long *)(param_1 + 0x158) + 0x50))(param_1 + 0x158,local_70,1);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*(long *)(param_1 + 0x210) + 0x50))(param_1 + 0x210,local_88,1);
    if (iVar3 == 0) {
      FUN_100645100(param_1 + 0x2e8,0xffffffffffffffff);
      QThread::start(param_1 + 0x30,7);
      FUN_1008e3970("","vm",0,"Wait the writer thread to start");
      QMutex::lock();
      do {
        uVar5 = 1;
        if (*(int *)(param_1 + 0x10) == 1) goto LAB_1000faab3;
        cVar2 = QThread::isRunning();
        if (cVar2 == '\0') {
          FUN_1008e3970("","vm",0,"Error: The writer thread exited unexpectedly");
          *(undefined1 *)(param_1 + 0x48) = 0;
          uVar5 = 0;
          goto LAB_1000faab3;
        }
        if (*(char *)(param_1 + 0x48) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 1;
          uVar5 = 0;
          goto LAB_1000faab3;
        }
        cVar2 = QWaitCondition::wait((QMutex *)(param_1 + 0x50),param_1 + 0x58);
      } while (cVar2 != '\0');
      uVar5 = 0;
      FUN_1008e3970("","vm",0,"Error: Timeout Expired");
LAB_1000faab3:
      QMutex::unlock();
    }
    else {
      uVar5 = 0;
      FUN_1008e3970("","vm",0,"Error: can\'t load the network config");
    }
  }
  else {
    uVar5 = 0;
    FUN_1008e3970("","vm",0,"Error: can\'t load the dispatcher config");
  }
LAB_1000faabf:
  QFile::~QFile(local_88);
  QFile::~QFile(local_70);
  QFile::~QFile(local_48);
  return uVar5;
}

