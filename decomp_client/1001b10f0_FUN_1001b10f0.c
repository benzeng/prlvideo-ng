
void FUN_1001b10f0(QString *param_1,QString *param_2,int param_3,QString *param_4)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  QVariant local_118;
  Data_conflict local_108;
  QVariant local_100;
  Data_conflict local_f0;
  QVariant local_e8;
  Data_conflict local_d8;
  QVariant local_d0;
  Data_conflict local_c0;
  QArrayData *local_b8;
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
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  iVar4 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b1184;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001b1184:
  iVar5 = iVar4;
  if (0 < iVar4) {
    iVar6 = 0;
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
          if ((bool)local_31) goto LAB_1001b1235;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1001b1235:
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
          if ((bool)local_31) goto LAB_1001b12d2;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1001b12d2:
      cVar3 = operator==(&local_58,param_2);
      if (cVar3 == '\0') {
LAB_1001b1303:
        bVar1 = false;
        iVar2 = iVar5;
      }
      else {
        cVar3 = FUN_1001aee90(&local_88,param_1);
        bVar1 = true;
        iVar2 = iVar6;
        if (cVar3 == '\0') goto LAB_1001b1303;
      }
      iVar5 = iVar2;
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1345;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1001b1345:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_31 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1001b1385;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
LAB_1001b1385:
    } while ((!bVar1) && (iVar6 = iVar6 + 1, iVar6 < iVar4));
  }
  QSettings::endArray();
  local_b8 = (QArrayData *)QString::fromAscii_helper("Usb Devices",0xb);
  QSettings::beginWriteArray((QString *)&local_48,(int)&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_31 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b141a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1001b141a:
  QSettings::setArrayIndex((int)&local_48);
  local_c0.field7 = QString::fromAscii_helper("Device Name",0xb);
  QVariant::QVariant(&local_d0,param_2);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_c0);
  QVariant::~QVariant(&local_d0);
  if (*(int *)local_c0.field15 != -1) {
    if (*(int *)local_c0.field15 != 0) {
      LOCK();
      *(int *)local_c0.field15 = *(int *)local_c0.field15 + -1;
      local_31 = *(int *)local_c0.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b14aa;
    }
    QArrayData::deallocate((QArrayData *)local_c0.field15,2,8);
  }
LAB_1001b14aa:
  local_d8.field7 = QString::fromAscii_helper("Device Id",9);
  QVariant::QVariant(&local_e8,param_1);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_d8);
  QVariant::~QVariant(&local_e8);
  if (*(int *)local_d8.field15 != -1) {
    if (*(int *)local_d8.field15 != 0) {
      LOCK();
      *(int *)local_d8.field15 = *(int *)local_d8.field15 + -1;
      local_31 = *(int *)local_d8.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b152e;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field15,2,8);
  }
LAB_1001b152e:
  local_f0.field7 = QString::fromAscii_helper("Action",6);
  QVariant::QVariant(&local_100,param_3);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_f0);
  QVariant::~QVariant(&local_100);
  if (*(int *)local_f0.field15 != -1) {
    if (*(int *)local_f0.field15 != 0) {
      LOCK();
      *(int *)local_f0.field15 = *(int *)local_f0.field15 + -1;
      local_31 = *(int *)local_f0.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b15b1;
    }
    QArrayData::deallocate((QArrayData *)local_f0.field15,2,8);
  }
LAB_1001b15b1:
  local_108.field7 = QString::fromAscii_helper("AssocVmId",9);
  QVariant::QVariant(&local_118,param_4);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_108);
  QVariant::~QVariant(&local_118);
  if (*(int *)local_108.field15 != -1) {
    if (*(int *)local_108.field15 != 0) {
      LOCK();
      *(int *)local_108.field15 = *(int *)local_108.field15 + -1;
      local_31 = *(int *)local_108.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001b1635;
    }
    QArrayData::deallocate((QArrayData *)local_108.field15,2,8);
  }
LAB_1001b1635:
  if (iVar5 != iVar4) {
    QSettings::setArrayIndex((int)&local_48);
  }
  QSettings::endArray();
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

