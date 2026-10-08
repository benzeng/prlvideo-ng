
void FUN_1007d4290(void)

{
  QVariant local_60;
  QString local_50;
  QString local_48;
  QString local_40 [2];
  QString local_30;
  Data_conflict local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28.field15 = (QObject *)PTR_shared_null_1021e1288;
  QString::fromUtf8_helper((char *)&local_20,0x1e18cfb);
  QString::append((QString *)&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d42f9;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007d42f9:
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append(&local_30);
  QString::append((QString *)&local_28);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_11 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d4357;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1007d4357:
  FUN_100a04400(&local_48);
  FUN_1007caa20(&local_50);
  QSettings::QSettings((QSettings *)local_40,&local_48,&local_50,(QObject *)0x0);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_11 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d43ac;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007d43ac:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_11 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d43dc;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1007d43dc:
  QVariant::QVariant(&local_60,"");
  QSettings::setValue(local_40,(QVariant *)&local_28);
  QVariant::~QVariant(&local_60);
  QSettings::~QSettings((QSettings *)local_40);
  if (*(int *)local_28.field15 != -1) {
    if (*(int *)local_28.field15 != 0) {
      LOCK();
      *(int *)local_28.field15 = *(int *)local_28.field15 + -1;
      UNLOCK();
      if (*(int *)local_28.field15 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field15,2,8);
  }
  return;
}

