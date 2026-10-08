
void FUN_10007d450(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  QVariant local_50;
  QString local_40 [2];
  QArrayData *local_30;
  Data_conflict local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1a0))(&local_30);
  local_28.field15 = (QObject *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_11 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1db9f37);
  QString::append((QString *)&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10007d4d8;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10007d4d8:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10007d508;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10007d508:
  QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  iVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar2,PTR_s_mode_102269ef8);
  QVariant::QVariant(&local_50,iVar1);
  QSettings::setValue(local_40,(QVariant *)&local_28);
  QVariant::~QVariant(&local_50);
  QSettings::~QSettings((QSettings *)local_40);
  if (*(int *)local_28.field15 != -1) {
    if (*(int *)local_28.field15 != 0) {
      LOCK();
      *(int *)local_28.field15 = *(int *)local_28.field15 + -1;
      UNLOCK();
      if (*(int *)local_28.field15 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field15,2,8);
  }
  return;
}

