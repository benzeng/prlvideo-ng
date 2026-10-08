
undefined8 FUN_1003bb560(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  
  cVar2 = FUN_100d80630(1);
  if (cVar2 != '\0') {
    return 0;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getLockDown();
  CVmLockDown::getHash();
  iVar1 = *(int *)(local_28 + 4);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_1003bb5d0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1003bb5d0:
  if (iVar1 == 0) {
    CVmConfiguration::getVmSecurity();
    uVar3 = CVmSecurity::isLockedSign();
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

