
void FUN_10048f170(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_2 = 1;
  *param_3 = 1;
  lVar3 = CVmConfiguration::getVmHardwareList();
  local_58 = *(Data **)(lVar3 + 0x1d0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar3 = *(long *)(lVar3 + 0x1d0);
      if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      iVar2 = CVmDevice::getEnabled();
      if (((iVar2 == 1) && (cVar1 = CVmGenericNetworkAdapter::isAutoApply(), cVar1 != '\0')) &&
         (iVar2 = CVmDevice::getEmulatedType(), iVar2 != 5)) {
        cVar1 = CVmGenericNetworkAdapter::isConfigureWithDhcp();
        if (cVar1 == '\0') {
          CVmGenericNetworkAdapter::getDefaultGateway();
          iVar2 = *(int *)(local_60 + 4);
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048f2c0;
            }
            QArrayData::deallocate(local_60,2,8);
          }
LAB_10048f2c0:
          if (iVar2 != 0) goto LAB_10048f2c5;
        }
        else {
LAB_10048f2c5:
          *param_2 = 0;
        }
        cVar1 = CVmGenericNetworkAdapter::isConfigureWithDhcpIPv6();
        if (cVar1 == '\0') {
          CVmGenericNetworkAdapter::getDefaultGatewayIPv6();
          iVar2 = *(int *)(local_68 + 4);
          if (*(int *)local_68 != -1) {
            if (*(int *)local_68 != 0) {
              LOCK();
              *(int *)local_68 = *(int *)local_68 + -1;
              local_31 = *(int *)local_68 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10048f315;
            }
            QArrayData::deallocate(local_68,2,8);
          }
LAB_10048f315:
          if (iVar2 == 0) goto LAB_10048f320;
        }
        *param_3 = 0;
      }
LAB_10048f320:
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      UNLOCK();
      if (*(int *)local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_58);
  }
  return;
}

