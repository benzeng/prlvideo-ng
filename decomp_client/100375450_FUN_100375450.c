
int FUN_100375450(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  QVariant local_60;
  QString local_50;
  QVariant local_48;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)&local_30,(QObject *)0x0);
  if (param_3 != (undefined1 *)0x0) {
    QString::fromUtf8_helper((char *)&local_38,0x1def2e0);
    QString::append(&local_38);
    uVar1 = QSettings::contains((QString *)&local_30);
    *param_3 = uVar1;
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1003754d1;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
LAB_1003754d1:
  QString::fromUtf8_helper((char *)&local_50,0x1def2e0);
  QString::append(&local_50);
  QVariant::QVariant(&local_60,1);
  QSettings::value((QString *)&local_48,&local_30);
  iVar2 = QVariant::toInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_19 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100375565;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100375565:
  iVar3 = 1;
  if (iVar2 != 0) {
    iVar3 = iVar2;
  }
  QSettings::~QSettings((QSettings *)&local_30);
  return iVar3;
}

