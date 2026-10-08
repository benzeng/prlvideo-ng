
byte FUN_10011a340(undefined8 param_1,int param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  Data *local_48;
  Data *local_40;
  Data *local_38;
  undefined4 local_30;
  undefined1 local_21;
  
  uVar3 = CVmConfiguration::getVmHardwareList();
  local_48 = *(Data **)(uVar3 + 0x1b0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 == 0) {
      QListData::detach((int)&local_48);
      lVar4 = (long)*(int *)(local_48 + 8);
      lVar1 = *(long *)(uVar3 + 0x1b0);
      if (((Data *)(lVar1 + (long)*(int *)(lVar1 + 8) * 8) != local_48 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_48 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_48 + 0xc))
         ) {
        _memcpy(local_48 + lVar4 * 8 + 0x10,(void *)(lVar1 + 0x10 + (long)*(int *)(lVar1 + 8) * 8),
                lVar5 * 8);
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
  if (*(int *)(local_48 + 8) != *(int *)(local_48 + 0xc)) {
    do {
      local_30 = 1;
      iVar2 = CVmDevice::getIndex();
      if (iVar2 == param_2) {
        iVar2 = CVmClusteredDevice::getInterfaceType();
        uVar3 = (ulong)(iVar2 == 2);
        bVar6 = 1;
        goto LAB_10011a42e;
      }
      local_40 = local_40 + 8;
    } while (local_40 != local_38);
  }
  local_30 = 1;
  bVar6 = 0;
LAB_10011a42e:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) goto LAB_10011a454;
      local_21 = 0;
    }
    QListData::dispose(local_48);
  }
LAB_10011a454:
  return bVar6 & (byte)uVar3;
}

