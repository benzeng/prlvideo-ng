
undefined8 FUN_1000bb2a0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_40;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001548f0(uVar4,param_1 + 2);
  if (lVar5 != 0) {
    FUN_10018c2b0(lVar5);
    lVar5 = CVmConfiguration::getVmSettings();
    if ((lVar5 != 0) && (lVar5 = CVmSettings::getVmTools(), lVar5 != 0)) {
      bVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
      bVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
      cVar3 = (**(code **)(*param_1 + 0xb0))(param_1,param_2);
      if (cVar3 == '\0') {
        if ((bVar1 | bVar2) == 1) {
          if ((bVar1 ^ bVar2) != 1) {
            return 0xfffffffe;
          }
          CVmTools::getVmSharing();
          CVmSharing::getHostSharing();
          cVar3 = CVmHostSharing::isEnabled();
          if (cVar3 == '\0') {
            return 2;
          }
          cVar3 = CVmHostSharing::isShareAllMacDisks();
          if (cVar3 != '\0') {
            return 0;
          }
          if (bVar2 == 0) {
            return 2;
          }
          cVar3 = CVmHostSharing::isShareUserHomeDir();
        }
        else {
          CVmTools::getVmSharing();
          CVmSharing::getHostSharing();
          cVar3 = CVmHostSharing::isUserDefinedFoldersEnabled();
          if (cVar3 == '\0') {
            return 2;
          }
          lVar5 = FUN_1000bc130();
          if (lVar5 == 0) {
            return 0xfffffffe;
          }
          cVar3 = CVmSharedFolder::isEnabled();
        }
      }
      else {
        CVmTools::getVmSharing();
        CVmSharing::getGuestSharing();
        cVar3 = CVmGuestSharing::isEnabled();
      }
      if (cVar3 == '\0') {
        return 2;
      }
      return 0;
    }
  }
  QString::toUtf8();
  FUN_100df99c0("SGAA","prl_client_app",0,
                "Error: failed to get Vm Tools configuration for Vm with vmUuid=\"%s\"",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return 0xfffffffe;
      }
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return 0xfffffffe;
}

