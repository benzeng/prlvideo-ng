
void FUN_100610e20(undefined8 param_1)

{
  QDateTime local_50;
  QVariant local_48;
  Data_conflict local_38;
  QString local_30 [2];
  QArrayData *local_20;
  undefined1 local_11;
  
  QVariant::toString();
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  QString::fromUtf8_helper(&local_38.field0,0x1e078d3);
  QString::append((QString *)&local_38);
  QDateTime::currentDateTime();
  QVariant::QVariant(&local_48,&local_50);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_48);
  QDateTime::~QDateTime(&local_50);
  FUN_1006103a0(param_1,&local_20);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_11 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_100610eda;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_100610eda:
  QSettings::~QSettings((QSettings *)local_30);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return;
}

