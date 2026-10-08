
undefined8 FUN_1007e33f0(QObject *param_1)

{
  undefined *puVar1;
  char cVar2;
  size_t sVar3;
  QFutureWatcherBase *this;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  QFutureInterfaceBase *this_00;
  QString local_98;
  QString local_90;
  QFutureInterfaceBase local_88 [8];
  long local_80;
  long local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  undefined1 local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_InstallerFileName_102275228;
  iVar6 = -1;
  if (PTR_s_InstallerFileName_102275228 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_InstallerFileName_102275228);
    iVar6 = (int)sVar3;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  FUN_10002c180(&local_48,param_1 + 200,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e3471;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007e3471:
  if (*(int *)(local_48.field0_0x0 + 4) == 0) {
    QString::fromUtf8_helper((char *)&local_40,0x1e19643);
    QString::operator=(&local_48,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1007e34cd;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1007e34cd:
  puVar1 = PTR_s_InstallParams_102275230;
  iVar6 = -1;
  if (PTR_s_InstallParams_102275230 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_InstallParams_102275230);
    iVar6 = (int)sVar3;
  }
  local_68 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  FUN_10002c180(&local_60,param_1 + 200,&local_68);
  local_70 = (QArrayData *)QString::fromAscii_helper("---sdjhfgsjhdfgs",0x10);
  QString::split(local_58,&local_60,&local_70,1,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e3566;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1007e3566:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_29 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e3596;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007e3596:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e35c6;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1007e35c6:
  this = operator_new(0x20);
  QFutureWatcherBase::QFutureWatcherBase(this,param_1);
  *(undefined ***)this = &PTR_metaObject_1022720c8;
  this_00 = (QFutureInterfaceBase *)(this + 0x10);
  QFutureInterfaceBase::QFutureInterfaceBase(this_00,0xe);
  *(undefined ***)this_00 = &PTR_FUN_102272168;
  QFutureInterfaceBase::refT();
  QObject::connect(&local_78,this,"2finished()",param_1,"1onInstallFinished()",0);
  if (local_78 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_78);
  CAbstractTask::setWaitForSubTaskCompletion();
  local_98.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x68);
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_29 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_98);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e36c1;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1007e36c1:
  local_90.field0_0x0 = local_98.field0_0x0;
  if (1 < *(int *)local_98.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + 1;
    local_29 = *(int *)local_98.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_90);
  pvVar4 = operator_new(0x38);
  FUN_1007e4270(pvVar4,FUN_1007e2f50,&local_90,local_58);
  uVar5 = QThreadPool::globalInstance();
  FUN_100287870(local_88,pvVar4,uVar5);
  if (local_80 != *(long *)(this + 0x18)) {
    QFutureWatcherBase::disconnectOutputInterface(SUB81(this,0));
    QFutureInterfaceBase::refT();
    cVar2 = QFutureInterfaceBase::derefT();
    if (cVar2 == '\0') {
      uVar5 = QFutureInterfaceBase::resultStoreBase();
      FUN_1002864f0(uVar5);
    }
    QFutureInterfaceBase::operator=(this_00,local_88);
    QFutureWatcherBase::connectOutputInterface();
  }
  FUN_100286490(local_88);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_29 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e37ba;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1007e37ba:
  if (*(int *)local_98.field0_0x0 != -1) {
    if (*(int *)local_98.field0_0x0 != 0) {
      LOCK();
      *(int *)local_98.field0_0x0 = *(int *)local_98.field0_0x0 + -1;
      local_29 = *(int *)local_98.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007e37f0;
    }
    QArrayData::deallocate((QArrayData *)local_98.field0_0x0,2,8);
  }
LAB_1007e37f0:
  FUN_100039a80(local_58);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return 0;
}

