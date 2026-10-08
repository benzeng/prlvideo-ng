
void FUN_1007d29c0(void)

{
  int iVar1;
  int iVar2;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  QString local_60;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QString local_38;
  QArrayData *local_30;
  Data_conflict local_28;
  undefined1 local_19;
  
  local_28.field15 = (QObject *)PTR_shared_null_1021e1288;
  FUN_1007d2760(&local_30);
  QString::append((QString *)&local_28);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d2a25;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1007d2a25:
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_38);
  QString::append((QString *)&local_28);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d2a83;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007d2a83:
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_40);
  QString::append((QString *)&local_28);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_19 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d2ae1;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007d2ae1:
  FUN_100a04400(&local_58);
  FUN_1007caa20(&local_60);
  QSettings::QSettings((QSettings *)&local_50,&local_58,&local_60,(QObject *)0x0);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_19 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d2b36;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1007d2b36:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_19 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1007d2b66;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_1007d2b66:
  QVariant::QVariant(&local_80,-1);
  QSettings::value((QString *)&local_70,&local_50);
  iVar1 = QVariant::toInt((bool *)&local_70);
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant(&local_80);
  iVar2 = 1;
  if (iVar1 != -1) {
    iVar2 = iVar1 + 1;
  }
  QVariant::QVariant(&local_90,iVar2);
  QSettings::setValue((QString *)&local_50,(QVariant *)&local_28);
  QVariant::~QVariant(&local_90);
  QSettings::~QSettings((QSettings *)&local_50);
  if (*(int *)local_28.field15 != -1) {
    if (*(int *)local_28.field15 != 0) {
      LOCK();
      *(int *)local_28.field15 = *(int *)local_28.field15 + -1;
      UNLOCK();
      if (*(int *)local_28.field15 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field15,2,8);
  }
  return;
}

