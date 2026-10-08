
void FUN_1005a2180(long param_1,undefined8 param_2,QVariant *param_3,byte *param_4)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  char cVar7;
  uint uVar8;
  size_t sVar9;
  QString this;
  QStringList *pQVar10;
  CPortForwarding *pCVar11;
  undefined8 *puVar12;
  int iVar13;
  long lVar14;
  QArrayData *local_1c8;
  QVariant local_1c0;
  QArrayData *local_1b0;
  QHostAddress local_1a8 [8];
  QVariant local_1a0;
  QArrayData *local_190;
  QHostAddress local_188 [8];
  QVariant local_180;
  QArrayData *local_170;
  QHostAddress local_168 [8];
  QVariant local_160;
  QArrayData *local_150;
  byte local_141;
  QArrayData *local_140;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QVariant local_108;
  QArrayData *local_f8;
  byte local_e9;
  QHostAddress local_e8 [8];
  QHostAddress local_e0 [8];
  QHostAddress local_d8 [8];
  QArrayData *local_d0;
  undefined *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  long *local_a8;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_a8 = (long *)0x0;
  local_b0 = (QArrayData *)PTR_shared_null_1021e1288;
  FUN_1005a64c0(*(undefined8 *)(param_1 + 0x28),param_2,&local_a8);
  plVar6 = local_a8;
  puVar5 = PTR_s_PortForwarding_1022744e0;
  if (local_a8 == (long *)0x0) goto LAB_1005a2c5e;
  iVar13 = -1;
  if (PTR_s_PortForwarding_1022744e0 != (undefined *)0x0) {
    sVar9 = _strlen(PTR_s_PortForwarding_1022744e0);
    iVar13 = (int)sVar9;
  }
  local_b8 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar13);
  cVar7 = QString::endsWith(&local_b0,&local_b8,1);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_99 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1005a226f;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1005a226f:
  puVar5 = PTR_s_IPv4DHCPScopeInfo_1022744e8;
  if (cVar7 == '\0') {
    iVar13 = -1;
    if (PTR_s_IPv4DHCPScopeInfo_1022744e8 != (undefined *)0x0) {
      sVar9 = _strlen(PTR_s_IPv4DHCPScopeInfo_1022744e8);
      iVar13 = (int)sVar9;
    }
    local_d0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar13);
    cVar7 = QString::endsWith(&local_b0,&local_d0,1);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_99 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1005a23eb;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_1005a23eb:
    puVar5 = PTR_s_IPv6DHCPScopeInfo_1022744f0;
    if (cVar7 != '\0') {
      FUN_100599810(local_e8,param_3);
      local_e9 = 0;
      pcVar2 = *(code **)(*plVar6 + 0x48);
      local_f8 = (QArrayData *)
                 QString::fromAscii_helper("HostOnlyNetwork.DHCPServer.IPScopeStart",0x27);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_108,DAT_102274478,local_e8,0);
      (*pcVar2)(plVar6,&local_f8,&local_108);
      QVariant::~QVariant(&local_108);
      if (*(int *)local_f8 != -1) {
        if (*(int *)local_f8 != 0) {
          LOCK();
          *(int *)local_f8 = *(int *)local_f8 + -1;
          local_99 = *(int *)local_f8 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a24ca;
        }
        QArrayData::deallocate(local_f8,2,8);
      }
LAB_1005a24ca:
      plVar6 = local_a8;
      *param_4 = *param_4 | local_e9;
      pcVar2 = *(code **)(*local_a8 + 0x48);
      local_110 = (QArrayData *)
                  QString::fromAscii_helper("HostOnlyNetwork.DHCPServer.IPScopeEnd",0x25);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_120,DAT_102274478,local_e0,0);
      (*pcVar2)(plVar6,&local_110,&local_120);
      QVariant::~QVariant(&local_120);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_99 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a259b;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1005a259b:
      plVar6 = local_a8;
      *param_4 = *param_4 | local_e9;
      pcVar2 = *(code **)(*local_a8 + 0x48);
      local_128 = (QArrayData *)QString::fromAscii_helper("HostOnlyNetwork.IPNetMask",0x19);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_138,DAT_102274478,local_d8,0);
      (*pcVar2)(plVar6,&local_128,&local_138,&local_e9);
      QVariant::~QVariant(&local_138);
      if (*(int *)local_128 != -1) {
        if (*(int *)local_128 != 0) {
          LOCK();
          *(int *)local_128 = *(int *)local_128 + -1;
          local_99 = *(int *)local_128 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a266f;
        }
        QArrayData::deallocate(local_128,2,8);
      }
