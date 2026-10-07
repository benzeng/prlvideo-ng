
uint FUN_100279540(long param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int local_88;
  void *local_84;
  undefined1 local_78 [12];
  uint local_6c;
  void *local_68;
  void *local_60;
  uint local_54;
  long local_50;
  int *local_48;
  int *local_40;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x168) == '\0') {
    return 0x80000009;
  }
  iVar4 = FUN_100060640();
  if (iVar4 != 0) {
    return 0;
  }
  CVmConfiguration::getVmSettings();
  uVar5 = CVmSettings::getGlobalNetwork();
  cVar3 = CVmGlobalNetwork::isOfflineManagementEnabled();
  iVar4 = 0;
  pvVar8 = (void *)0x0;
  if (cVar3 == '\0') goto LAB_100279833;
  CVmGlobalNetwork::getOfflineServices();
  local_40 = local_48;
  if (*local_48 != -1) {
    if (*local_48 == 0) {
      QListData::detach((int)&local_40);
      iVar4 = local_40[2];
      if (iVar4 != local_40[3]) {
        local_48 = local_48 + (long)local_48[2] * 2 + 4;
        piVar7 = local_40 + (long)iVar4 * 2 + 4;
        lVar6 = (long)local_40[3] * 8 + (long)iVar4 * -8;
        do {
          piVar2 = *(int **)local_48;
          *(int **)piVar7 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          piVar7 = piVar7 + 2;
          local_48 = local_48 + 2;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
    else {
      LOCK();
      *local_48 = *local_48 + 1;
      local_31 = *local_48 != 0;
      UNLOCK();
    }
  }
  FUN_100013180(&local_48);
  CVmGenericNetworkAdapter::getNetAddresses();
  if (*(int *)(local_50 + 0xc) == *(int *)(local_50 + 8)) {
LAB_100279806:
    iVar4 = 0;
    pvVar8 = (void *)0x0;
    iVar9 = 1;
  }
  else {
    local_54 = 0;
    local_60 = (void *)0x0;
    uVar5 = FUN_1006bb670(*(undefined8 *)(DAT_1011c3698 + 0x120),&local_40,&local_60,&local_54);
    iVar4 = 0;
    pvVar8 = (void *)0x0;
    iVar9 = 0;
    if (uVar5 == 0) {
      if (local_54 == 0) goto LAB_100279806;
      local_68 = (void *)0x0;
      local_6c = 0;
      CVmGenericNetworkAdapter::getNetAddresses();
      uVar5 = FUN_1006bbbb0(local_78,&local_68,&local_6c);
      FUN_100013180(local_78);
      uVar12 = local_54;
      iVar4 = 0;
      pvVar8 = (void *)0x0;
      iVar9 = 0;
      if (uVar5 == 0) {
        uVar5 = local_6c;
        if (local_6c == 0) {
          _free(local_60);
          goto LAB_100279806;
        }
        iVar4 = local_54 * local_6c;
        pvVar8 = _malloc((long)iVar4 * 0x14);
        if (pvVar8 == (void *)0x0) {
          _free(local_60);
          _free(local_68);
          uVar5 = 0x80000002;
          iVar9 = 0;
        }
        else {
          uVar11 = 0;
          do {
            uVar10 = 0;
            if (uVar12 != 0) {
              lVar6 = 0;
              do {
                uVar13 = (ulong)(uVar12 * (int)uVar11 + (int)lVar6);
                *(undefined2 *)((long)pvVar8 + uVar13 * 0x14) = 2;
                uVar1 = *(ushort *)((long)local_60 + lVar6 * 2);
                *(ushort *)((long)pvVar8 + uVar13 * 0x14 + 2) = uVar1 << 8 | uVar1 >> 8;
                uVar5 = *(uint *)((long)local_68 + uVar11 * 4);
                *(uint *)((long)pvVar8 + uVar13 * 0x14 + 4) =
                     uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18
                ;
                FUN_1008e3970("","LocalDevices",0,"Offmgmt for %08x:%d",
                              *(undefined4 *)((long)local_68 + uVar11 * 4),
                              *(undefined2 *)((long)local_60 + lVar6 * 2));
                lVar6 = lVar6 + 1;
                uVar12 = local_54;
                uVar10 = local_54;
                uVar5 = local_6c;
              } while ((uint)lVar6 < local_54);
            }
            uVar12 = uVar10;
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulong)uVar10;
          } while (uVar10 < uVar5);
          _free(local_60);
          _free(local_68);
          iVar9 = -1;
        }
      }
    }
  }
  FUN_100013180(&local_50);
  FUN_100013180(&local_40);
  if (iVar9 == 0) {
    return uVar5;
  }
LAB_100279833:
  local_88 = iVar4;
  local_84 = pvVar8;
  iVar4 = (**(code **)(**(long **)(param_1 + 0x170) + 0x98))(*(long **)(param_1 + 0x170),&local_88);
  uVar5 = 0;
  if (iVar4 != 0) {
    FUN_1008e3970("","LocalDevices",0,
                  "net_adapter %d:Failed to setup offline-management options. Error %x",
                  *(undefined4 *)(param_1 + 0x150));
    uVar5 = 0x80000009;
  }
  _free(pvVar8);
  return uVar5;
}

