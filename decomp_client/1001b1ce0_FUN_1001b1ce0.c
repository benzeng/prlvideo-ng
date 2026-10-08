
undefined8 * FUN_1001b1ce0(undefined8 *param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  int iVar3;
  QString local_c0;
  QString local_b8;
  Data_conflict local_b0;
  undefined4 local_a8;
  QArrayData *local_a0;
  QVariant local_98;
  QArrayData *local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QArrayData *local_70;
  QVariant local_68;
  QString local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar1 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b1d68;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001b1d68:
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_70 = (QArrayData *)QString::fromAscii_helper("Device Name",0xb);
      local_78 = 0x80000000;
      local_80.field7 = 0;
      QSettings::value((QString *)&local_68,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_68);
      QVariant::~QVariant((QVariant *)&local_80);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1e1f;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1001b1e1f:
      local_a0 = (QArrayData *)QString::fromAscii_helper("Device Id",9);
      local_a8 = 0x80000000;
      local_b0.field7 = 0;
      QSettings::value((QString *)&local_98,&local_48);
      QVariant::toString();
      QVariant::~QVariant(&local_98);
      QVariant::~QVariant((QVariant *)&local_b0);
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1ebc;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1001b1ebc:
      pQVar2 = (QArrayData *)QString::fromAscii_helper("---sdjhfgsjhdfgs",0x10);
      local_c0.field0_0x0 = local_58.field0_0x0;
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_c0);
      local_b8.field0_0x0 = local_c0.field0_0x0;
      if (1 < *(int *)local_c0.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + 1;
        local_31 = *(int *)local_c0.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_b8);
      QString::operator=(&local_58,&local_b8);
      if (*(int *)local_b8.field0_0x0 != -1) {
        if (*(int *)local_b8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_b8.field0_0x0 = *(int *)local_b8.field0_0x0 + -1;
          local_31 = *(int *)local_b8.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1f6f;
        }
        QArrayData::deallocate((QArrayData *)local_b8.field0_0x0,2,8);
      }
LAB_1001b1f6f:
      if (*(int *)local_c0.field0_0x0 != -1) {
        if (*(int *)local_c0.field0_0x0 != 0) {
          LOCK();
          *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
          local_31 = *(int *)local_c0.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1fa5;
        }
        QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
      }
LAB_1001b1fa5:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1fdb;
        }
        QArrayData::deallocate(pQVar2,2,8);
      }
LAB_1001b1fdb:
      FUN_1000341d0(param_1,&local_58);
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b201a;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1001b201a:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b204a;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1001b204a:
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  QSettings::endArray();
  QSettings::~QSettings((QSettings *)&local_48);
  return param_1;
}

