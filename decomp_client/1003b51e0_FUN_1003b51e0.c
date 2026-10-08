
void FUN_1003b51e0(undefined4 param_1,int *param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  Data *local_50;
  Data *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_29;
  
  switch(param_1) {
  case 0xb:
    *param_2 = *param_2 + -1 + (uint)param_4 * 2;
    break;
  case 0xc:
    iVar6 = param_2[2];
    param_2[2] = iVar6 + -1 + (uint)param_4 * 2;
    lVar3 = CVmConfiguration::getVmHardwareList();
    local_50 = *(Data **)(lVar3 + 0x1a8);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 == 0) {
        QListData::detach((int)&local_50);
        lVar4 = (long)*(int *)(local_50 + 8);
        lVar3 = *(long *)(lVar3 + 0x1a8);
        if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_50 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_50 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_50 + 0xc))) {
          _memcpy(local_50 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8)
                  ,lVar5 * 8);
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
      iVar2 = (uint)param_4 * 2;
      iVar1 = iVar2 + -1;
      iVar6 = iVar2 + -2 + iVar6;
      do {
        local_38 = 1;
        if (iVar6 == 0) {
          iVar2 = CVmClusteredDevice::getInterfaceType();
          if (iVar2 == 0) {
            param_2[3] = param_2[3] + iVar1;
          }
          else {
            iVar2 = CVmClusteredDevice::getInterfaceType();
            if (iVar2 == 1) {
              param_2[4] = param_2[4] + iVar1;
            }
            else {
              iVar2 = CVmClusteredDevice::getInterfaceType();
              if (iVar2 == 2) {
                param_2[5] = param_2[5] + iVar1;
              }
            }
          }
        }
        local_48 = local_48 + 8;
        iVar6 = iVar6 + -1;
      } while (local_48 != local_40);
    }
    local_38 = 1;
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        UNLOCK();
        if (*(int *)local_50 != 0) {
          return;
        }
        local_29 = 0;
      }
      QListData::dispose(local_50);
    }
    break;
  case 0xd:
    iVar6 = param_2[1];
    param_2[1] = iVar6 + -1 + (uint)param_4 * 2;
    lVar3 = CVmConfiguration::getVmHardwareList();
    local_70 = *(Data **)(lVar3 + 0x1b0);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 == 0) {
        QListData::detach((int)&local_70);
        lVar4 = (long)*(int *)(local_70 + 8);
        lVar3 = *(long *)(lVar3 + 0x1b0);
        if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_70 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_70 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_70 + 0xc))) {
          _memcpy(local_70 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8)
                  ,lVar5 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
      }
    }
    local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
    if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
      iVar2 = (uint)param_4 * 2;
      iVar1 = iVar2 + -1;
      iVar6 = iVar2 + -2 + iVar6;
      do {
        local_58 = 1;
        if (iVar6 == 0) {
          iVar2 = CVmClusteredDevice::getInterfaceType();
          if (iVar2 == 0) {
            param_2[3] = param_2[3] + iVar1;
          }
          else {
            iVar2 = CVmClusteredDevice::getInterfaceType();
            if (iVar2 == 1) {
              param_2[4] = param_2[4] + iVar1;
            }
            else {
              iVar2 = CVmClusteredDevice::getInterfaceType();
              if (iVar2 == 2) {
                param_2[5] = param_2[5] + iVar1;
              }
            }
          }
        }
        local_68 = local_68 + 8;
        iVar6 = iVar6 + -1;
      } while (local_68 != local_60);
    }
    local_58 = 1;
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        UNLOCK();
        if (*(int *)local_70 != 0) {
          return;
        }
        local_29 = 0;
      }
      QListData::dispose(local_70);
    }
    break;
  case 0xe:
    param_2[6] = param_2[6] + -1 + (uint)param_4 * 2;
    break;
  case 0xf:
    param_2[7] = param_2[7] + -1 + (uint)param_4 * 2;
    break;
  case 0x10:
    param_2[8] = param_2[8] + -1 + (uint)param_4 * 2;
    break;
  case 0x11:
    param_2[9] = param_2[9] + -1 + (uint)param_4 * 2;
    break;
  case 0x12:
    param_2[10] = param_2[10] + -1 + (uint)param_4 * 2;
  }
  return;
}

