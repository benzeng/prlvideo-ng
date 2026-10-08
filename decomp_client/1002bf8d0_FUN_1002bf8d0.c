
bool FUN_1002bf8d0(long param_1)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined8 uVar3;
  QDateTime local_30;
  QString local_28;
  QDateTime local_20;
  undefined1 local_11;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_10018c2b0(uVar3);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmProtection();
  CVmProtection::getExpirationInfo();
  CVmExpiration::getExpirationDate();
  QDateTime::toTimeSpec(&local_30,&local_20,1);
  pQVar2 = (QArrayData *)QString::fromAscii_helper("yyyy-MM-dd hh:mm:ss",0x13);
  QDateTime::toString(&local_28);
  iVar1 = QString::compare_helper
                    ((QArrayData *)(local_28.field0_0x0 + *(long *)(local_28.field0_0x0 + 0x10)),
                     *(undefined4 *)(local_28.field0_0x0 + 4),"1752-01-01 00:00:00",0xffffffff,1);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002bf9ad;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1002bf9ad:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_11 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1002bf9dd;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1002bf9dd:
  QDateTime::~QDateTime(&local_30);
  QDateTime::~QDateTime(&local_20);
  return iVar1 == 0;
}

