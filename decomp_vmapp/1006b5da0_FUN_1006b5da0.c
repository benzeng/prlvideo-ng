
void FUN_1006b5da0(void)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  Data *pDVar9;
  undefined8 uVar10;
  QArrayData *pQVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  undefined8 local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  Data *local_70;
  Data *local_68;
  Data *local_60;
  undefined4 local_58;
  long *local_50;
  uint *local_48;
  uint *local_40;
  undefined1 local_31;
  
  lVar6 = CHostHardwareInfoBase::getNetworkAdapters();
  if (lVar6 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pNetworkAdapters",
                  "netconfig.cpp",0x17b,"FillDefaultRuntimeNetworks");
  }
  lVar7 = CParallelsNetworkConfig::getVirtualNetworks();
  if (lVar7 == 0) {
    FUN_1008e3970("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pVirtualNetworks",
                  "netconfig.cpp",0x181,"FillDefaultRuntimeNetworks");
  }
  plVar8 = (long *)(lVar7 + 0x98);
  local_40 = (uint *)0x0;
  local_48 = (uint *)0x0;
  puVar14 = *(uint **)(lVar7 + 0x98);
  local_50 = plVar8;
  if (1 < *puVar14) {
    uVar1 = puVar14[2];
    pDVar9 = (Data *)QListData::detach((int)plVar8);
    lVar7 = *plVar8;
    lVar12 = (long)*(int *)(lVar7 + 8);
    if ((puVar14 + (long)(int)uVar1 * 2 != (uint *)(lVar7 + lVar12 * 8)) &&
       (lVar13 = *(int *)(lVar7 + 0xc) - lVar12, lVar13 != 0 && lVar12 <= *(int *)(lVar7 + 0xc))) {
      _memcpy((void *)(lVar7 + 0x10 + lVar12 * 8),puVar14 + (long)(int)uVar1 * 2 + 4,lVar13 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006b5f11;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_1006b5f11:
  puVar2 = (uint *)*plVar8;
  puVar14 = puVar2 + (long)(int)puVar2[2] * 2 + 4;
  local_48 = puVar14;
  if (1 < *puVar2) {
    pDVar9 = (Data *)QListData::detach((int)plVar8);
    lVar7 = *plVar8;
    lVar12 = (long)*(int *)(lVar7 + 8);
    puVar2 = (uint *)(lVar7 + 0x10 + lVar12 * 8);
    if ((puVar14 != puVar2) &&
       (lVar13 = *(int *)(lVar7 + 0xc) - lVar12, lVar13 != 0 && lVar12 <= *(int *)(lVar7 + 0xc))) {
      _memcpy(puVar2,puVar14,lVar13 * 8);
    }
    if (*(int *)pDVar9 != -1) {
      if (*(int *)pDVar9 != 0) {
        LOCK();
        *(int *)pDVar9 = *(int *)pDVar9 + -1;
        local_31 = *(int *)pDVar9 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006b5f8b;
      }
      QListData::dispose(pDVar9);
    }
  }
LAB_1006b5f8b:
  local_40 = (uint *)(*plVar8 + 0x10 + (long)*(int *)(*plVar8 + 0xc) * 8);
  if (local_40 != puVar14) {
    plVar15 = plVar8;
    do {
      plVar3 = *(long **)puVar14;
      local_48 = puVar14 + 2;
      local_40 = puVar14;
      iVar5 = CVirtualNetwork::getNetworkType();
      puVar14 = puVar14 + 2;
      if (iVar5 != 1) {
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x88))(plVar3);
        }
        FUN_1006bc5d0(&local_50);
        puVar14 = local_48;
        plVar15 = local_50;
      }
    } while ((uint *)(*plVar15 + 0x10 + (long)*(int *)(*plVar15 + 0xc) * 8) != puVar14);
  }
  local_70 = *(Data **)(lVar6 + 0x98);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 == 0) {
      QListData::detach((int)&local_70);
      lVar12 = (long)*(int *)(local_70 + 8);
      lVar7 = *(long *)(lVar6 + 0x98);
      if (((Data *)(lVar7 + (long)*(int *)(lVar7 + 8) * 8) != local_70 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_70 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_70 + 0xc))) {
        _memcpy(local_70 + lVar12 * 8 + 0x10,(void *)(lVar7 + 0x10 + (long)*(int *)(lVar7 + 8) * 8),
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + 1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
    }
  }
  local_68 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
  local_60 = local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10;
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    do {
      local_58 = 1;
      plVar15 = *(long **)local_68;
      (**(code **)(*plVar15 + 0xa8))(&local_80,plVar15);
      (**(code **)(*plVar15 + 0xb8))(&local_88,plVar15);
      CHwNetAdapter::getMacAddress();
      uVar4 = CHwNetAdapter::getVLANTag();
      uVar10 = FUN_1006b64d0(&local_80,&local_88,&local_90,uVar4);
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_31 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b6144;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_1006b6144:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_31 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b6174;
        }
        QArrayData::deallocate(local_88,2,8);
      }
LAB_1006b6174:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006b61a4;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1006b61a4:
      local_78 = uVar10;
      FUN_1006bc570(plVar8);
      local_68 = local_68 + 8;
    } while (local_68 != local_60);
  }
  local_58 = 1;
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b6202;
    }
    QListData::dispose(local_70);
  }
LAB_1006b6202:
  if (*(int *)(*(long *)(lVar6 + 0x98) + 0xc) == *(int *)(*(long *)(lVar6 + 0x98) + 8)) {
    return;
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper("",0);
  local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
  pQVar11 = (QArrayData *)QString::fromAscii_helper("",0);
  local_b0 = pQVar11;
  local_98 = FUN_1006b64d0(&local_a0,&local_a8,&local_b0,0xffff);
  FUN_1006bc570(plVar8,&local_98);
  if (*(int *)pQVar11 != -1) {
    if (*(int *)pQVar11 != 0) {
      LOCK();
      *(int *)pQVar11 = *(int *)pQVar11 + -1;
      local_31 = *(int *)pQVar11 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b62ba;
    }
    QArrayData::deallocate(pQVar11,2,8);
  }
LAB_1006b62ba:
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b62f0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1006b62f0:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      UNLOCK();
      if (*(int *)local_a0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
  return;
}

