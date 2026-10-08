
void FUN_100b3ea80(long param_1)

{
  long lVar1;
  int iVar2;
  CVirtualNetwork *pCVar3;
  QString this;
  QArrayData *pQVar4;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  CVirtualNetwork *local_58;
  QArrayData *local_50;
  long *local_48;
  undefined *local_40;
  CVirtualNetwork *local_38;
  CVirtualNetwork *local_30;
  undefined1 local_21;
  
  pCVar3 = (CVirtualNetwork *)FUN_100b3f210(param_1,0);
  local_30 = pCVar3;
  if (pCVar3 == (CVirtualNetwork *)0x0) {
    pCVar3 = operator_new(0xd8);
    CVirtualNetwork::CVirtualNetwork(pCVar3);
    local_30 = pCVar3;
    FUN_1001798a0(param_1 + 0x98,&local_30);
  }
  FUN_100b3dea0(pCVar3,0,1);
  pCVar3 = (CVirtualNetwork *)FUN_100b3f210(param_1,1);
  local_38 = pCVar3;
  if (pCVar3 == (CVirtualNetwork *)0x0) {
    pCVar3 = operator_new(0xd8);
    CVirtualNetwork::CVirtualNetwork(pCVar3);
    local_38 = pCVar3;
    FUN_1001798a0(param_1 + 0x98,&local_38);
  }
  FUN_100b3dea0(pCVar3,1,1);
  iVar2 = FUN_100d7e9e0();
  if (iVar2 != 0) {
    return;
  }
  local_40 = PTR_shared_null_1021e15e8;
  iVar2 = FUN_100b3cb60(&local_40,1,0);
  if (iVar2 < 0) {
    FUN_100df99c0("","prl_net",0,
                  "FillDefaultNet: Failed to create list of host network adapters: 0x%08x",iVar2);
    goto LAB_100b3ef81;
  }
  local_48 = (long *)0x0;
  iVar2 = FUN_100b3d2a0(&local_40,&local_48);
  if ((iVar2 < 0) && (iVar2 = FUN_100b3d210(&local_40,&local_48), iVar2 < 0)) {
    FUN_100df99c0("","prl_net",0,"FillDefaultNet: Failed to determine default adapter: 0x%08x",iVar2
                 );
    goto LAB_100b3ef81;
  }
  FUN_100b3f3a0(&local_50,*local_48 + 0x2a);
  local_58 = (CVirtualNetwork *)FUN_100b3f440(param_1,&local_50,*(undefined2 *)(*local_48 + 0x28));
  if (local_58 == (CVirtualNetwork *)0x0) {
    local_80 = (QArrayData *)QString::fromAscii_helper("Bridged",7);
    this.field0_0x0 = (QTypedArrayData<unsigned_short> *)FUN_100b3f650(param_1,&local_80);
    local_58 = (CVirtualNetwork *)this.field0_0x0;
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_21 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b3edc4;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100b3edc4:
    if (this.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      this.field0_0x0 = operator_new(0xd8);
      CVirtualNetwork::CVirtualNetwork((CVirtualNetwork *)this.field0_0x0);
      local_58 = (CVirtualNetwork *)this.field0_0x0;
    }
    CVirtualNetwork::setEnabled(SUB81(this.field0_0x0,0));
    pQVar4 = (QArrayData *)QString::fromAscii_helper("Bridged",7);
    CVirtualNetwork::setNetworkID(this);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b3ee40;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100b3ee40:
    CVirtualNetwork::setNetworkType(this.field0_0x0,0);
    pQVar4 = (QArrayData *)QString::fromAscii_helper("Bridged Network",0xf);
    CVirtualNetwork::setDescription(this);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b3eea7;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100b3eea7:
    pQVar4 = local_50;
    if (1 < *(int *)local_50 + 1U) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
    }
    CVirtualNetwork::setBoundCardMac(this);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        local_21 = *(int *)pQVar4 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b3ef08;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
LAB_100b3ef08:
    CVirtualNetwork::setVLANTag((ushort)this.field0_0x0);
    FUN_1001798a0(param_1 + 0x98,&local_58);
  }
  else {
    CVirtualNetwork::getNetworkID();
    iVar2 = QString::compare_helper
                      (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),"Bridged"
                       ,0xffffffff,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_21 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_100b3ec32;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_100b3ec32:
    if (iVar2 != 0) {
      CVirtualNetwork::getNetworkID();
      QString::toUtf8();
      pQVar4 = local_68;
      lVar1 = *(long *)(local_68 + 0x10);
      QString::toUtf8();
      FUN_100df99c0("","prl_net",0,
                    "FillDefaultNet: Failed to create %s because net \'%s\' is already using interface %s"
                    ,"Bridged",pQVar4 + lVar1,local_78 + *(long *)(local_78 + 0x10));
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100b3ecd9;
        }
        QArrayData::deallocate(local_78,1,8);
      }
LAB_100b3ecd9:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_21 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100b3ed09;
        }
        QArrayData::deallocate(local_68,1,8);
      }
LAB_100b3ed09:
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_21 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_100b3ef2e;
        }
        QArrayData::deallocate(local_70,2,8);
      }
    }
  }
LAB_100b3ef2e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100b3ef81;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100b3ef81:
  FUN_100af7aa0(&local_40);
  return;
}

