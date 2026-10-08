
void FUN_1007cb7d0(int param_1)

{
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QString local_40;
  QString local_38;
  QVariant local_30;
  undefined1 local_19;
  
  FUN_100a04400(&local_38);
  FUN_1007caa20(&local_40);
  QSettings::QSettings((QSettings *)&local_30,&local_38,&local_40,(QObject *)0x0);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007cb833;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007cb833:
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007cb863;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007cb863:
  local_58 = (QArrayData *)QString::fromAscii_helper("Drop document to Vm icon",0x18);
  QVariant::QVariant(&local_68,0);
  QSettings::value((QString *)&local_50,&local_30);
  QVariant::toInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007cb8e7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007cb8e7:
  ClientStatistics::setDropDocumentToVmIcon(param_1 + 0x10);
  QSettings::~QSettings((QSettings *)&local_30);
  return;
}

