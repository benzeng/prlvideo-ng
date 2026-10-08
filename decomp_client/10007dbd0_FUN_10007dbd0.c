
void FUN_10007dbd0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  QVariant local_70;
  QVariant local_60;
  QVariant local_50;
  QArrayData *local_40;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  cVar2 = FUN_1001756c0(0x1d);
  uVar3 = 0;
  if (cVar2 == '\0') goto LAB_10007dd25;
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1a0))(&local_40);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_21 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_30,0x1db9f41);
  QString::append(&local_38);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007dc71;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10007dc71:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007dca1;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10007dca1:
  QSettings::QSettings((QSettings *)&local_60,(QObject *)0x0);
  QVariant::QVariant(&local_70,0);
  QSettings::value((QString *)&local_50,&local_60);
  uVar3 = QVariant::toInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_70);
  QSettings::~QSettings((QSettings *)&local_60);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10007dd25;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10007dd25:
  puVar1 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (*(undefined8 *)(param_1 + 0x18),PTR_s_vmList_102269ef0);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_storage_102269f20);
  (*(code *)puVar1)(uVar4,PTR_s_setSortOrder__102269f28,uVar3);
  return;
}