LAB_1005a266f:
      *param_4 = *param_4 | local_e9;
      QHostAddress::~QHostAddress(local_d8);
      QHostAddress::~QHostAddress(local_e0);
      QHostAddress::~QHostAddress(local_e8);
      goto LAB_1005a2bf4;
    }
    iVar13 = -1;
    if (PTR_s_IPv6DHCPScopeInfo_1022744f0 != (undefined *)0x0) {
      sVar9 = _strlen(PTR_s_IPv6DHCPScopeInfo_1022744f0);
      iVar13 = (int)sVar9;
    }
    local_140 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar13);
    cVar7 = QString::endsWith(&local_b0,&local_140,1);
    if (*(int *)local_140 != -1) {
      if (*(int *)local_140 != 0) {
        LOCK();
        *(int *)local_140 = *(int *)local_140 + -1;
        local_99 = *(int *)local_140 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1005a2721;
      }
      QArrayData::deallocate(local_140,2,8);
    }
LAB_1005a2721:
    if (cVar7 != '\0') {
      if (DAT_1022743f0 == 0) {
        DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
      }
      uVar4 = DAT_1022743f0;
      uVar8 = QVariant::userType();
      if (uVar4 == uVar8) {
        puVar12 = (undefined8 *)QVariant::constData();
        uStack_70 = puVar12[5];
        local_78 = puVar12[4];
        uStack_80 = puVar12[3];
        local_88 = puVar12[2];
        local_98 = *puVar12;
        uStack_90 = puVar12[1];
      }
      else {
        cVar7 = QVariant::convert((int)param_3,(void *)(ulong)uVar4);
        if (cVar7 == '\0') {
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          uStack_70 = local_40;
          local_78 = local_48;
          uStack_80 = local_50;
          local_88 = local_58;
          uStack_90 = local_60;
          local_98 = local_68;
        }
      }
      plVar6 = local_a8;
      local_141 = 0;
      pcVar2 = *(code **)(*local_a8 + 0x48);
      local_150 = (QArrayData *)
                  QString::fromAscii_helper("HostOnlyNetwork.DHCPv6Server.IPScopeStart",0x29);
      QHostAddress::QHostAddress(local_168,(QIPv6Address *)&local_98);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_160,DAT_102274478,local_168,0);
      (*pcVar2)(plVar6,&local_150,&local_160);
      QVariant::~QVariant(&local_160);
      QHostAddress::~QHostAddress(local_168);
      if (*(int *)local_150 != -1) {
        if (*(int *)local_150 != 0) {
          LOCK();
          *(int *)local_150 = *(int *)local_150 + -1;
          local_99 = *(int *)local_150 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a2a11;
        }
        QArrayData::deallocate(local_150,2,8);
      }
LAB_1005a2a11:
      plVar6 = local_a8;
      *param_4 = *param_4 | local_141;
      pcVar2 = *(code **)(*local_a8 + 0x48);
      local_170 = (QArrayData *)
                  QString::fromAscii_helper("HostOnlyNetwork.DHCPv6Server.IPScopeEnd",0x27);
      QHostAddress::QHostAddress(local_188,(QIPv6Address *)&local_88);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_180,DAT_102274478,local_188,0);
      (*pcVar2)(plVar6,&local_170,&local_180);
      QVariant::~QVariant(&local_180);
      QHostAddress::~QHostAddress(local_188);
      if (*(int *)local_170 != -1) {
        if (*(int *)local_170 != 0) {
          LOCK();
          *(int *)local_170 = *(int *)local_170 + -1;
          local_99 = *(int *)local_170 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a2afe;
        }
        QArrayData::deallocate(local_170,2,8);
      }
