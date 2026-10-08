
undefined1 FUN_10018f930(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getHostSharing();
  cVar1 = CVmHostSharing::isEnabled();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  CVmSharing::getGuestSharing();
  cVar2 = CVmGuestSharing::isEnabled();
  if (cVar1 == '\0') {
    uVar6 = 0;
  }
  else if ((cVar2 == '\0') && (cVar1 = FUN_100d80630(1), cVar1 == '\0')) {
    uVar6 = 0;
  }
  else {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    lVar3 = CVmSharing::getHostSharing();
    cVar1 = CVmHostSharing::isShareAllMacDisks();
    if ((cVar1 == '\0') && (cVar1 = CVmHostSharing::isShareUserHomeDir(), cVar1 == '\0')) {
      uVar6 = 0;
    }
    else {
      local_40 = *(Data **)(lVar3 + 0xa8);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 == 0) {
          QListData::detach((int)&local_40);
          lVar4 = (long)*(int *)(local_40 + 8);
          lVar3 = *(long *)(lVar3 + 0xa8);
          if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_40 + lVar4 * 8) &&
             (lVar5 = *(int *)(local_40 + 0xc) - lVar4,
             lVar5 != 0 && lVar4 <= *(int *)(local_40 + 0xc))) {
            _memcpy(local_40 + lVar4 * 8 + 0x10,
                    (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + 1;
          local_19 = *(int *)local_40 != 0;
          UNLOCK();
        }
      }
      local_38 = local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10;
      local_30 = local_40 + (long)*(int *)(local_40 + 0xc) * 8 + 0x10;
      local_28 = 1;
      uVar6 = 1;
      if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
        do {
          local_28 = 1;
          cVar1 = CVmSharedFolder::isEnabled();
          if (cVar1 == '\0') {
            uVar6 = 0;
            break;
          }
          local_38 = local_38 + 8;
          local_28 = 1;
        } while (local_38 != local_30);
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return uVar6;
          }
          local_19 = 0;
        }
        QListData::dispose(local_40);
      }
    }
  }
  return uVar6;
}

