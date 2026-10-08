
undefined1 FUN_1001bbd60(long param_1)

{
  Data *pDVar1;
  char cVar2;
  uint uVar3;
  Data *pDVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined1 uVar10;
  Data *local_40;
  Data *local_38;
  Data *local_30;
  undefined1 local_21;
  
  local_40 = *(Data **)(param_1 + 0xa8);
  if (*(uint *)local_40 != 0xffffffff) {
    if (*(uint *)local_40 == 0) {
      QListData::detach((int)&local_40);
      lVar7 = (long)(int)*(uint *)(local_40 + 8);
      lVar5 = *(long *)(param_1 + 0xa8);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_40 + lVar7 * 8) &&
         (lVar8 = (int)*(uint *)(local_40 + 0xc) - lVar7,
         lVar8 != 0 && lVar7 <= (int)*(uint *)(local_40 + 0xc))) {
        _memcpy(local_40 + lVar7 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar8 * 8);
      }
    }
    else {
      LOCK();
      *(uint *)local_40 = *(uint *)local_40 + 1;
      local_21 = *(uint *)local_40 != 0;
      UNLOCK();
    }
  }
  pDVar1 = local_40;
  if (1 < *(uint *)local_40) {
    uVar9 = *(uint *)(local_40 + 8);
    pDVar4 = (Data *)QListData::detach((int)&local_40);
    lVar5 = (long)(int)*(uint *)(local_40 + 8);
    if ((pDVar1 + (long)(int)uVar9 * 8 + 0x10 != local_40 + lVar5 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_40 + 0xc) - lVar5,
       lVar7 != 0 && lVar5 <= (int)*(uint *)(local_40 + 0xc))) {
      _memcpy(local_40 + lVar5 * 8 + 0x10,pDVar1 + (long)(int)uVar9 * 8 + 0x10,lVar7 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_21 = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001bbe40;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_1001bbe40:
  pDVar1 = local_40 + (long)(int)*(uint *)(local_40 + 8) * 8 + 0x10;
  if (1 < *(uint *)local_40) {
    pDVar4 = (Data *)QListData::detach((int)&local_40);
    lVar5 = (long)(int)*(uint *)(local_40 + 8);
    if ((pDVar1 != local_40 + lVar5 * 8 + 0x10) &&
       (lVar7 = (int)*(uint *)(local_40 + 0xc) - lVar5,
       lVar7 != 0 && lVar5 <= (int)*(uint *)(local_40 + 0xc))) {
      _memcpy(local_40 + lVar5 * 8 + 0x10,pDVar1,lVar7 * 8);
    }
    if (*(int *)pDVar4 != -1) {
      if (*(int *)pDVar4 != 0) {
        LOCK();
        *(int *)pDVar4 = *(int *)pDVar4 + -1;
        local_21 = *(int *)pDVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1001bbeab;
      }
      QListData::dispose(pDVar4);
    }
  }
LAB_1001bbeab:
  uVar9 = *(uint *)(local_40 + 0xc);
  if (pDVar1 != local_40 + (long)(int)uVar9 * 8 + 0x10) {
    local_38 = local_40 + (long)(int)uVar9 * 8 + 0x10;
    local_30 = pDVar1;
    FUN_1001bcc10(&local_30,&local_38,pDVar1,FUN_1001bbfe0);
    uVar9 = *(uint *)(local_40 + 0xc);
  }
  uVar10 = 0;
  if (uVar9 != *(uint *)(local_40 + 8)) {
    uVar9 = 0;
    uVar10 = 0;
    do {
      FUN_1001bc7b0(&local_40,uVar9);
      cVar2 = BootDevice::isInUse();
      if (cVar2 == '\0') {
        puVar6 = (undefined8 *)FUN_1001bc7b0(&local_40,uVar9);
        uVar10 = 1;
        BootDevice::setInUse(SUB81(*puVar6,0));
      }
      FUN_1001bc7b0(&local_40,uVar9);
      uVar3 = BootDevice::getBootingNumber();
      if (uVar9 != uVar3) {
        puVar6 = (undefined8 *)FUN_1001bc7b0(&local_40,uVar9);
        uVar10 = 1;
        BootDevice::setBootingNumber((uint)*puVar6);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(local_40 + 0xc) - *(uint *)(local_40 + 8));
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar10;
      }
      local_21 = 0;
    }
    QListData::dispose(local_40);
  }
  return uVar10;
}

