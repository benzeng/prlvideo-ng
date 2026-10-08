
void FUN_10002ba20(long param_1)

{
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  QVariant local_58;
  Data_conflict local_48;
  QArrayData *local_40;
  QString local_38 [2];
  QDateTime local_28;
  undefined1 local_19;
  
  QDateTime::currentDateTime();
  QDateTime::operator=((QDateTime *)(param_1 + 0x30),&local_28);
  QDateTime::~QDateTime(&local_28);
  QSettings::QSettings((QSettings *)local_38,(QObject *)0x0);
  puVar1 = PTR_s_PDLFeedback_102275060;
  iVar3 = -1;
  if (PTR_s_PDLFeedback_102275060 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_PDLFeedback_102275060);
    iVar3 = (int)sVar2;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  QSettings::beginGroup(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10002bac5;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10002bac5:
  puVar1 = PTR_s_LastShown_102275070;
  iVar3 = -1;
  if (PTR_s_LastShown_102275070 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_LastShown_102275070);
    iVar3 = (int)sVar2;
  }
  local_48.field7 = QString::fromAscii_helper(puVar1,iVar3);
  QVariant::QVariant(&local_58,(QDateTime *)(param_1 + 0x30));
  QSettings::setValue(local_38,(QVariant *)&local_48);
  QVariant::~QVariant(&local_58);
  if (*(int *)local_48.field15 != -1) {
    if (*(int *)local_48.field15 != 0) {
      LOCK();
      *(int *)local_48.field15 = *(int *)local_48.field15 + -1;
      local_19 = *(int *)local_48.field15 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10002bb46;
    }
    QArrayData::deallocate((QArrayData *)local_48.field15,2,8);
  }
LAB_10002bb46:
  QSettings::sync();
  QSettings::~QSettings((QSettings *)local_38);
  return;
}

