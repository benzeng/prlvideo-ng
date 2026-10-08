
undefined8 * FUN_1001241b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  CHwNetAdapter local_1a8 [292];
  undefined4 local_84;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  undefined4 local_68;
  undefined4 local_5c;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e12f0;
  if (param_2 == 0) {
    return param_1;
  }
  FUN_100175410(param_2);
  lVar5 = FUN_10015a340(param_2);
  plVar1 = *(long **)(lVar5 + 0x168);
  local_58 = (Data *)*plVar1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      lVar9 = (long)*(int *)(local_58 + 8);
      lVar5 = *plVar1;
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_58 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_58 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_58 + 0xc))) {
        _memcpy(local_58 + lVar9 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar10 * 8);
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
      uVar8 = *(undefined8 *)local_50;
      cVar2 = CHwNetAdapter::isEnabled();
      if ((cVar2 != '\0') && (uVar6 = CHwNetAdapter::getSysIndex(), (uVar6 & 0x10000000) == 0)) {
        local_5c = 2;
        uVar7 = FUN_100129b20(param_1,&local_5c);
        FUN_100129ce0(uVar7,uVar8);
      }
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10012430a;
    }
    QListData::dispose(local_58);
  }
LAB_10012430a:
  lVar5 = CParallelsNetworkConfig::getVirtualNetworks();
  local_80 = *(Data **)(lVar5 + 0x98);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 == 0) {
      QListData::detach((int)&local_80);
      lVar9 = (long)*(int *)(local_80 + 8);
      lVar5 = *(long *)(lVar5 + 0x98);
      if (((Data *)(lVar5 + (long)*(int *)(lVar5 + 8) * 8) != local_80 + lVar9 * 8) &&
         (lVar10 = *(int *)(local_80 + 0xc) - lVar9,
         lVar10 != 0 && lVar9 <= *(int *)(local_80 + 0xc))) {
        _memcpy(local_80 + lVar9 * 8 + 0x10,(void *)(lVar5 + 0x10 + (long)*(int *)(lVar5 + 8) * 8),
                lVar10 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
    }
  }
  local_78 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
  local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
  if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
    do {
      local_68 = 1;
      iVar3 = CVirtualNetwork::getNetworkType();
      if (((iVar3 == 1) && (lVar5 = CVirtualNetwork::getHostOnlyNetwork(), lVar5 != 0)) &&
         (lVar5 = CHostOnlyNetwork::getParallelsAdapter(), lVar5 != 0)) {
        local_84 = 0;
        lVar5 = CHostOnlyNetwork::getNATServer();
        if ((lVar5 != 0) && (cVar2 = CNATServer::isEnabled(), cVar2 != '\0')) {
          local_84 = 1;
        }
        CVirtualNetwork::getNetworkID();
        CVirtualNetwork::getNetworkID();
        uVar4 = CParallelsAdapter::getPrlAdapterIndex();
        local_1c0 = (QArrayData *)QString::fromAscii_helper("00:1c:42:00:00:00",0x11);
        local_1c8 = (QArrayData *)QString::fromAscii_helper("",0);
        CHwNetAdapter::CHwNetAdapter
                  (local_1a8,8,&local_1b0,&local_1b8,uVar4 | 0x10000000,&local_1c0,0,1,&local_1c8);
        if (*(int *)local_1c8 != -1) {
          if (*(int *)local_1c8 != 0) {
            LOCK();
            *(int *)local_1c8 = *(int *)local_1c8 + -1;
            local_31 = *(int *)local_1c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1001244f4;
          }
          QArrayData::deallocate(local_1c8,2,8);
        }
LAB_1001244f4:
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_31 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10012452a;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_10012452a:
        if (*(int *)local_1b8 != -1) {
          if (*(int *)local_1b8 != 0) {
            LOCK();
            *(int *)local_1b8 = *(int *)local_1b8 + -1;
            local_31 = *(int *)local_1b8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100124560;
          }
          QArrayData::deallocate(local_1b8,2,8);
        }
LAB_100124560:
        if (*(int *)local_1b0 != -1) {
          if (*(int *)local_1b0 != 0) {
            LOCK();
            *(int *)local_1b0 = *(int *)local_1b0 + -1;
            local_31 = *(int *)local_1b0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100124596;
          }
          QArrayData::deallocate(local_1b0,2,8);
        }
LAB_100124596:
        CHwNetAdapter::setNetAdapterType(local_1a8,1);
        uVar8 = FUN_100129b20(param_1,&local_84);
        FUN_100129ce0(uVar8,local_1a8);
        CHwNetAdapter::~CHwNetAdapter(local_1a8);
      }
      local_78 = local_78 + 8;
    } while (local_78 != local_70);
  }
  local_68 = 1;
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      UNLOCK();
      if (*(int *)local_80 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QListData::dispose(local_80);
  }
  return param_1;
}

