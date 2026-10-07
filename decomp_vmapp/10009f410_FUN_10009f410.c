
void FUN_10009f410(long param_1,long *param_2)

{
  code *pcVar1;
  uint uVar2;
  QString QVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  char *pcVar6;
  QArrayData *local_110;
  CVmGuestOsInformation local_108 [223];
  undefined1 local_29;
  
  QVar3.field0_0x0 = (QTypedArrayData<unsigned_short> *)(**(code **)(*param_2 + 200))(param_2);
  CVmGuestOsInformation::CVmGuestOsInformation(local_108);
  CVmGuestOsInformation::setStarted(SUB81(local_108,0));
  pcVar1 = *(code **)(*param_2 + 0x1f0);
  CBaseNode::toString(SUB81(&local_110,0),SUB81(local_108,0));
  (*pcVar1)(param_2,&local_110);
  if (*(int *)local_110 != -1) {
    if (*(int *)local_110 != 0) {
      LOCK();
      *(int *)local_110 = *(int *)local_110 + -1;
      local_29 = *(int *)local_110 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009f4b7;
    }
    QArrayData::deallocate(local_110,2,8);
  }
LAB_10009f4b7:
  CRepAdvancedEngineInfo::setEngineTypeNum((uint)QVar3.field0_0x0);
  uVar2 = *(int *)(param_1 + 0x109e8) - 1;
  if (uVar2 < 4) {
    pcVar6 = (&PTR_s_SelfContext_100ba8980)[(int)uVar2];
  }
  else {
    pcVar6 = "Unknown";
  }
  sVar4 = _strlen(pcVar6);
  pQVar5 = (QArrayData *)QString::fromAscii_helper(pcVar6,(int)sVar4);
  CRepAdvancedEngineInfo::setEngineTypeStr(QVar3);
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10009f548;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10009f548:
  CVmGuestOsInformation::~CVmGuestOsInformation(local_108);
  return;
}

