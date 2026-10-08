
void FUN_10036de40(long *param_1,int param_2)

{
  QVariant local_68;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  Data_conflict local_38;
  QString local_30 [2];
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)local_30,(QObject *)0x0);
  local_48 = (QArrayData *)QString::fromAscii_helper("%1/%2",5);
  (**(code **)(*param_1 + 0x1a8))(&local_50,param_1);
  QString::arg(&local_40,&local_48,&local_50,0,0x20);
  local_58 = (QArrayData *)QString::fromAscii_helper("Scale View Mode",0xf);
  QString::arg(&local_38,&local_40,&local_58,0,0x20);
  QVariant::QVariant(&local_68,param_2);
  QSettings::setValue(local_30,(QVariant *)&local_38);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_38.field15 != -1) {
    if (*(int *)local_38.field15 != 0) {
      LOCK();
      *(int *)local_38.field15 = *(int *)local_38.field15 + -1;
      local_19 = *(int *)local_38.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036df21;
    }
    QArrayData::deallocate((QArrayData *)local_38.field15,2,8);
  }
LAB_10036df21:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036df51;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10036df51:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036df81;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10036df81:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036dfb1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10036dfb1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10036dfe1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10036dfe1:
  QSettings::~QSettings((QSettings *)local_30);
  return;
}

