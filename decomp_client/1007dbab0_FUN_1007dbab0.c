
void FUN_1007dbab0(undefined8 param_1,QVariant *param_2,undefined8 param_3)

{
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  QArrayData *local_78;
  QVariant local_70;
  QArrayData *local_60;
  QString local_58 [2];
  QDataStream local_48 [39];
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)local_58,(QObject *)0x0);
  puVar1 = PTR_s_PDLFeedback_PendingReports_102275080;
  iVar3 = -1;
  if (PTR_s_PDLFeedback_PendingReports_102275080 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_PDLFeedback_PendingReports_102275080);
    iVar3 = (int)sVar2;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar3);
  QSettings::beginGroup(local_58);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007dbb36;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007dbb36:
  local_78 = (QArrayData *)PTR_shared_null_1021e1288;
  QDataStream::QDataStream(local_48,&local_78,2);
  FUN_1007dc000(local_48,param_3);
  QDataStream::~QDataStream(local_48);
  QVariant::QVariant(&local_70,(QByteArray *)&local_78);
  QSettings::setValue(local_58,param_2);
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007dbbbe;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_1007dbbbe:
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_58);
  return;
}

