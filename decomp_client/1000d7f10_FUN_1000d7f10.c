
bool FUN_1000d7f10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  QArrayData *local_20;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 == 0) {
    QString::toUtf8();
    FUN_100df99c0("SGAC","prl_client_app",0,"Failed to get Vm for vmUuid=\"%s\"",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 == -1) {
      bVar4 = false;
    }
    else {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return false;
        }
      }
      QArrayData::deallocate(local_20,1,8);
      bVar4 = false;
    }
  }
  else {
    FUN_10018c2b0(lVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar1 = CVmCommonOptions::getOsType();
    bVar4 = iVar1 != 8;
  }
  return bVar4;
}

