
QString * FUN_1007caa20(QString *param_1)

{
  QArrayData *local_48;
  QSettings local_40 [16];
  QArrayData *local_30;
  undefined1 local_21;
  
  QSettings::QSettings(local_40,(QObject *)0x0);
  QSettings::applicationName();
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
  if (1 < *(int *)local_48 + 1U) {
    LOCK();
    *(int *)local_48 = *(int *)local_48 + 1;
    local_21 = *(int *)local_48 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1dd8616);
  QString::append(param_1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007caab3;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007caab3:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007caae3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007caae3:
  QSettings::~QSettings(local_40);
  return param_1;
}

