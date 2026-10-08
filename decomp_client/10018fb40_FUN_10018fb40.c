
undefined1 FUN_10018fb40(void)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
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
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  lVar3 = CVmSharing::getHostSharing();
  if ((cVar1 == '\0') && ((cVar2 == '\0' || (cVar1 = FUN_100d80630(1), cVar1 != '\0')))) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    CVmSharing::getHostSharing();
    cVar1 = CVmHostSharing::isUserDefinedFoldersEnabled();
    uVar6 = 1;
    if (cVar1 != '\0') {
      local_50 = *(Data **)(lVar3 + 0xa8);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 == 0) {
          QListData::detach((int)&local_50);
          lVar4 = (long)*(int *)(local_50 + 8);
          lVar3 = *(long *)(lVar3 + 0xa8);
          if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_50 + lVar4 * 8) &&
             (lVar5 = *(int *)(local_50 + 0xc) - lVar4,
             lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))) {
            _memcpy(local_50 + lVar4 * 8 + 0x10,
                    (void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),lVar5 * 8);
          }
        }
        else {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + 1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
        }
      }
      local_48 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
      local_40 = local_50 + (long)*(int *)(local_50 + 0xc) * 8 + 0x10;
      if (*(int *)(local_50 + 8) != *(int *)(local_50 + 0xc)) {
        do {
          local_38 = 1;
          cVar1 = CVmSharedFolder::isEnabled();
          if (cVar1 != '\0') {
            if (*(int *)local_50 == -1) goto LAB_10018fd33;
            if (*(int *)local_50 != 0) {
              LOCK();
              *(int *)local_50 = *(int *)local_50 + -1;
              UNLOCK();
              if (*(int *)local_50 != 0) goto LAB_10018fd33;
              local_29 = 0;
            }
            QListData::dispose(local_50);
            goto LAB_10018fd33;
          }
          local_48 = local_48 + 8;
        } while (local_48 != local_40);
      }
      local_38 = 1;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          UNLOCK();
          if (*(int *)local_50 != 0) {
            return 1;
          }
          local_29 = 0;
        }
        QListData::dispose(local_50);
      }
    }
  }
  else {
LAB_10018fd33:
    uVar6 = 0;
  }
  return uVar6;
}

