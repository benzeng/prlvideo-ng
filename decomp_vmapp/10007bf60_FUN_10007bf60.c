
undefined8 FUN_10007bf60(CVmDevice *param_1,CVmDevice *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CVmGenericNetworkAdapter *pCVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long *local_3b8;
  QArrayData *local_3b0;
  QArrayData *local_3a8;
  long *local_3a0;
  QArrayData *local_398;
  QArrayData *local_390;
  QArrayData *local_388;
  QArrayData *local_380;
  CVmGenericNetworkAdapter local_378 [408];
  CVmGenericNetworkAdapter local_1e0 [408];
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  iVar8 = (**(code **)(*(long *)param_2 + 0x68))(param_2);
  if ((iVar8 == 6) &&
     (cVar3 = (**(code **)(*(long *)param_1 + 0xb0))(param_1,param_2), cVar3 != '\0')) {
    iVar8 = CVmHardDisk::getDiskType();
    iVar9 = CVmHardDisk::getDiskType();
    if (iVar8 == iVar9) {
      cVar3 = CVmHardDisk::isSplitted();
      cVar4 = CVmHardDisk::isSplitted();
      if (cVar3 == cVar4) {
        CVmHardDisk::getPassword();
        CVmHardDisk::getPassword();
        cVar3 = operator==(&local_40,&local_48);
        bVar5 = 1;
        if (cVar3 != '\0') {
          bVar5 = CVmHardDisk::isEncrypted();
          bVar6 = CVmHardDisk::isEncrypted();
          bVar5 = bVar5 ^ bVar6;
        }
        if (*(int *)local_48.field0_0x0 != -1) {
          if (*(int *)local_48.field0_0x0 != 0) {
            LOCK();
            *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
            local_31 = *(int *)local_48.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007c052;
          }
          QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
        }
LAB_10007c052:
        if (*(int *)local_40.field0_0x0 != -1) {
          if (*(int *)local_40.field0_0x0 != 0) {
            LOCK();
            *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
            local_31 = *(int *)local_40.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10007c082;
          }
          QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
        }
LAB_10007c082:
        if (bVar5 == 0) {
          return 1;
        }
      }
    }
  }
  iVar8 = (**(code **)(*(long *)param_2 + 0x68))(param_2);
  puVar2 = PTR_typeinfo_100ba2248;
  puVar1 = PTR_typeinfo_100ba2240;
  if (iVar8 == 8) {
    pCVar12 = (CVmGenericNetworkAdapter *)
              ___dynamic_cast(param_1,PTR_typeinfo_100ba2248,PTR_typeinfo_100ba2240,0);
    CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_1e0,pCVar12);
    pCVar12 = (CVmGenericNetworkAdapter *)___dynamic_cast(param_2,puVar2,puVar1,0);
    CVmGenericNetworkAdapter::CVmGenericNetworkAdapter(local_378,pCVar12);
    CVmProfileHelper::set_net_adapter_profile(0,local_1e0);
    CVmProfileHelper::set_net_adapter_profile(0,local_378);
    bVar7 = (bool)CVmGenericNetworkAdapter::getLinkRateLimit();
    CNetLinkRateLimit::setEnable(bVar7);
    bVar7 = (bool)CVmGenericNetworkAdapter::getLinkRateLimit();
    CNetLinkRateLimit::setEnable(bVar7);
    cVar3 = CVmGenericNetworkAdapter::operator==(local_1e0,local_378);
    bVar7 = false;
    if (cVar3 != '\0') {
      local_388 = *(QArrayData **)(param_2 + 0x50);
      if (1 < *(int *)local_388 + 1U) {
        LOCK();
        *(int *)local_388 = *(int *)local_388 + 1;
        local_31 = *(int *)local_388 != 0;
        UNLOCK();
      }
      CBaseNode::ElementToString((CBaseNode *)&local_380,(QString *)(param_2 + 0x10));
      if (*(int *)local_388 != -1) {
        if (*(int *)local_388 != 0) {
          LOCK();
          *(int *)local_388 = *(int *)local_388 + -1;
          local_31 = *(int *)local_388 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007c1bb;
        }
        QArrayData::deallocate(local_388,2,8);
      }
LAB_10007c1bb:
      uVar15 = DAT_1011c3698;
      uVar10 = CVmDevice::getIndex();
      lVar13 = FUN_1000915d0(uVar15,uVar10);
      if (lVar13 != 0) {
        FUN_10025bf30(lVar13 + 0x68,&local_380);
        FUN_100276270(lVar13,0);
      }
      bVar7 = true;
      if (*(int *)local_380 != -1) {
        if (*(int *)local_380 != 0) {
          LOCK();
          *(int *)local_380 = *(int *)local_380 + -1;
          local_31 = *(int *)local_380 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10007c234;
        }
        QArrayData::deallocate(local_380,2,8);
      }
    }
LAB_10007c234:
    CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_378);
    CVmGenericNetworkAdapter::~CVmGenericNetworkAdapter(local_1e0);
    if (bVar7) {
      return 1;
    }
  }
  iVar8 = CVmDevice::getConnected();
  if (iVar8 == 1) {
    CVmDevice::setConnected((uint)param_1);
    local_398 = *(QArrayData **)(param_1 + 0x50);
    if (1 < *(int *)local_398 + 1U) {
      LOCK();
      *(int *)local_398 = *(int *)local_398 + 1;
      local_31 = *(int *)local_398 != 0;
      UNLOCK();
    }
    CBaseNode::ElementToString((CBaseNode *)&local_390,(QString *)(param_1 + 0x10));
    if (*(int *)local_398 != -1) {
      if (*(int *)local_398 != 0) {
        LOCK();
        *(int *)local_398 = *(int *)local_398 + -1;
        local_31 = *(int *)local_398 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007c2da;
      }
      QArrayData::deallocate(local_398,2,8);
    }
LAB_10007c2da:
    CVmDevice::setConnected((uint)param_1);
    uVar15 = DAT_1011c3698;
    uVar10 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
    uVar11 = CVmDevice::getIndex();
    plVar14 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    local_3a0 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      *(undefined4 *)(plVar14 + 1) = 1;
      plVar14[2] = 0;
      *plVar14 = (long)&PTR_FUN_100bef0d0;
      local_3a0 = plVar14;
    }
    iVar8 = FUN_100090a80(uVar15,0,uVar10,uVar11,&local_390,&local_3a0);
    if (local_3a0 != (long *)0x0) {
      LOCK();
      plVar14 = local_3a0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)(*local_3a0 + 0x10))();
      }
    }
    bVar7 = true;
    if ((iVar8 < 0) && (iVar8 != -0x7fff6fff)) {
      uVar10 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
      uVar11 = CVmDevice::getIndex();
      uVar15 = FUN_1007dd120(iVar8);
      FUN_1008e3970("","vm",0,"device %d/#%d disconnect failed %s\n",uVar10,uVar11,uVar15);
      FUN_10006ec80(param_1,param_3);
      CVmEventBase::setEventCode((int)param_3);
      bVar7 = false;
    }
    if (*(int *)local_390 != -1) {
      if (*(int *)local_390 != 0) {
        LOCK();
        *(int *)local_390 = *(int *)local_390 + -1;
        local_31 = *(int *)local_390 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10007c43e;
      }
      QArrayData::deallocate(local_390,2,8);
    }
