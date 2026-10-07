
int FUN_1006c2b20(undefined8 param_1,undefined8 param_2)

{
  long ****pppplVar1;
  long ****pppplVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long lVar12;
  undefined1 local_1a9;
  CParallelsNetworkConfig local_1a8 [216];
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  uint local_a4;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  undefined4 local_88;
  uint local_7c;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  undefined4 local_60;
  long ***local_58;
  long ***local_50;
  undefined8 local_48;
  Data *local_40;
  undefined1 uStack_31;
  
  CParallelsNetworkConfig::CParallelsNetworkConfig(local_1a8);
  local_1a9 = 0;
  iVar5 = FUN_1006ba370(local_1a8,&local_1a9);
  if (iVar5 < 0) {
    uVar8 = FUN_1007dd120(iVar5);
    _syslog(3,
            "Failed to read Parallels networking configuration. See Parallels.log for description. Status %s(%x)\n"
            ,uVar8,iVar5);
    uVar8 = FUN_1007dd120(iVar5);
    FUN_1008e3970("","prl_net",0,
                  "Failed to read Parallels networking configuration. See Parallels.log for description. Status %s(%x)"
                  ,uVar8,iVar5);
    CParallelsNetworkConfig::setDefaults((QDomElement *)local_1a8);
  }
  FUN_1006bc2f0(local_1a8);
  iVar5 = FUN_1006b3dc0();
  if (iVar5 == 1) {
    FUN_1006c7f40(local_1a8);
    goto LAB_1006c31ec;
  }
  FUN_1006b7790(&local_40,local_1a8);
  local_48 = 0;
  local_50 = (long ***)0x0;
  local_78 = local_40;
  local_58 = (long ***)&local_50;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_78);
      lVar9 = (long)*(int *)(local_78 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_78 + lVar9 * 8) &&
         (lVar12 = *(int *)(local_78 + 0xc) - lVar9,
         lVar12 != 0 && lVar9 <= *(int *)(local_78 + 0xc))) {
        _memcpy(local_78 + lVar9 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      uStack_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_60 = 1;
      cVar4 = CParallelsAdapter::isEnabled();
      if (cVar4 != '\0') {
        uVar6 = CParallelsAdapter::getPrlAdapterIndex();
        uVar6 = uVar6 & 0xfffffff;
        pppplVar2 = (long ****)local_50;
        pppplVar10 = &local_50;
        local_7c = uVar6;
        if ((long ****)local_50 != (long ****)0x0) {
          do {
            while (pppplVar11 = pppplVar2, (int)uVar6 <= *(int *)((long)pppplVar11 + 0x1c)) {
              pppplVar2 = (long ****)*pppplVar11;
              pppplVar10 = pppplVar11;
              if ((long ****)*pppplVar11 == (long ****)0x0) goto LAB_1006c2d43;
            }
            pppplVar1 = pppplVar11 + 1;
            pppplVar2 = (long ****)*pppplVar1;
            pppplVar11 = pppplVar10;
          } while ((long ****)*pppplVar1 != (long ****)0x0);
LAB_1006c2d43:
          if ((pppplVar11 != &local_50) && (*(int *)((long)pppplVar11 + 0x1c) <= (int)uVar6)) {
            FUN_1008e3970("","prl_net",0,
                          "Duplicate index of Parallels Virtual adapter found: %d was already started"
                          ,uVar6);
            goto LAB_1006c2d90;
          }
        }
        FUN_1006c3d40(&local_58,&local_7c);
        FUN_1006c48c0(uVar6);
      }
LAB_1006c2d90:
      local_70 = local_70 + 8;
    } while (local_70 != local_68);
  }
  local_60 = 1;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      uStack_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_1006c2dda;
    }
    QListData::dispose(local_78);
  }
