
undefined8 FUN_100b3f210(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  uVar5 = 0;
  if (param_1 != 0) {
    local_48 = *(Data **)(param_1 + 0x98);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 == 0) {
        QListData::detach((int)&local_48);
        lVar3 = (long)*(int *)(local_48 + 8);
        lVar2 = *(long *)(param_1 + 0x98);
        if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_48 + lVar3 * 8) &&
           (lVar4 = *(int *)(local_48 + 0xc) - lVar3,
           lVar4 != 0 && lVar3 <= *(int *)(local_48 + 0xc))) {
          _memcpy(local_48 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8)
                  ,lVar4 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + 1;
        local_21 = *(int *)local_48 != 0;
        UNLOCK();
      }
    }
    local_40 = local_48 + (long)*(int *)(local_48 + 8) * 8 + 0x10;
    local_38 = local_48 + (long)*(int *)(local_48 + 0xc) * 8 + 0x10;
    local_30 = 1;
    uVar5 = 0;
    if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
      do {
        local_30 = 1;
        uVar5 = *(undefined8 *)local_40;
        iVar1 = CVirtualNetwork::getNetworkType();
        if ((((iVar1 == 1) && (lVar2 = CVirtualNetwork::getHostOnlyNetwork(), lVar2 != 0)) &&
            (lVar2 = CHostOnlyNetwork::getParallelsAdapter(), lVar2 != 0)) &&
           (iVar1 = CParallelsAdapter::getPrlAdapterIndex(), iVar1 == param_2)) break;
        local_40 = local_40 + 8;
        local_30 = 1;
        uVar5 = 0;
      } while (local_40 != local_38);
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return uVar5;
        }
        local_21 = 0;
      }
      QListData::dispose(local_48);
    }
  }
  return uVar5;
}

