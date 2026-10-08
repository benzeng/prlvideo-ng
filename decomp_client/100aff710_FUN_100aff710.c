
void FUN_100aff710(QString param_1,QString *param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  QArrayData *pQVar4;
  uint uVar5;
  char *pcVar6;
  QArrayData *local_550;
  QArrayData *local_548;
  undefined4 local_53c;
  QString local_538;
  utsname local_530;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if ((param_1.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) && (param_2 == (QString *)0x0))
  {
    FUN_100df99c0("","pvsHostInfo",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "pOsVer || pOutOsVersionAsString","CHostInfo_mac.cpp",0x4eb,"GetOsVersion");
    goto LAB_100affa0e;
  }
  if (param_2 != (QString *)0x0) {
    FUN_100b00170(&local_538);
    QString::operator=(param_2,&local_538);
    if (*(int *)local_538.field0_0x0 != -1) {
      if (*(int *)local_538.field0_0x0 != 0) {
        LOCK();
        *(int *)local_538.field0_0x0 = *(int *)local_538.field0_0x0 + -1;
        local_530.sysname[0] = *(int *)local_538.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_530.sysname[0]) goto LAB_100aff7e3;
      }
      QArrayData::deallocate((QArrayData *)local_538.field0_0x0,2,8);
    }
  }
LAB_100aff7e3:
  if (param_1.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) goto LAB_100affa0e;
  local_53c = 0;
  CHwOsVersion::setOsType(param_1.field0_0x0,0);
  sVar2 = _Gestalt(0x73797331,&local_53c);
  uVar5 = (uint)param_1.field0_0x0;
  if (sVar2 == 0) {
    CHwOsVersion::setMajor(uVar5);
  }
  else {
    FUN_100df99c0("","pvsHostInfo",0,
                  "CDspHostInfo::getOSVersion() : Gestalt( gestaltSystemVersionMajor ) returns rrror code = [%d]"
                  ,(int)sVar2);
  }
  sVar2 = _Gestalt(0x73797332,&local_53c);
  if (sVar2 == 0) {
    CHwOsVersion::setMinor(uVar5);
  }
  else {
    FUN_100df99c0("","pvsHostInfo",0,
                  "CDspHostInfo::GetOSVersion() : Gestalt( gestaltSystemVersionMinor ) returns rrror code = [%d]"
                  ,(int)sVar2);
  }
  sVar2 = _Gestalt(0x73797333,&local_53c);
  if (sVar2 == 0) {
    CHwOsVersion::setSubMinor(uVar5);
  }
  else {
    FUN_100df99c0("","pvsHostInfo",0,
                  "CDspHostInfo::GetOSVersion() : Gestalt( gestaltSystemVersionBugFix ) returns rrror code = [%d]"
                  ,(int)sVar2);
  }
  FUN_100b00170(&local_548);
  CHwOsVersion::setStringPresentation(param_1);
  if (*(int *)local_548 != -1) {
    if (*(int *)local_548 != 0) {
      LOCK();
      *(int *)local_548 = *(int *)local_548 + -1;
      local_530.sysname[0] = *(int *)local_548 != 0;
      UNLOCK();
      if ((bool)local_530.sysname[0]) goto LAB_100aff92e;
    }
    QArrayData::deallocate(local_548,2,8);
  }
LAB_100aff92e:
  FUN_100aeeb70(&local_550);
  CHwOsVersion::setOsArchitecture(param_1);
  if (*(int *)local_550 != -1) {
    if (*(int *)local_550 != 0) {
      LOCK();
      *(int *)local_550 = *(int *)local_550 + -1;
      local_530.sysname[0] = *(int *)local_550 != 0;
      UNLOCK();
      if ((bool)local_530.sysname[0]) goto LAB_100aff984;
    }
    QArrayData::deallocate(local_550,2,8);
  }
LAB_100aff984:
  iVar3 = _uname(&local_530);
  if ((iVar3 == 0) && (iVar3 = _strcmp(local_530.machine,"x86_64"), iVar3 == 0)) {
    pcVar6 = "64";
  }
  else {
    pcVar6 = "32";
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar6,2);
  CHwOsVersion::setKernelArchitecture(param_1);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      local_530.sysname[0] = *(int *)pQVar4 != 0;
      UNLOCK();
      if ((bool)local_530.sysname[0]) goto LAB_100affa0e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100affa0e:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

