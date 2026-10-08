
undefined1 FUN_100603c00(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  Data *local_38;
  Data *local_30;
  Data *local_28;
  undefined4 local_20;
  undefined1 local_11;
  
  lVar2 = CVmConfiguration::getVmHardwareList();
  local_38 = *(Data **)(lVar2 + 0x1d0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 == 0) {
      QListData::detach((int)&local_38);
      lVar3 = (long)*(int *)(local_38 + 8);
      lVar2 = *(long *)(lVar2 + 0x1d0);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_38 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_38 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_38 + 0xc))
         ) {
        _memcpy(local_38 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + 1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
    }
  }
  local_30 = local_38 + (long)*(int *)(local_38 + 8) * 8 + 0x10;
  local_28 = local_38 + (long)*(int *)(local_38 + 0xc) * 8 + 0x10;
  if (*(int *)(local_38 + 8) != *(int *)(local_38 + 0xc)) {
    do {
      local_20 = 1;
      iVar1 = CVmDevice::getEmulatedType();
      uVar5 = 1;
      if (iVar1 == 2) goto LAB_100603cda;
      local_30 = local_30 + 8;
    } while (local_30 != local_28);
  }
  local_20 = 1;
  uVar5 = 0;
LAB_100603cda:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return uVar5;
      }
      local_11 = 0;
    }
    QListData::dispose(local_38);
  }
  return uVar5;
}

