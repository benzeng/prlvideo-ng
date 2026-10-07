
void FUN_100025860(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  uint local_34;
  
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    return;
  }
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmTools();
  CVmTools::getVmSharing();
  cVar2 = CVmSharing::getHostSharing();
  CVmTools::getVmSharing();
  cVar3 = CVmSharing::getHostSharing();
  bVar4 = CVmTools::isIsolatedVm();
  bVar5 = CVmTools::isIsolatedVm();
  if ((bVar5 ^ bVar4) == 0) {
    CBaseNode::toString(SUB81(&local_40,0),(bool)(cVar2 + '\x10'));
    CBaseNode::toString(SUB81(&local_48,0),(bool)(cVar3 + '\x10'));
    cVar2 = operator==(&local_40,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_48.field0_0x0 != 0);
        if (*(int *)local_48.field0_0x0 != 0) goto LAB_100025955;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100025955:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_40.field0_0x0 != 0);
        if (*(int *)local_40.field0_0x0 != 0) goto LAB_100025985;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100025985:
    if (cVar2 == '\0') goto LAB_10002598a;
  }
  else {
LAB_10002598a:
    cVar2 = CVmHostSharing::isMapSharedFoldersOnLetters();
    if (cVar2 == '\0') {
      bVar6 = 0;
    }
    else {
      bVar6 = CVmTools::isIsolatedVm();
      bVar6 = bVar6 ^ 1;
    }
    *(byte *)(param_1 + 0x88) = bVar6;
    if (*(char *)(param_1 + 0x70) != '\0') {
      local_34 = (uint)bVar6;
      FUN_1004c2f50(*(undefined8 *)(param_1 + 0x78),8,&local_34,4,1,0);
    }
  }
  CVmTools::getSharedVolumes();
  CVmTools::getSharedVolumes();
  if (((bVar5 ^ bVar4) & 1) == 0) {
    cVar2 = CVmSharedVolumes::isEnabled();
    cVar3 = CVmSharedVolumes::isEnabled();
    if (cVar2 == cVar3) goto LAB_100025a6d;
  }
  cVar2 = CVmTools::isIsolatedVm();
  if (cVar2 == '\0') {
    CVmTools::getSharedVolumes();
    cVar2 = CVmSharedVolumes::isEnabled();
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x89) = cVar2;
  if (cVar2 == '\0') {
    FUN_1004ec3e0(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0xa0));
  }
  else {
    FUN_1004ec360();
  }
LAB_100025a6d:
  if (*(char *)(param_1 + 0x89) != '\0') {
    cVar2 = CVmSharedVolumes::isUseExternalDisks();
    cVar3 = CVmSharedVolumes::isUseExternalDisks();
    if (cVar2 == cVar3) {
      cVar2 = CVmSharedVolumes::isUseDVDs();
      cVar3 = CVmSharedVolumes::isUseDVDs();
      if (cVar2 == cVar3) {
        cVar2 = CVmSharedVolumes::isUseConnectedServers();
        cVar3 = CVmSharedVolumes::isUseConnectedServers();
        if (cVar2 == cVar3) {
          bVar4 = CVmSharedVolumes::isUseInversedDisks();
          bVar5 = CVmSharedVolumes::isUseInversedDisks();
          if ((bVar5 ^ bVar4) != 1) {
            return;
          }
        }
      }
    }
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xa0);
    local_50 = (QArrayData *)QString::fromAscii_helper("/Volumes",8);
    FUN_1004ec530(uVar1,&local_50);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        local_34 = CONCAT31(local_34._1_3_,*(int *)local_50 != 0);
        if (*(int *)local_50 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
  return;
}

