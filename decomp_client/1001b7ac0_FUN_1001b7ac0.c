
void FUN_1001b7ac0(undefined8 param_1,byte *param_2)

{
  QVariant local_40;
  Data_conflict local_30;
  QString local_28 [2];
  undefined1 local_11;
  
  if ((*param_2 & 2) == 0) {
    return;
  }
  QSettings::QSettings((QSettings *)local_28,(QObject *)0x0);
  if ((*param_2 & 0x80) != 0) {
    local_30.field7 = QString::fromAscii_helper("Antivirus/HavPromoOff",0x15);
    QVariant::QVariant(&local_40,true);
    QSettings::setValue(local_28,(QVariant *)&local_30);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_30.field15 != -1) {
      if (*(int *)local_30.field15 != 0) {
        LOCK();
        *(int *)local_30.field15 = *(int *)local_30.field15 + -1;
        local_11 = *(int *)local_30.field15 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1001b7b52;
      }
      QArrayData::deallocate((QArrayData *)local_30.field15,2,8);
    }
  }
LAB_1001b7b52:
  QSettings::~QSettings((QSettings *)local_28);
  return;
}

