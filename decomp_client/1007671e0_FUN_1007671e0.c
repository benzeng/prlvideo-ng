
void FUN_1007671e0(long param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  pvVar2 = operator_new(0x20);
  FUN_100763620(pvVar2,param_1);
  *(void **)(param_1 + 0x38) = pvVar2;
  uVar3 = FUN_1007637b0(pvVar2,4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100763140(uVar3,uVar4);
  pvVar2 = operator_new(0x28);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100764910(pvVar2,uVar4,param_1);
  *(void **)(param_1 + 0x40) = pvVar2;
  pvVar2 = operator_new(0x28);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100763f30(pvVar2,uVar4,param_1);
  *(void **)(param_1 + 0x48) = pvVar2;
  pvVar2 = operator_new(0x28);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100765740(pvVar2,uVar4,param_1);
  *(void **)(param_1 + 0x50) = pvVar2;
  pvVar2 = operator_new(0x30);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007663d0(pvVar2,uVar4,param_1);
  *(void **)(param_1 + 0x58) = pvVar2;
  pvVar2 = operator_new(0x28);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100766f60(pvVar2,uVar4,param_1);
  *(void **)(param_1 + 0x60) = pvVar2;
  QObject::connect(&local_30,*(undefined8 *)(param_1 + 0x40),"2dataChanged()",param_1,
                   "1updateSuspendSection()",0);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect((Connection *)&local_38,*(undefined8 *)(param_1 + 0x40),"2dataChanged()",
                     param_1,"1updateCompressSection()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x48),"2dataChanged()",
                     param_1,"1updateSnapshotSection()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    uVar4 = *(undefined8 *)(param_1 + 0x50);
LAB_100767639:
    QObject::connect(&local_48,uVar4,"2dataChanged()",param_1,"1updateCompressSection()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
LAB_10076764b:
    QObject::connect((Connection *)&local_50,uVar4,"2dataChanged()",param_1,"1updateCacheSection()",
                     0);
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
LAB_100767688:
    QObject::connect(&local_58,uVar4,"2dataChanged()",param_1,"1updateArchiveSection()",0);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(param_1 + 0x40),"2dataChanged()",param_1,
                     "1updateCompressSection()",0);
    if ((cVar1 == '\0') || (local_38 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect((Connection *)&local_40,*(undefined8 *)(param_1 + 0x48),"2dataChanged()",
                       param_1,"1updateSnapshotSection()",0);
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      goto LAB_100767639;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x48),"2dataChanged()",param_1,
                     "1updateSnapshotSection()",0);
    if ((cVar1 == '\0') || (local_40 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_40);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      goto LAB_100767639;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x50),"2dataChanged()",param_1,
                     "1updateCompressSection()",0);
    if ((cVar1 == '\0') || (local_48 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_48);
      uVar4 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_10076764b;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,*(undefined8 *)(param_1 + 0x58),"2dataChanged()",param_1,
                     "1updateCacheSection()",0);
    if ((cVar1 == '\0') || (local_50 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_50);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      goto LAB_100767688;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,*(undefined8 *)(param_1 + 0x60),"2dataChanged()",param_1,
                     "1updateArchiveSection()",0);
    if ((cVar1 != '\0') && (local_58 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x38),"2canFreeDiskSpaceChanged(bool)",
                       *(undefined8 *)(param_1 + 0x10),"2canFreeDiskSpaceChanged(bool)",0);
      if ((cVar1 != '\0') && (local_60 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_1007676b8;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_58);
  QObject::connect(&local_60,*(undefined8 *)(param_1 + 0x38),"2canFreeDiskSpaceChanged(bool)",
                   *(undefined8 *)(param_1 + 0x10),"2canFreeDiskSpaceChanged(bool)",0);
LAB_1007676b8:
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  return;
}

