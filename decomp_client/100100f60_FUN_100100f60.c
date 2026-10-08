
void FUN_100100f60(long param_1)

{
  QArrayData *pQVar1;
  AnonymousUnion0 local_60;
  QVariant local_58;
  Data_conflict local_48;
  QArrayData *local_40;
  QString local_38 [2];
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("Shared Applications",0x13);
  QSettings::beginGroup(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100100fcd;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100100fcd:
  local_48.field7 = QString::fromAscii_helper("Deferred Extensions",0x13);
  pQVar1 = (QArrayData *)QString::fromAscii_helper(".",1);
  QtPrivate::QStringList_join
            ((QStringList *)&local_60.field0,(QChar *)(param_1 + 0x18),
             (int)*(undefined8 *)(pQVar1 + 0x10) + (int)pQVar1);
  QVariant::QVariant(&local_58,(QString *)&local_60.field0);
  QSettings::setValue(local_38,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_60.field1 != -1) {
    if (*(int *)local_60.field1 != 0) {
      LOCK();
      *(int *)local_60.field1 = *(int *)local_60.field1 + -1;
      local_21 = *(int *)local_60.field1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100101068;
    }
    QArrayData::deallocate((QArrayData *)local_60.field1,2,8);
  }
LAB_100101068:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_21 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100101095;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100101095:
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_21 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1001010c5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_1001010c5:
  QSettings::endGroup();
  QSettings::sync();
  QSettings::~QSettings((QSettings *)local_38);
  return;
}

