
void FUN_100537ec0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 local_838;
  uint local_834;
  
  if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmTools();
    CVmTools::getVmSharing();
    lVar8 = CVmSharing::getGuestSharing();
    if (lVar8 != 0) {
      cVar3 = CVmGuestSharing::isEnabled();
      if (cVar3 == '\0') {
        bVar4 = 0;
      }
      else {
        bVar4 = 1;
        if (*(long *)(DAT_1011c3698 + 0x110) != 0) {
          CVmConfiguration::getVmSettings();
          CVmSettings::getVmTools();
          bVar4 = CVmTools::isIsolatedVm();
          bVar4 = bVar4 ^ 1;
        }
      }
      LOCK();
      uVar1 = *(uint *)((long)param_1 + 0x24);
      *(uint *)((long)param_1 + 0x24) = (uint)bVar4;
      UNLOCK();
      cVar3 = *(char *)((long)param_1 + 0x2c);
      cVar5 = CVmGuestSharing::isEnableSpotlight();
      lVar8 = param_1[5];
      cVar6 = CVmGuestSharing::isAutoMount();
      if ((char)lVar8 == cVar6) {
        if ((cVar3 == cVar5) || ((char)param_1[5] == '\0')) {
          cVar3 = *(char *)((long)param_1 + 0x2a);
          cVar5 = CVmGuestSharing::isAutoMountNetworkDrives();
          if (cVar3 == cVar5) {
            cVar3 = *(char *)((long)param_1 + 0x2b);
            cVar5 = CVmGuestSharing::isAutoMountCloudDrives();
            bVar11 = cVar3 == cVar5;
          }
          else {
            bVar11 = false;
          }
        }
        else {
          bVar11 = false;
        }
      }
      else {
        bVar11 = false;
      }
      uVar7 = CVmGuestSharing::isAutoMount();
      *(undefined1 *)(param_1 + 5) = uVar7;
      uVar7 = CVmGuestSharing::isAutoMountNetworkDrives();
      *(undefined1 *)((long)param_1 + 0x2a) = uVar7;
      uVar7 = CVmGuestSharing::isAutoMountCloudDrives();
      *(undefined1 *)((long)param_1 + 0x2b) = uVar7;
      uVar7 = CVmGuestSharing::isEnableSpotlight();
      *(undefined1 *)((long)param_1 + 0x2c) = uVar7;
      if ((int)param_1[4] == 0) {
        if (1 < DAT_1011b55f8) {
          FUN_1008e3970("","InvSharingHost",2,
                        "applyConfig: it looks like the guest tool is not available");
          return;
        }
      }
      else {
        uVar9 = 1;
        if (*(char *)((long)param_1 + 0x2a) != '\0') {
          uVar9 = 3;
        }
        if (*(char *)((long)param_1 + 0x2b) != '\0') {
          uVar9 = uVar9 | 4;
        }
        if (*(long *)(DAT_1011c3698 + 0x118) == 0) {
          cVar3 = '\0';
        }
        else {
          CDispCommonPreferences::getWorkspacePreferences();
          cVar3 = CDispWorkspacePreferences::isMountNTFSToHostOnConnectionToVm();
        }
        uVar2 = uVar9 | 8;
        if (cVar3 == '\0') {
          uVar2 = uVar9;
        }
        if (uVar1 == bVar4) {
          if (!bVar11 && *(int *)((long)param_1 + 0x24) != 0) {
            if (1 < DAT_1011b55f8) {
              FUN_1008e3970("","InvSharingHost",2,"remounting guest shares...");
            }
            lVar8 = *param_1;
            ___bzero(&local_838,0x808);
            local_838 = 0x105;
            cVar3 = FUN_100539490(*(undefined8 *)(lVar8 + 0x38),&local_838,5000);
            if (cVar3 == '\0') {
              FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
            }
            lVar8 = *param_1;
            ___bzero(&local_838,0x808);
            local_838 = 0x104;
            local_834 = uVar2;
            cVar3 = FUN_100539490(*(undefined8 *)(lVar8 + 0x38),&local_838,5000);
            if (cVar3 == '\0') {
              FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
            }
            if (1 < DAT_1011b55f8) {
              pcVar10 = "fail";
              if (cVar3 != '\0') {
                pcVar10 = "success";
              }
              FUN_1008e3970("","InvSharingHost",2,"remounted guest shares: %s",pcVar10);
            }
          }
        }
        else {
          lVar8 = *param_1;
          if (*(int *)((long)param_1 + 0x24) == 0) {
            ___bzero(&local_838,0x808);
            local_838 = 0x105;
            cVar3 = FUN_100539490(*(undefined8 *)(lVar8 + 0x38),&local_838,5000);
            if (cVar3 != '\0') {
              return;
            }
            FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
            pcVar10 = "failed to stop sharing";
          }
          else {
            ___bzero(&local_838,0x808);
            local_838 = 0x104;
            local_834 = uVar2;
            cVar3 = FUN_100539490(*(undefined8 *)(lVar8 + 0x38),&local_838,5000);
            if (cVar3 != '\0') {
              return;
            }
            FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed");
            pcVar10 = "failed to share fixed drives";
          }
          FUN_1008e3970("","InvSharingHost",0,pcVar10);
        }
      }
    }
  }
  return;
}