LAB_1005a2afe:
      plVar6 = local_a8;
      *param_4 = *param_4 | local_141;
      pcVar2 = *(code **)(*local_a8 + 0x48);
      local_190 = (QArrayData *)QString::fromAscii_helper("HostOnlyNetwork.IP6NetMask",0x1a);
      QHostAddress::QHostAddress(local_1a8,(QIPv6Address *)&local_78);
      if (DAT_102274478 == 0) {
        DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
      }
      QVariant::QVariant(&local_1a0,DAT_102274478,local_1a8,0);
      (*pcVar2)(plVar6,&local_190,&local_1a0,&local_141);
      QVariant::~QVariant(&local_1a0);
      QHostAddress::~QHostAddress(local_1a8);
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_99 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_1005a2beb;
        }
        QArrayData::deallocate(local_190,2,8);
      }
LAB_1005a2beb:
      *param_4 = *param_4 | local_141;
      goto LAB_1005a2bf4;
    }
    pcVar2 = *(code **)(*plVar6 + 0x48);
    local_1b0 = local_b0;
    if (1 < *(int *)local_b0 + 1U) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + 1;
      local_99 = *(int *)local_b0 != 0;
      UNLOCK();
    }
    QVariant::QVariant(&local_1c0,param_3);
    cVar7 = (*pcVar2)(plVar6,&local_1b0,&local_1c0,param_4);
    QVariant::~QVariant(&local_1c0);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        local_99 = *(int *)local_1b0 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1005a283a;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_1005a283a:
    if (cVar7 != '\0') goto LAB_1005a2bf4;
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",0,"Failed to set network config value, path: [%s]",
                  local_1c8 + *(long *)(local_1c8 + 0x10));
    if (*(int *)local_1c8 != -1) {
      if (*(int *)local_1c8 != 0) {
        LOCK();
        *(int *)local_1c8 = *(int *)local_1c8 + -1;
        local_99 = *(int *)local_1c8 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1005a2c5e;
      }
      QArrayData::deallocate(local_1c8,1,8);
    }
  }
  else {
    this.field0_0x0 = operator_new(0xa8);
    CPortForwarding::CPortForwarding((CPortForwarding *)this.field0_0x0);
    QVariant::toString();
    CBaseNode::fromString(this,SUB81(&local_c0,0),(QString *)0x0,(int *)0x0,(int *)0x0);
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_99 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_1005a22f0;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
LAB_1005a22f0:
    local_c8 = PTR_shared_null_1021e15e8;
    CVirtualNetwork::getHostOnlyNetwork();
    CHostOnlyNetwork::getNATServer();
    pQVar10 = (QStringList *)CNATServer::getPortForwarding();
    CPortForwarding::diff((CPortForwarding *)this.field0_0x0,pQVar10);
    if (*(int *)(local_c8 + 0xc) != *(int *)(local_c8 + 8)) {
      CVirtualNetwork::getHostOnlyNetwork();
      pCVar11 = (CPortForwarding *)CHostOnlyNetwork::getNATServer();
      CNATServer::setPortForwarding(pCVar11);
      *param_4 = 1;
    }
    FUN_100039a80(&local_c8);
LAB_1005a2bf4:
    if (*param_4 != 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      iVar13 = *(int *)(lVar3 + 8);
      puVar12 = (undefined8 *)(lVar3 + 0x10 + (long)iVar13 * 8);
      iVar1 = *(int *)(lVar3 + 0xc);
      if (iVar13 == iVar1) {
LAB_1005a2c41:
        if (puVar12 != (undefined8 *)(lVar3 + 0x10 + (long)iVar1 * 8)) goto LAB_1005a2c5e;
      }
      else {
        lVar14 = (long)iVar1 * 8 + (long)iVar13 * -8;
        do {
          if ((long *)*puVar12 == local_a8) goto LAB_1005a2c41;
          puVar12 = puVar12 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      FUN_1001798a0(param_1 + 0x30,&local_a8);
    }
  }
LAB_1005a2c5e:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_99 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_1005a2c9a;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_1005a2c9a:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

