
void FUN_1007ca550(void)

{
  QVariant local_58;
  Data_conflict local_48;
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  local_30.field7 = QString::fromAscii_helper("ProductMajorVerWhenAskedToEnableCep",0x23);
  QVariant::QVariant(&local_40,0xc);
  QSettings::setValue(local_28,(QVariant *)&local_30);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30.field15 != -1) {
    if (*(int *)local_30.field15 != 0) {
      LOCK();
      *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
      local_11 = *(int *)local_30.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ca5d1;
    }
    QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
  }
LAB_1007ca5d1:
  local_48.field7 = QString::fromAscii_helper("ProductMinorVerWhenAskedToEnableCep",0x23);
  QVariant::QVariant(&local_58,2);
  QSettings::setValue(local_28,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_11 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007ca63e;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1007ca63e:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