LAB_1006c2dda:
  FUN_1006c3e30(&local_58,local_50);
  local_48 = 0;
  local_50 = (long ***)0x0;
  local_a0 = local_40;
  local_58 = (long ***)&local_50;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_a0);
      lVar9 = (long)*(int *)(local_a0 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_a0 + lVar9 * 8) &&
         (lVar12 = *(int *)(local_a0 + 0xc) - lVar9,
         lVar12 != 0 && lVar9 <= *(int *)(local_a0 + 0xc))) {
        _memcpy(local_a0 + lVar9 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar12 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      uStack_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  if (*(int *)(local_a0 + 8) != *(int *)(local_a0 + 0xc)) {
    do {
      local_88 = 1;
      cVar4 = CParallelsAdapter::isEnabled();
      if (cVar4 != '\0') {
        uVar6 = CParallelsAdapter::getPrlAdapterIndex();
        uVar6 = uVar6 & 0xfffffff;
        pppplVar2 = (long ****)local_50;
        pppplVar10 = &local_50;
        local_a4 = uVar6;
        if ((long ****)local_50 != (long ****)0x0) {
          do {
            while (pppplVar11 = pppplVar2, (int)uVar6 <= *(int *)((long)pppplVar11 + 0x1c)) {
              pppplVar2 = (long ****)*pppplVar11;
              pppplVar10 = pppplVar11;
              if ((long ****)*pppplVar11 == (long ****)0x0) goto LAB_1006c2f23;
            }
            pppplVar1 = pppplVar11 + 1;
            pppplVar2 = (long ****)*pppplVar1;
            pppplVar11 = pppplVar10;
          } while ((long ****)*pppplVar1 != (long ****)0x0);
LAB_1006c2f23:
          if ((pppplVar11 != &local_50) && (*(int *)((long)pppplVar11 + 0x1c) <= (int)uVar6))
          goto LAB_1006c3160;
        }
        FUN_1006c3d40(&local_58,&local_a4);
        uVar3 = CParallelsAdapter::isHiddenAdapter();
        CParallelsAdapter::getName();
        FUN_1006c46f0(param_2,uVar6,uVar3,&local_b0);
        if (*(int *)local_b0 != -1) {
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            uStack_31 = *(int *)local_b0 != 0;
            UNLOCK();
            if ((bool)uStack_31) goto LAB_1006c2faa;
          }
          QArrayData::deallocate(local_b0,2,8);
        }
LAB_1006c2faa:
        uVar8 = CParallelsNetworkConfig::getVirtualNetworks();
        FUN_1006b5730(uVar8,uVar6);
        uVar3 = CParallelsAdapter::isHiddenAdapter();
        uVar8 = CVirtualNetwork::getHostOnlyNetwork();
        iVar5 = FUN_1006c64a0(uVar6,uVar3,uVar8);
        if (iVar5 < 0) {
          CVirtualNetwork::getNetworkID();
          QString::toLatin1();
          FUN_1008e3970("","prl_net",0,"Failed to configure Parallels Adapter %d for network %s",
                        uVar6,local_b8 + *(long *)(local_b8 + 0x10));
          if (*(int *)local_b8 != -1) {
            if (*(int *)local_b8 != 0) {
              LOCK();
              *(int *)local_b8 = *(int *)local_b8 + -1;
              uStack_31 = *(int *)local_b8 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1006c3073;
            }
            QArrayData::deallocate(local_b8,1,8);
          }
LAB_1006c3073:
          if (*(int *)local_c0 != -1) {
            if (*(int *)local_c0 != 0) {
              LOCK();
              *(int *)local_c0 = *(int *)local_c0 + -1;
              uStack_31 = *(int *)local_c0 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1006c30a9;
            }
            QArrayData::deallocate(local_c0,2,8);
          }
LAB_1006c30a9:
          CVirtualNetwork::getNetworkID();
          QString::toLatin1();
          _syslog(5,"Failed to configure Parallels Adapter %d for network %s",uVar6,
                  local_c8 + *(long *)(local_c8 + 0x10));
          if (*(int *)local_c8 != -1) {
            if (*(int *)local_c8 != 0) {
              LOCK();
              *(int *)local_c8 = *(int *)local_c8 + -1;
              uStack_31 = *(int *)local_c8 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1006c3122;
            }
            QArrayData::deallocate(local_c8,1,8);
          }
LAB_1006c3122:
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              uStack_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1006c3160;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
        }
      }
LAB_1006c3160:
      local_98 = local_98 + 8;
    } while (local_98 != local_90);
  }
  local_88 = 1;
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      uStack_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_1006c31b9;
    }
    QListData::dispose(local_a0);
  }
LAB_1006c31b9:
  FUN_1006c3e30(&local_58,local_50);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      uStack_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)uStack_31) goto LAB_1006c31ec;
    }
    QListData::dispose(local_40);
  }
LAB_1006c31ec:
  cVar4 = FUN_1006d8240();
  iVar5 = 0;
  if (cVar4 == '\0') {
    iVar7 = FUN_1006c5040(param_1,0);
    iVar5 = 0;
    if (iVar7 < 0) {
      FUN_1008e3970("","prl_net",0,
                    "[PrlNet] Failed to start Parallels DHCP/NAT daemon! Error 0x%08x",iVar7);
      iVar5 = iVar7;
    }
  }
  CParallelsNetworkConfig::~CParallelsNetworkConfig(local_1a8);
  return iVar5;
}

