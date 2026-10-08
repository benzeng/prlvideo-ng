
void FUN_10060c360(long param_1,undefined4 param_2)

{
  int iVar1;
  int *local_98 [2];
  QDateTime local_88;
  QVariant local_80;
  Data_conflict local_70;
  QString local_68 [2];
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  QObject::sender();
  QObject::property((char *)&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_48);
  QObject::sender();
  QObject::property((char *)&local_58);
  iVar1 = QVariant::toInt((bool *)&local_58);
  QVariant::~QVariant(&local_58);
  if (iVar1 != 6) goto LAB_10060c480;
  QSettings::QSettings((QSettings *)local_68,(QObject *)0x0);
  QString::fromUtf8_helper(&local_70.field0,0x1e0721e);
  QString::append((QString *)&local_70);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_80,&local_88);
  QSettings::setValue(local_68,(QVariant *)&local_70);
  QVariant::~QVariant(&local_80);
  QDateTime::~QDateTime(&local_88);
  if (*(int *)local_70.field15 != -1) {
    if (*(int *)local_70.field15 != 0) {
      LOCK();
      *(int *)local_70.field15 = *(int *)local_70.field15 + -1;
      local_29 = *(int *)local_70.field15 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10060c477;
    }
    QArrayData::deallocate((QArrayData *)local_70.field15,2,8);
  }
LAB_10060c477:
  QSettings::~QSettings((QSettings *)local_68);
LAB_10060c480:
  FUN_1006136e0(local_98,param_1 + 0x28,&local_38);
  if (local_98[0] != (int *)0x0) {
    LOCK();
    *local_98[0] = *local_98[0] + -1;
    local_29 = *local_98[0] != 0;
    UNLOCK();
    if (!(bool)local_29) {
      operator_delete(local_98[0]);
    }
  }
  FUN_10060a040(param_1,iVar1,&local_38,param_2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}