LAB_10007c43e:
    if (!bVar7) {
      return 0;
    }
  }
  iVar8 = CVmDevice::getConnected();
  if (iVar8 != 1) {
    CVmDevice::operator=(param_1,param_2);
    return 1;
  }
  local_3b0 = *(QArrayData **)(param_2 + 0x50);
  if (1 < *(int *)local_3b0 + 1U) {
    LOCK();
    *(int *)local_3b0 = *(int *)local_3b0 + 1;
    local_31 = *(int *)local_3b0 != 0;
    UNLOCK();
  }
  CBaseNode::ElementToString((CBaseNode *)&local_3a8,(QString *)(param_2 + 0x10));
  if (*(int *)local_3b0 != -1) {
    if (*(int *)local_3b0 != 0) {
      LOCK();
      *(int *)local_3b0 = *(int *)local_3b0 + -1;
      local_31 = *(int *)local_3b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10007c4c2;
    }
    QArrayData::deallocate(local_3b0,2,8);
  }
LAB_10007c4c2:
  uVar15 = DAT_1011c3698;
  uVar10 = (**(code **)(*(long *)param_2 + 0x68))(param_2);
  uVar11 = CVmDevice::getIndex();
  plVar14 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_3b8 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    *(undefined4 *)(plVar14 + 1) = 1;
    plVar14[2] = 0;
    *plVar14 = (long)&PTR_FUN_100bef0d0;
    local_3b8 = plVar14;
  }
  iVar8 = FUN_100090a80(uVar15,1,uVar10,uVar11,&local_3a8,&local_3b8);
  if (local_3b8 != (long *)0x0) {
    LOCK();
    plVar14 = local_3b8 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)(*local_3b8 + 0x10))();
    }
  }
  if (iVar8 < 0) {
    uVar10 = (**(code **)(*(long *)param_2 + 0x68))(param_2);
    uVar11 = CVmDevice::getIndex();
    uVar15 = FUN_1007dd120(iVar8);
    FUN_1008e3970("","vm",0,"device %d/#%d config application failed %s\n",uVar10,uVar11,uVar15);
    FUN_10006ec80(param_2,param_3);
    CVmEventBase::setEventCode((int)param_3);
  }
  if (*(int *)local_3a8 != -1) {
    if (*(int *)local_3a8 != 0) {
      LOCK();
      *(int *)local_3a8 = *(int *)local_3a8 + -1;
      UNLOCK();
      if (*(int *)local_3a8 != 0) goto LAB_10007c613;
      local_31 = 0;
    }
    QArrayData::deallocate(local_3a8,2,8);
  }
LAB_10007c613:
  if (iVar8 >= 0) {
    return 1;
  }
  return 0;
}

