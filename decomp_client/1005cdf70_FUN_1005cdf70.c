
void FUN_1005cdf70(QString *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  QVariant local_a8;
  Data_conflict local_98;
  QArrayData *local_90;
  Data_conflict local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QVariant local_70;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  if (*(int *)(param_1->field0_0x0 + 4) == 0) {
    return;
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Guest OS Sources",0x10);
  QSettings::beginGroup((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005cdff5;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cdff5:
  local_58 = (QArrayData *)QString::fromAscii_helper("DirsForSearch",0xd);
  iVar2 = QSettings::beginReadArray((QString *)&local_48);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce04d;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005ce04d:
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      QSettings::setArrayIndex((int)&local_48);
      local_78 = (QArrayData *)QString::fromAscii_helper("Directory",9);
      local_80 = 0x80000000;
      local_88.field7 = 0;
      QSettings::value((QString *)&local_70,&local_48);
      QVariant::toString();
      cVar1 = operator==(param_1,&local_60);
      if (*(int *)local_60.field0_0x0 != -1) {
        if (*(int *)local_60.field0_0x0 != 0) {
          LOCK();
          *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
          local_31 = *(int *)local_60.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ce0ff;
        }
        QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
      }
LAB_1005ce0ff:
      QVariant::~QVariant(&local_70);
      QVariant::~QVariant((QVariant *)&local_88);
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005ce13f;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_1005ce13f:
      if (cVar1 != '\0') {
        QSettings::endArray();
        QSettings::endGroup();
        goto LAB_1005ce27b;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  QSettings::endArray();
  local_90 = (QArrayData *)QString::fromAscii_helper("DirsForSearch",0xd);
  QSettings::beginWriteArray((QString *)&local_48,(int)&local_90);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce1c2;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1005ce1c2:
  QSettings::setArrayIndex((int)&local_48);
  local_98.field7 = QString::fromAscii_helper("Directory",9);
  QVariant::QVariant(&local_a8,param_1);
  QSettings::setValue((QString *)&local_48,(QVariant *)&local_98);
  QVariant::~QVariant(&local_a8);
  if (*(int *)local_98.field15 != -1) {
    if (*(int *)local_98.field15 != 0) {
      LOCK();
      *(int *)local_98.field15 = *(int *)local_98.field15 + -1;
      local_31 = *(int *)local_98.field15 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ce255;
    }
    QArrayData::deallocate((QArrayData *)local_98.field15,2,8);
  }
LAB_1005ce255:
  QSettings::endArray();
  QSettings::endGroup();
LAB_1005ce27b:
  QSettings::~QSettings((QSettings *)&local_48);
  return;
}

