
QVariant * FUN_1005a1660(QVariant *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  long *plVar6;
  char cVar7;
  size_t sVar8;
  CPortForwarding *pCVar9;
  int iVar10;
  QArrayData *local_190;
  QHostAddress local_188 [8];
  QHostAddress local_180 [8];
  QArrayData *local_178;
  QHostAddress local_170 [8];
  QHostAddress local_168 [8];
  QHostAddress local_160 [8];
  QHostAddress local_158 [8];
  QHostAddress local_150 [8];
  QHostAddress local_148 [8];
  QArrayData *local_140;
  QString local_138;
  CPortForwarding local_130 [168];
  QArrayData *local_88;
  QArrayData *local_80;
  long *local_78;
  undefined1 local_69;
  undefined1 local_68 [2] [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_78 = (long *)0x0;
  local_80 = (QArrayData *)PTR_shared_null_1021e1288;
  local_38 = lVar1;
  FUN_1005a64c0(*(undefined8 *)(param_2 + 0x28),param_3,&local_78);
  plVar6 = local_78;
  puVar5 = PTR_s_PortForwarding_1022744e0;
  if (local_78 == (long *)0x0) {
    (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
    (param_1->field0_0x0).field0_0x0.field7 = 0;
  }
  else {
    iVar10 = -1;
    if (PTR_s_PortForwarding_1022744e0 != (undefined *)0x0) {
      sVar8 = _strlen(PTR_s_PortForwarding_1022744e0);
      iVar10 = (int)sVar8;
    }
    local_88 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar10);
    cVar7 = QString::endsWith(&local_80,&local_88,1);
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_69 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_1005a172b;
      }
      QArrayData::deallocate(local_88,2,8);
    }
LAB_1005a172b:
    puVar5 = PTR_s_IPv4DHCPScopeInfo_1022744e8;
    if (cVar7 == '\0') {
      iVar10 = -1;
      if (PTR_s_IPv4DHCPScopeInfo_1022744e8 != (undefined *)0x0) {
        sVar8 = _strlen(PTR_s_IPv4DHCPScopeInfo_1022744e8);
        iVar10 = (int)sVar8;
      }
      local_140 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar10);
      cVar7 = QString::endsWith(&local_80,&local_140,1);
      if (*(int *)local_140 != -1) {
        if (*(int *)local_140 != 0) {
          LOCK();
          *(int *)local_140 = *(int *)local_140 + -1;
          local_69 = *(int *)local_140 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005a1856;
        }
        QArrayData::deallocate(local_140,2,8);
      }
LAB_1005a1856:
      puVar5 = PTR_s_IPv6DHCPScopeInfo_1022744f0;
      if (cVar7 == '\0') {
        iVar10 = -1;
        if (PTR_s_IPv6DHCPScopeInfo_1022744f0 != (undefined *)0x0) {
          sVar8 = _strlen(PTR_s_IPv6DHCPScopeInfo_1022744f0);
          iVar10 = (int)sVar8;
        }
        local_178 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar10);
        cVar7 = QString::endsWith(&local_80,&local_178,1);
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            local_69 = *(int *)local_178 != 0;
            UNLOCK();
            if ((bool)local_69) goto LAB_1005a1a09;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_1005a1a09:
        if (cVar7 == '\0') {
          pcVar2 = *(code **)(*plVar6 + 0x40);
          local_190 = local_80;
          if (1 < *(int *)local_80 + 1U) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + 1;
            local_69 = *(int *)local_80 != 0;
            UNLOCK();
          }
          (*pcVar2)(param_1,plVar6,&local_190);
          auVar4._8_8_ = local_48._8_8_;
          auVar4._0_8_ = local_48._0_8_;
          auVar3._8_8_ = local_68[0]._8_8_;
          auVar3._0_8_ = local_68[0]._0_8_;
          if (*(int *)local_190 != -1) {
            if (*(int *)local_190 != 0) {
              LOCK();
              *(int *)local_190 = *(int *)local_190 + -1;
              local_69 = *(int *)local_190 != 0;
              UNLOCK();
              local_68[0] = auVar3;
              local_48 = auVar4;
              if ((bool)local_69) goto LAB_1005a1b2a;
            }
            QArrayData::deallocate(local_190,2,8);
          }
        }
        else {
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getDHCPv6ServerOrig();
          CDHCPServer::getIPScopeStart();
          local_68[0] = QHostAddress::toIPv6Address();
          QHostAddress::~QHostAddress(local_180);
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getIP6NetMask();
          local_48 = QHostAddress::toIPv6Address();
          QHostAddress::~QHostAddress(local_188);
          if (DAT_1022743f0 == 0) {
            DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
          }
          QVariant::QVariant(param_1,DAT_1022743f0,local_68,0);
        }
      }
      else {
        QHostAddress::QHostAddress(local_158);
        QHostAddress::QHostAddress(local_150);
        QHostAddress::QHostAddress(local_148);
        CVirtualNetwork::getHostOnlyNetwork();
        CHostOnlyNetwork::getDHCPServer();
        CDHCPServer::getIPScopeStart();
        QHostAddress::operator=(local_158,local_160);
        QHostAddress::~QHostAddress(local_160);
        CVirtualNetwork::getHostOnlyNetwork();
        CHostOnlyNetwork::getDHCPServer();
        CDHCPServer::getIPScopeEnd();
        QHostAddress::operator=(local_150,local_168);
        QHostAddress::~QHostAddress(local_168);
        CVirtualNetwork::getHostOnlyNetwork();
        CHostOnlyNetwork::getIPNetMask();
        QHostAddress::operator=(local_148,local_170);
        QHostAddress::~QHostAddress(local_170);
        if (DAT_102274470 == 0) {
          DAT_102274470 = FUN_100599470("NetworkUtils::IPv4DHCPScopeInfo",0xffffffffffffffff,1);
        }
        QVariant::QVariant(param_1,DAT_102274470,local_158,0);
        QHostAddress::~QHostAddress(local_148);
        QHostAddress::~QHostAddress(local_150);
        QHostAddress::~QHostAddress(local_158);
      }
    }
    else {
      CVirtualNetwork::getHostOnlyNetwork();
      CHostOnlyNetwork::getNATServer();
      pCVar9 = (CPortForwarding *)CNATServer::getPortForwarding();
      CPortForwarding::CPortForwarding(local_130,pCVar9);
      CBaseNode::toString(SUB81(&local_138,0),SUB81(local_130,0));
      QVariant::QVariant(param_1,&local_138);
      if (*(int *)local_138.field0_0x0 != -1) {
        if (*(int *)local_138.field0_0x0 != 0) {
          LOCK();
          *(int *)local_138.field0_0x0 = *(int *)local_138.field0_0x0 + -1;
          local_69 = *(int *)local_138.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005a17b6;
        }
        QArrayData::deallocate((QArrayData *)local_138.field0_0x0,2,8);
      }
LAB_1005a17b6:
      CPortForwarding::~CPortForwarding(local_130);
    }
  }
LAB_1005a1b2a:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_69 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_69) goto LAB_1005a1b5a;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1005a1b5a:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

