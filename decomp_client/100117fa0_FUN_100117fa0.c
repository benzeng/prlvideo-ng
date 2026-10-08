
long FUN_100117fa0(long param_1,int param_2,uint param_3,undefined4 *param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Data *local_98;
  Data *local_90;
  Data *local_88;
  undefined4 local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  lVar6 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (2 < param_3) {
    return 0;
  }
  local_58 = *(Data **)(param_1 + 0x1b0);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar4 = (long)*(int *)(local_58 + 8);
      lVar7 = *(long *)(param_1 + 0x1b0);
      lVar6 = (long)*(int *)(lVar7 + 8);
      if (((Data *)(lVar7 + lVar6 * 8) != local_58 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_58 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_58 + 0xc))
         ) {
        _memcpy(local_58 + lVar4 * 8 + 0x10,(void *)(lVar7 + 0x10 + lVar6 * 8),lVar5 * 8);
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
  bVar1 = true;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      lVar6 = *(long *)local_50;
      uVar2 = CVmClusteredDevice::getInterfaceType();
      if ((uVar2 == param_3) && (iVar3 = CVmClusteredDevice::getStackIndex(), iVar3 == param_2)) {
        *param_4 = 6;
        bVar1 = false;
        goto LAB_1001180b8;
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
LAB_1001180b8:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001180de;
    }
    QListData::dispose(local_58);
  }
LAB_1001180de:
  if (!bVar1) {
    return lVar6;
  }
  local_78 = *(Data **)(param_1 + 0x1a8);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 == 0) {
      QListData::detach((int)&local_78);
      lVar4 = (long)*(int *)(local_78 + 8);
      lVar7 = *(long *)(param_1 + 0x1a8);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_78 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_78 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar4 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  bVar1 = true;
  lVar7 = lVar6;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      lVar7 = *(long *)local_70;
      uVar2 = CVmClusteredDevice::getInterfaceType();
      if ((uVar2 == param_3) && (iVar3 = CVmClusteredDevice::getStackIndex(), iVar3 == param_2)) {
        *param_4 = 5;
        bVar1 = false;
        goto LAB_1001181ce;
      }
      local_70 = local_70 + 8;
      local_60 = 1;
    } while (local_70 != local_68);
    bVar1 = true;
    lVar7 = lVar6;
  }
LAB_1001181ce:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1001181ff;
    }
    QListData::dispose(local_78);
  }
LAB_1001181ff:
  if (!bVar1) {
    return lVar7;
  }
  if (param_3 != 1) {
    return 0;
  }
  local_98 = *(Data **)(param_1 + 0x200);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 == 0) {
      QListData::detach((int)&local_98);
      lVar4 = (long)*(int *)(local_98 + 8);
      lVar6 = *(long *)(param_1 + 0x200);
      if (((Data *)(lVar6 + (long)*(int *)(lVar6 + 8) * 8) != local_98 + lVar4 * 8) &&
         (lVar5 = *(int *)(local_98 + 0xc) - lVar4, lVar5 != 0 && lVar4 <= *(int *)(local_98 + 0xc))
         ) {
        _memcpy(local_98 + lVar4 * 8 + 0x10,(void *)(lVar6 + 0x10 + (long)*(int *)(lVar6 + 8) * 8),
                lVar5 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
  }
  local_90 = local_98 + (long)*(int *)(local_98 + 8) * 8 + 0x10;
  local_88 = local_98 + (long)*(int *)(local_98 + 0xc) * 8 + 0x10;
  local_80 = 1;
  bVar1 = true;
  if (*(int *)(local_98 + 8) != *(int *)(local_98 + 0xc)) {
    do {
      local_80 = 1;
      lVar6 = *(long *)local_90;
      iVar3 = CVmClusteredDevice::getInterfaceType();
      if ((iVar3 == 1) && (iVar3 = CVmClusteredDevice::getStackIndex(), iVar3 == param_2)) {
        *param_4 = 0x12;
        bVar1 = false;
        lVar7 = lVar6;
        break;
      }
      local_90 = local_90 + 8;
      local_80 = 1;
    } while (local_90 != local_88);
  }
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) goto LAB_100118348;
      local_31 = 0;
    }
    QListData::dispose(local_98);
  }
LAB_100118348:
  if (bVar1) {
    return 0;
  }
  return lVar7;
}

