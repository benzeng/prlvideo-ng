
undefined8 * FUN_1007dbcd0(undefined8 *param_1)

{
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  Data_conflict local_88;
  undefined4 local_80;
  QVariant local_78;
  QArrayData *local_68;
  QArrayData *local_60;
  QVariant local_58;
  QDataStream local_48 [39];
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_58,(QObject *)0x0);
  puVar1 = PTR_s_PDLFeedback_PendingReports_102275080;
  iVar3 = -1;
  if (PTR_s_PDLFeedback_PendingReports_102275080 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_PDLFeedback_PendingReports_102275080);
    iVar3 = (int)sVar2;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  QSettings::beginGroup((QString *)&local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007dbd56;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007dbd56:
  local_80 = 0x80000000;
  local_88.field7 = 0;
  QSettings::value((QString *)&local_78,&local_58);
  QVariant::toByteArray();
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant((QVariant *)&local_88);
  QSettings::endGroup();
  QDataStream::QDataStream(local_48,(QByteArray *)&local_68);
  *param_1 = PTR_shared_null_1021e15d0;
  FUN_1007dc090(local_48,param_1);
  QDataStream::~QDataStream(local_48);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007dbdfd;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1007dbdfd:
  QSettings::~QSettings((QSettings *)&local_58);
  return param_1;
}

