
int FUN_100b42e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3,QString *param_4)

{
  QString *pQVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint *local_70;
  uint *local_68;
  undefined8 *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  CVmGenericNetworkAdapter::getVirtualNetworkID();
  if ((*(int *)(local_40 + 4) != 0) && (iVar4 = FUN_100d7e9e0(), iVar4 == 0)) {
    uVar8 = CParallelsNetworkConfig::getVirtualNetworks();
    lVar9 = FUN_100b3f650(uVar8,&local_40);
    if (lVar9 == 0) {
      QString::toLatin1();
      FUN_100df99c0("","prl_net",0,"Virtual network %s is not configured.",
                    local_48 + *(long *)(local_48 + 0x10));
      iVar4 = -0x7fffbfe8;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100b432fe;
        }
        QArrayData::deallocate(local_48,1,8);
      }
    }
    else {
      cVar3 = CVirtualNetwork::isEnabled();
      if (cVar3 == '\0') {
        QString::toLatin1();
        FUN_100df99c0("","prl_net",0,"Virtual network %s is disabled.",
                      local_50 + *(long *)(local_50 + 0x10));
        iVar4 = -0x7fffbfdf;
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b432fe;
          }
          QArrayData::deallocate(local_50,1,8);
        }
      }
      else {
        iVar4 = FUN_100b41f00(param_1,lVar9,param_4);
      }
    }
    goto LAB_100b432fe;
  }
  uVar5 = CVmDevice::getEmulatedType();
  uVar6 = CVmGenericNetworkAdapter::getBoundAdapterIndex();
  CVmGenericNetworkAdapter::getBoundAdapterName();
  uVar2 = uVar6 | 0x10000000;
  if (uVar5 != 3) {
    uVar2 = uVar6;
  }
  if ((uVar5 & 0xfffffffe) == 2) {
    if ((int)uVar2 < 0) {
      local_60 = (undefined8 *)0x0;
      iVar4 = FUN_100b3d2a0(param_1,&local_60);
      if ((-1 < iVar4) || (iVar4 = FUN_100b3d210(param_1,&local_60), -1 < iVar4)) {
        pQVar1 = (QString *)*local_60;
        QString::operator=(param_4,pQVar1);
        QString::operator=(param_4 + 1,pQVar1 + 1);
        QString::operator=(param_4 + 2,pQVar1 + 2);
        *(undefined1 *)((long)&param_4[3].field0_0x0 + 4) =
             *(undefined1 *)((long)&pQVar1[3].field0_0x0 + 4);
        *(undefined4 *)&param_4[3].field0_0x0 = *(undefined4 *)&pQVar1[3].field0_0x0;
        QString::operator=(param_4 + 4,pQVar1 + 4);
        *(undefined2 *)&param_4[6].field0_0x0 = *(undefined2 *)&pQVar1[6].field0_0x0;
        param_4[5].field0_0x0 = pQVar1[5].field0_0x0;
      }
    }
    else {
      FUN_100b43430(&local_68,param_1,&local_58,uVar2,1);
      puVar7 = (uint *)*param_1;
      if (1 < *puVar7) {
        FUN_100b467c0(param_1,puVar7[1]);
        puVar7 = (uint *)*param_1;
      }
      if (local_68 == puVar7 + (long)(int)puVar7[3] * 2 + 4) {
        FUN_100b43430(&local_70,param_1,&local_58,uVar2,0);
        puVar7 = (uint *)*param_1;
        local_68 = local_70;
      }
      if (1 < *puVar7) {
        FUN_100b467c0(param_1,puVar7[1]);
        puVar7 = (uint *)*param_1;
      }
      iVar4 = -0x7fffbffc;
      if (local_68 != puVar7 + (long)(int)puVar7[3] * 2 + 4) {
        pQVar1 = *(QString **)local_68;
        QString::operator=(param_4,pQVar1);
        QString::operator=(param_4 + 1,pQVar1 + 1);
        QString::operator=(param_4 + 2,pQVar1 + 2);
        *(undefined1 *)((long)&param_4[3].field0_0x0 + 4) =
             *(undefined1 *)((long)&pQVar1[3].field0_0x0 + 4);
        *(undefined4 *)&param_4[3].field0_0x0 = *(undefined4 *)&pQVar1[3].field0_0x0;
        QString::operator=(param_4 + 4,pQVar1 + 4);
        *(undefined2 *)&param_4[6].field0_0x0 = *(undefined2 *)&pQVar1[6].field0_0x0;
        param_4[5].field0_0x0 = pQVar1[5].field0_0x0;
        iVar4 = 0;
      }
    }
  }
  else if (uVar5 < 2) {
    if (uVar5 == 1) {
      lVar9 = FUN_100b41520(param_2);
      if (lVar9 == 0) {
        iVar4 = -0x7fffbff9;
        FUN_100df99c0("","prl_net",0,"Shared networking is not configured.");
      }
      else {
LAB_100b43252:
        iVar4 = FUN_100b41f00(param_1,lVar9,param_4);
      }
    }
    else {
      iVar4 = FUN_100d7e9e0();
      if (iVar4 == 0) {
        uVar5 = 0;
        if (uVar2 != 0xffffffff) {
          uVar5 = uVar2;
        }
      }
      else {
        uVar5 = uVar2;
        if (uVar2 + 1 < 2) {
          uVar5 = 1;
        }
      }
      lVar9 = CParallelsNetworkConfig::getVirtualNetworks();
      if (lVar9 == 0) {
        FUN_100df99c0("","prl_net",0,"ASSERT( %s ) occured in %s:%d [%s]","pVirtualNetworks",
                      "netconfig.cpp",0x2c3,"GetHostOnlyNetwork");
      }
      else {
        lVar9 = FUN_100b3f210(lVar9,uVar5 & 0xfffffff);
        if (lVar9 != 0) goto LAB_100b43252;
      }
      iVar4 = -0x7fffbff9;
      FUN_100df99c0("","prl_net",0,"Host only networking %d is not configured.",uVar2);
    }
  }
  else {
    iVar4 = -0x7ffffefa;
    FUN_100df99c0("","prl_net",0,
                  "[PrlNet::getAdapter] Error in parameters: wrong networking type specified: %d",
                  uVar5);
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b432fe;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100b432fe:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return iVar4;
}

