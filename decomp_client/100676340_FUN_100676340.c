
void FUN_100676340(long param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  void *pvVar3;
  Data_conflict local_a0;
  undefined4 local_98;
  QArrayData *local_90;
  QVariant local_88;
  QVariant local_78;
  QDateTime local_68;
  QVariant local_60;
  QArrayData *local_50;
  Data_conflict local_48;
  QString local_40 [2];
  undefined1 local_29;
  
  if (param_2 == 1) {
LAB_10067636a:
    *(undefined1 *)(param_1 + 0x161) = 0;
    if (param_2 != 0xc) {
      if (param_2 == 10) goto LAB_100676384;
      goto LAB_100676647;
    }
LAB_100676555:
    *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  }
  else {
    if (param_2 == 10) {
LAB_100676384:
      if (((*(long *)(param_1 + 0x58) == 0) || (*(int *)(*(long *)(param_1 + 0x58) + 4) == 0)) ||
         (*(long *)(param_1 + 0x60) == 0)) {
        QTimer::stop();
        *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
        return;
      }
      cVar1 = FUN_100d80630(1);
      if (cVar1 != '\0') {
        uVar2 = 0;
        if ((*(long *)(param_1 + 0x58) != 0) &&
           (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
          uVar2 = *(undefined8 *)(param_1 + 0x60);
        }
        uVar2 = FUN_10016f500(uVar2);
        cVar1 = FUN_10061c2b0(uVar2,0x20);
        if (cVar1 != '\0') {
          uVar2 = 0;
          if ((*(long *)(param_1 + 0x58) != 0) &&
             (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
            uVar2 = *(undefined8 *)(param_1 + 0x60);
          }
          uVar2 = FUN_10016f500(uVar2);
          cVar1 = FUN_100627030(uVar2);
          if (cVar1 != '\0') {
            FUN_100626f30(1);
          }
        }
      }
      if (DAT_102310958 == (void *)0x0) {
        pvVar3 = operator_new(0x18);
        FUN_100612710(pvVar3);
        DAT_102271170 = 1;
        DAT_102310958 = pvVar3;
      }
      FUN_100612950(DAT_102310958);
      *(undefined1 *)(param_1 + 0x198) = 1;
      uVar2 = 0;
      QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (uVar2 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
        uVar2 = *(undefined8 *)(param_1 + 0x60);
      }
      FUN_10015a2b0(&local_50,uVar2);
      QString::fromUtf8_helper(&local_48.field0,0x1e0721e);
      QString::append((QString *)&local_48);
      QDateTime::currentDateTime();
      QVariant::QVariant(&local_60,&local_68);
      QSettings::setValue(local_40,(QVariant *)&local_48);
      QVariant::~QVariant(&local_60);
      QDateTime::~QDateTime(&local_68);
      if (*(int *)local_48.field15 != -1) {
        if (*(int *)local_48.field15 != 0) {
          LOCK();
          *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
          local_29 = *(int *)local_48.field15 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100676513;
        }
        QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
      }
LAB_100676513:
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100676543;
        }
        QArrayData::deallocate(local_50,2,8);
      }
LAB_100676543:
      QSettings::~QSettings((QSettings *)local_40);
      if (param_2 == 0xc) goto LAB_100676555;
    }
    else if (param_2 == 0xc) goto LAB_10067636a;
LAB_100676647:
    QTimer::stop();
    if (param_2 - 3U < 2) {
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x154) = 0;
      return;
    }
    if (param_2 == 0xb) {
      return;
    }
    *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
    if (param_2 == 2) {
      FUN_1006768e0(param_1);
      return;
    }
    if (param_2 != 0xc) {
      return;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x140) + 4) == 0) {
    FUN_100676830(param_1,0);
    return;
  }
  if (*(char *)(param_1 + 0x199) != '\0') goto LAB_100676639;
  QSettings::QSettings((QSettings *)&local_88,(QObject *)0x0);
  local_90 = (QArrayData *)QString::fromAscii_helper("LicenseUpgradeToPro",0x13);
  local_98 = 0x80000000;
  local_a0.field7 = 0;
  QSettings::value((QString *)&local_78,&local_88);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant((QVariant *)&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100676628;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100676628:
  QSettings::~QSettings((QSettings *)&local_88);
  if (cVar1 == '\0') {
    return;
  }
LAB_100676639:
  QTimer::start();
  return;
}

