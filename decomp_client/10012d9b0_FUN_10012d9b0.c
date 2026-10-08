
undefined1 FUN_10012d9b0(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  Data *pDVar6;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined4 local_28;
  undefined1 local_19;
  
  lVar2 = CVmConfiguration::getVmHardwareList();
  local_40 = *(Data **)(lVar2 + 0x1e8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar3 = (long)*(int *)(local_40 + 8);
      lVar2 = *(long *)(lVar2 + 0x1e8);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_40 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_40 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_40 + 0xc))
         ) {
        _memcpy(local_40 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
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
  if (*(int *)(local_40 + 8) != *(int *)(local_40 + 0xc)) {
    do {
      local_28 = 1;
      iVar1 = CVmDevice::getEnabled();
      if (iVar1 == 1) {
        uVar5 = 1;
        if (*(int *)local_40 == -1) {
          return 1;
        }
        pDVar6 = local_40;
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return 1;
          }
          local_19 = 0;
        }
        goto LAB_10012dd1b;
      }
      local_38 = local_38 + 8;
    } while (local_38 != local_30);
  }
  local_28 = 1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_19 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012dab0;
    }
    QListData::dispose(local_40);
  }
LAB_10012dab0:
  lVar2 = CVmConfiguration::getVmHardwareList();
  local_60 = *(Data **)(lVar2 + 0x1f8);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 == 0) {
      QListData::detach((int)&local_60);
      lVar3 = (long)*(int *)(local_60 + 8);
      lVar2 = *(long *)(lVar2 + 0x1f8);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_60 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_60 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + 1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      iVar1 = CVmDevice::getEnabled();
      if (iVar1 == 1) {
        uVar5 = 1;
        if (*(int *)local_60 == -1) {
          return 1;
        }
        pDVar6 = local_60;
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          UNLOCK();
          if (*(int *)local_60 != 0) {
            return 1;
          }
          local_19 = 0;
        }
        goto LAB_10012dd1b;
      }
      local_58 = local_58 + 8;
    } while (local_58 != local_50);
  }
  local_48 = 1;
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012dbe0;
    }
    QListData::dispose(local_60);
  }
LAB_10012dbe0:
  lVar2 = CVmConfiguration::getVmHardwareList();
  local_80 = *(Data **)(lVar2 + 0x1d0);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar3 = (long)*(int *)(local_80 + 8);
      lVar2 = *(long *)(lVar2 + 0x1d0);
      if (((Data *)(lVar2 + (long)*(int *)(lVar2 + 8) * 8) != local_80 + lVar3 * 8) &&
         (lVar4 = *(int *)(local_80 + 0xc) - lVar3, lVar4 != 0 && lVar3 <= *(int *)(local_80 + 0xc))
         ) {
        _memcpy(local_80 + lVar3 * 8 + 0x10,(void *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8),
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_19 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      iVar1 = CVmDevice::getEmulatedType();
      if (iVar1 == 4) {
        iVar1 = CVmDevice::getEnabled();
        uVar5 = 1;
        if (iVar1 == 1) goto LAB_10012dcfa;
      }
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  uVar5 = 0;
LAB_10012dcfa:
  if (*(int *)local_80 != -1) {
    pDVar6 = local_80;
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return uVar5;
      }
      local_19 = 0;
    }
LAB_10012dd1b:
    QListData::dispose(pDVar6);
  }
  return uVar5;
}

