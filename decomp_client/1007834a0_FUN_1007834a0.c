
void FUN_1007834a0(long param_1,bool param_2)

{
  QVariant local_60;
  QArrayData *local_50;
  Data_conflict local_48;
  QString local_40 [2];
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
  FUN_10077f090(&local_50,*(undefined4 *)(param_1 + 0x88));
  local_48.field15 = (QObject *)local_50;
  if (1 < *(int *)local_50 + 1U) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + 1;
    local_19 = *(int *)local_50 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1e2468c);
  QString::append((QString *)&local_48);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100783536;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100783536:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100783566;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100783566:
  QString::append((QString *)&local_48);
  QString::fromUtf8_helper((char *)&local_28,0x1de5937);
  QString::append((QString *)&local_48);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007835c8;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007835c8:
  QVariant::QVariant(&local_60,param_2);
  QSettings::setValue(local_40,(QVariant *)&local_48);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10078361f;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_10078361f:
  QSettings::~QSettings((QSettings *)local_40);
  return;
}

