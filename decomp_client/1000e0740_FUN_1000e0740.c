
void FUN_1000e0740(QObject *param_1)

{
  QObject *pQVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QImage local_120 [32];
  Connection local_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
  QArrayData *local_b8;
  QVariant local_b0;
  undefined1 local_99;
  int local_98 [32];
  
  QSettings::QSettings((QSettings *)&local_b0,(QObject *)0x0);
  local_b8 = (QArrayData *)QString::fromAscii_helper("Application preferences",0x17);
  QSettings::beginGroup((QString *)&local_b0);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_99 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1000e07c6;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1000e07c6:
  local_d0 = (QArrayData *)QString::fromAscii_helper("Dock icon",9);
  QVariant::QVariant(&local_e0,1);
  QSettings::value((QString *)&local_c8,&local_b0);
  iVar2 = QVariant::toInt((bool *)&local_c8);
  QVariant::~QVariant(&local_c8);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_99 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1000e0874;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1000e0874:
  if (*(int *)(param_1 + 600) == iVar2) goto LAB_1000e09f0;
  *(int *)(param_1 + 600) = iVar2;
  if ((*(int *)(param_1 + 0x21c) != 0) || (*(int *)(param_1 + 0x218) != 0)) {
    local_98[0] = (iVar2 == 2) + 1;
    FUN_1000c4970(param_1 + 0x218,0x86,local_98,0x80);
  }
  pQVar1 = *(QObject **)(param_1 + 0x260);
  if (iVar2 != 1) {
    if (pQVar1 != (QObject *)0x0) {
      QObject::disconnect(pQVar1,"2imageUpdated(const QImage &)",param_1,
                          "1onUpdateLiveScreenShot(const QImage &)");
      *(undefined8 *)(param_1 + 0x260) = 0;
    }
    QImage::QImage(local_120);
    FUN_1000c5020(param_1,local_120);
    QImage::~QImage(local_120);
    goto LAB_1000e09f0;
  }
  if (pQVar1 == (QObject *)0x0) {
    uVar3 = FUN_100152280();
    lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
    if (lVar4 == 0) goto LAB_1000e09b5;
    uVar3 = FUN_10018c280(lVar4);
    lVar4 = FUN_100319960(uVar3);
    if (lVar4 == 0) goto LAB_1000e09b5;
    local_e8 = 0xffffffff;
    local_e4 = 0xffffffff;
    local_f8 = 0;
    local_f0 = 0xffffffffffffffff;
    lVar4 = FUN_100327670(lVar4,&local_e8,&local_f8,DAT_100e151e0);
    *(long *)(param_1 + 0x260) = lVar4;
  }
  else {
LAB_1000e09b5:
    lVar4 = *(long *)(param_1 + 0x260);
  }
  if (lVar4 != 0) {
    QObject::connect(local_100,lVar4,"2imageUpdated(const QImage &)",param_1,
                     "1onUpdateLiveScreenShot(const QImage &)",2);
    QMetaObject::Connection::~Connection(local_100);
  }
LAB_1000e09f0:
  QSettings::~QSettings((QSettings *)&local_b0);
  return;
}

