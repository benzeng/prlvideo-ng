
undefined8 FUN_100272de0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  QArrayData *pQVar4;
  undefined8 uVar5;
  QString local_b8 [2];
  Data_conflict local_a8;
  undefined4 local_a0;
  QArrayData *local_98;
  QVariant local_90;
  QVariant local_80;
  QString local_70;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("ProductUpdate/UpdateToVersion",0x1d);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QVariant::QVariant(&local_68,&local_70);
  QSettings::value((QString *)&local_40,&local_50);
  QVariant::toString();
  iVar3 = QString::compare_helper
                    (local_30 + *(long *)(local_30 + 0x10),*(undefined4 *)(local_30 + 4),
                     "12.2.1-41615",0xffffffff,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100272ea5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100272ea5:
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100272ee7;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100272ee7:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100272f17;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100272f17:
  QSettings::~QSettings((QSettings *)&local_50);
  cVar1 = FUN_100075300();
  if (cVar1 == '\0') {
LAB_100272fec:
    uVar5 = 0x3bfa;
    if (iVar3 == 0) {
LAB_100273024:
      bVar2 = FUN_100273260(param_1);
      *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar2;
      uVar5 = 0;
    }
  }
  else {
    QSettings::QSettings((QSettings *)&local_90,(QObject *)0x0);
    local_98 = (QArrayData *)
               QString::fromAscii_helper("Application preferences/Close Windows On Quit",0x2d);
    local_a0 = 0x80000000;
    local_a8.field7 = 0;
    QSettings::value((QString *)&local_80,&local_90);
    cVar1 = QVariant::toBool();
    QVariant::~QVariant(&local_80);
    QVariant::~QVariant((QVariant *)&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_21 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100272fdc;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100272fdc:
    QSettings::~QSettings((QSettings *)&local_90);
    if (cVar1 != '\0') goto LAB_100272fec;
    uVar5 = FUN_100078040();
    cVar1 = FUN_10007a7b0(uVar5);
    if (cVar1 != '\0') goto LAB_100273024;
    uVar5 = FUN_100078040();
    cVar1 = FUN_10007a5f0(uVar5);
    if ((iVar3 == 0) || (uVar5 = 0x3bfa, cVar1 != '\0')) goto LAB_100273024;
  }
  QSettings::QSettings((QSettings *)local_b8,(QObject *)0x0);
  pQVar4 = (QArrayData *)QString::fromAscii_helper("VmLastState",0xb);
  QSettings::remove(local_b8);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_21 = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002730a1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1002730a1:
  QSettings::~QSettings((QSettings *)local_b8);
  return uVar5;
}

