
undefined8 FUN_1006b7c20(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar3 = CParallelsNetworkConfig::getVirtualNetworks();
  uVar6 = 0;
  if (lVar3 != 0) {
    local_40 = *(Data **)(lVar3 + 0x98);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 == 0) {
        QListData::detach((int)&local_40);
        lVar4 = (long)*(int *)(local_40 + 8);
        lVar3 = *(long *)(lVar3 + 0x98);
        if (((Data *)(lVar3 + (long)*(int *)(lVar3 + 8) * 8) != local_40 + lVar4 * 8) &&
           (lVar5 = *(int *)(local_40 + 0xc) - lVar4,
           lVar5 != 0 && lVar4 <= *(int *)(local_40 + 0xc))) {
          _memcpy(local_40 + lVar4 * 8 + 0x10,(void *)(lVar3 + 0x10 + (long)*(int *)(lVar3 + 8) * 8)
                  ,lVar5 * 8);
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
    uVar6 = 0;
    if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
      do {
        local_28 = 1;
        uVar6 = *(undefined8 *)local_38;
        cVar1 = CVirtualNetwork::isEnabled();
        if ((cVar1 != '\0') && (iVar2 = CVirtualNetwork::getNetworkType(), iVar2 == 0)) break;
        local_38 = local_38 + 8;
        local_28 = 1;
        uVar6 = 0;
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
  return uVar6;
}

