
void FUN_1001ddeb0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  QLocale local_a0 [8];
  QArrayData *local_98;
  QLocale local_90 [8];
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QString local_70 [2];
  QVariant local_60;
  QArrayData *local_50;
  QString local_48;
  QVariant local_40;
  QVariant local_30;
  undefined1 local_19;
  
  cVar1 = FUN_1001de400(param_2);
  if (cVar1 != '\0') {
    QLocale::QLocale(local_90);
    QLocale::name();
    iVar2 = QString::compare_helper
                      (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),"zh_CN",
                       0xffffffff,1);
    if (iVar2 == 0) {
      bVar3 = false;
    }
    else {
      QLocale::QLocale(local_a0);
      QLocale::name();
      iVar2 = QString::compare_helper
                        (local_98 + *(long *)(local_98 + 0x10),*(undefined4 *)(local_98 + 4),"zh_TW"
                         ,0xffffffff,1);
      bVar3 = iVar2 != 0;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          local_19 = *(int *)local_98 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1001ddf9b;
        }
        QArrayData::deallocate(local_98,2,8);
      }
LAB_1001ddf9b:
      QLocale::~QLocale(local_a0);
    }
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_19 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001de194;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1001de194:
    QLocale::~QLocale(local_90);
    if (bVar3) {
      FUN_1001de550();
    }
    FUN_1001df380(*(undefined8 *)(param_1 + 0x10));
    return;
  }
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  QString::number((int)&local_50,0xc);
  QString::fromUtf8_helper((char *)&local_48,0x1dd9771);
  QString::append(&local_48);
  QVariant::QVariant(&local_60,0);
  QSettings::value((QString *)&local_30,&local_40);
  iVar2 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de063;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1001de063:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de093;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001de093:
  QSettings::~QSettings((QSettings *)&local_40);
  if (iVar2 != 0xb) {
    return;
  }
  QSettings::QSettings((QSettings *)local_70,(QObject *)0x0);
  QString::number((int)&local_80,0xc);
  QString::fromUtf8_helper((char *)&local_78,0x1dd9771);
  QString::append(&local_78);
  QSettings::remove(local_70);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_19 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de122;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1001de122:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001de152;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001de152:
  QSettings::~QSettings((QSettings *)local_70);
  FUN_1001de550();
  return;
}

