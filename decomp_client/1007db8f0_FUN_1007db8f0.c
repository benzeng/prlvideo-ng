
undefined8 FUN_1007db8f0(undefined8 param_1)

{
  undefined *puVar1;
  size_t sVar2;
  QArrayData *pQVar3;
  int iVar4;
  QString local_40 [2];
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)local_40,(QObject *)0x0);
  puVar1 = PTR_s_PDLFeedback_PendingReports_102275080;
  iVar4 = -1;
  if (PTR_s_PDLFeedback_PendingReports_102275080 != (undefined *)0x0) {
    sVar2 = _strlen(PTR_s_PDLFeedback_PendingReports_102275080);
    iVar4 = (int)sVar2;
  }
  pQVar3 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar4);
  QSettings::beginGroup(local_40);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007db975;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1007db975:
  QSettings::childKeys();
  QSettings::endGroup();
  QSettings::~QSettings((QSettings *)local_40);
  return param_1;
}

