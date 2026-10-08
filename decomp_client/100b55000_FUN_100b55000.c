
undefined8 FUN_100b55000(undefined8 param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  uint uVar6;
  bool bVar7;
  QHostAddress local_90 [8];
  QHostAddress local_88 [8];
  QHostAddress local_80 [8];
  QHostAddress local_78 [8];
  QString local_70;
  QArrayData *local_68;
  QHostAddress local_60 [8];
  QString local_58;
  QArrayData *local_50;
  QHostAddress local_48 [8];
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (param_3 == 1) {
    lVar3 = FUN_100b41520(param_2);
  }
  else {
    if (param_3 != 0) {
      return 0;
    }
    lVar3 = FUN_100b41470(param_2,0xffffffff);
  }
  if (lVar3 == 0) {
    return 1;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("addrmin",7);
  lVar3 = FUN_100b57f50(param_1,&local_38);
  bVar7 = true;
  if (lVar3 != 0) {
    local_40.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 8);
    if (1 < *(int *)local_40.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + 1;
      local_29 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
    }
    CVirtualNetwork::getHostOnlyNetwork();
    uVar4 = CHostOnlyNetwork::getDHCPServer();
    QHostAddress::QHostAddress(local_48,&local_40);
    CDHCPServer::setIPScopeStart(uVar4,local_48);
    QHostAddress::~QHostAddress(local_48);
    local_50 = (QArrayData *)QString::fromAscii_helper("addrmax",7);
    lVar3 = FUN_100b57f50(param_1,&local_50);
    bVar7 = true;
    if (lVar3 != 0) {
      local_58.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 8);
      if (1 < *(int *)local_58.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + 1;
        local_29 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
      }
      CVirtualNetwork::getHostOnlyNetwork();
      uVar4 = CHostOnlyNetwork::getDHCPServer();
      QHostAddress::QHostAddress(local_60,&local_58);
      CDHCPServer::setIPScopeEnd(uVar4,local_60);
      QHostAddress::~QHostAddress(local_60);
      local_68 = (QArrayData *)QString::fromAscii_helper("mask",4);
      lVar3 = FUN_100b57f50(param_1,&local_68);
      bVar7 = true;
      if (lVar3 != 0) {
        local_70.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar3 + 8);
        if (1 < *(int *)local_70.field0_0x0 + 1U) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
          local_29 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
        }
        uVar4 = CVirtualNetwork::getHostOnlyNetwork();
        QHostAddress::QHostAddress(local_78,&local_70);
        CHostOnlyNetwork::setIPNetMask(uVar4,local_78);
        QHostAddress::~QHostAddress(local_78);
        QHostAddress::QHostAddress(local_80,&local_40);
        iVar2 = QHostAddress::toIPv4Address();
        QHostAddress::~QHostAddress(local_80);
        uVar6 = iVar2 + (uint)((char)iVar2 == '\0');
        uVar4 = CVirtualNetwork::getHostOnlyNetwork();
        QHostAddress::QHostAddress(local_88,uVar6);
        CHostOnlyNetwork::setDhcpIPAddress(uVar4,local_88);
        QHostAddress::~QHostAddress(local_88);
        uVar4 = CVirtualNetwork::getHostOnlyNetwork();
        QHostAddress::QHostAddress(local_90,uVar6 + 1);
        CHostOnlyNetwork::setHostIPAddress(uVar4,local_90);
        QHostAddress::~QHostAddress(local_90);
        pQVar5 = (QArrayData *)QString::fromAscii_helper("disabled",8);
        lVar3 = FUN_100b57f50(param_1);
        bVar7 = lVar3 == 0;
        if (!bVar7) {
          QString::toUInt((bool *)(lVar3 + 8),0);
          CVirtualNetwork::getHostOnlyNetwork();
          bVar1 = (bool)CHostOnlyNetwork::getDHCPServer();
          CDHCPServer::setEnabled(bVar1);
        }
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            local_29 = *(int *)pQVar5 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b552da;
          }
          QArrayData::deallocate(pQVar5,2,8);
        }
LAB_100b552da:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_29 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_100b5530a;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
      }
LAB_100b5530a:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b5533a;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_100b5533a:
      if (*(int *)local_58.field0_0x0 != -1) {
        if (*(int *)local_58.field0_0x0 != 0) {
          LOCK();
          *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
          local_29 = *(int *)local_58.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_100b5536a;
        }
        QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
      }
    }
LAB_100b5536a:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_29 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b5539a;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_100b5539a:
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_29 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b553ca;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_100b553ca:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100b553fa;
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100b553fa:
  if (!bVar7) {
    return 1;
  }
  return 0;
}

