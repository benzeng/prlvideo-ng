
void FUN_1001551f0(undefined8 param_1,QString *param_2)

{
  QArrayData *pQVar1;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  if (*(int *)(param_2->field0_0x0 + 4) == 0) {
    pQVar1 = (QArrayData *)QString::fromAscii_helper("Login/DefaultConnectServer",0x1a);
    QSettings::remove(local_28);
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_11 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001552cf;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  else {
    local_30.field7 = QString::fromAscii_helper("Login/DefaultConnectServer",0x1a);
    QVariant::QVariant(&local_40,param_2);
    QSettings::setValue(local_28,(QVariant *)&local_30);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_30.field15 != -1) {
      if (*(int *)local_30.field15 != 0) {
        LOCK();
        *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
        local_11 = *(int *)local_30.field15 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001552cf;
      }
      QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
    }
  }
LAB_1001552cf:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

