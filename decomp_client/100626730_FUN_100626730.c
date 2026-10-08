
undefined8 FUN_100626730(undefined8 param_1)

{
  QString local_58;
  QVariant local_50;
  QArrayData *local_40;
  QVariant local_38;
  QVariant local_28;
  undefined1 local_11;
  
  QSettings::QSettings((QSettings *)&local_28,(QObject *)0x0);
  local_40 = (QArrayData *)QString::fromAscii_helper("ActivationProblemContactUrl",0x1b);
  local_58.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("",0);
  QVariant::QVariant(&local_50,&local_58);
  QSettings::value((QString *)&local_38,&local_28);
  QVariant::toString();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_50);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_11 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006267de;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1006267de:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_11 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10062680e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062680e:
  QSettings::~QSettings((QSettings *)&local_28);
  return param_1;
}

