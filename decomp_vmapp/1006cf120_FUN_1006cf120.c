
void FUN_1006cf120(long param_1,undefined8 param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  CNATServer *pCVar9;
  CNATServer *pCVar10;
  CTCPForwardsList *pCVar11;
  CPortForwarding *pCVar12;
  CTCPForwardsList *pCVar13;
  CUDPForwardsList *pCVar14;
  long *plVar15;
  QArrayData *pQVar16;
  undefined8 *puVar17;
  CPortForwardEntry *pCVar18;
  undefined8 *puVar19;
  QArrayData *pQVar20;
  ushort uVar21;
  QArrayData *pQVar22;
  QArrayData *pQVar23;
  CPortForwardEntry *local_158;
  CPortForwardEntry *local_150;
  CPortForwardEntry *local_148;
  CPortForwardEntry *local_140;
  QArrayData *local_138;
  QString local_130;
  QHostAddress local_128 [8];
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  undefined1 local_108 [192];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar6 = FUN_1006b7990(param_2,0xffffffff);
  lVar7 = FUN_1006b7a40(param_2);
  lVar8 = *(long *)(param_1 + 8);
  iVar5 = QString::compare_helper
                    (*(long *)(lVar8 + 0x10) + lVar8,*(undefined4 *)(lVar8 + 4),"tcp",0xffffffff,1);
  if (iVar5 == 0) {
    bVar2 = true;
    bVar3 = false;
  }
  else {
    lVar8 = *(long *)(param_1 + 8);
    iVar5 = QString::compare_helper
                      (*(long *)(lVar8 + 0x10) + lVar8,*(undefined4 *)(lVar8 + 4),"udp",0xffffffff,1
                      );
    if (iVar5 != 0) {
      return;
    }
    bVar3 = true;
    bVar2 = false;
  }
  if (lVar6 != 0) {
    CVirtualNetwork::getHostOnlyNetwork();
    lVar8 = CHostOnlyNetwork::getNATServer();
    if (lVar8 == 0) {
      pCVar9 = (CNATServer *)CVirtualNetwork::getHostOnlyNetwork();
      pCVar10 = operator_new(0xc0);
      CNATServer::CNATServer(pCVar10);
      CHostOnlyNetwork::setNATServer(pCVar9);
    }
    CVirtualNetwork::getHostOnlyNetwork();
    bVar4 = (bool)CHostOnlyNetwork::getNATServer();
    CNATServer::setEnabled(bVar4);
    CVirtualNetwork::getHostOnlyNetwork();
    CHostOnlyNetwork::getNATServer();
    pCVar11 = (CTCPForwardsList *)CNATServer::getPortForwarding();
    if (pCVar11 == (CTCPForwardsList *)0x0) {
      pCVar11 = operator_new(0xa8);
      CPortForwarding::CPortForwarding((CPortForwarding *)pCVar11);
      CVirtualNetwork::getHostOnlyNetwork();
      pCVar12 = (CPortForwarding *)CHostOnlyNetwork::getNATServer();
      CNATServer::setPortForwarding(pCVar12);
    }
    if ((bVar2) && (lVar8 = CPortForwarding::getTCP(), lVar8 == 0)) {
      pCVar13 = operator_new(0xa0);
      CTCPForwardsList::CTCPForwardsList(pCVar13);
      CPortForwarding::setTCP(pCVar11);
    }
    if ((bVar3) && (lVar8 = CPortForwarding::getUDP(), lVar8 == 0)) {
      pCVar14 = operator_new(0xa0);
      CUDPForwardsList::CUDPForwardsList(pCVar14);
      CPortForwarding::setUDP((CUDPForwardsList *)pCVar11);
    }
  }
  if (lVar7 != 0) {
    CVirtualNetwork::getHostOnlyNetwork();
    lVar8 = CHostOnlyNetwork::getNATServer();
    if (lVar8 == 0) {
      pCVar9 = (CNATServer *)CVirtualNetwork::getHostOnlyNetwork();
      pCVar10 = operator_new(0xc0);
      CNATServer::CNATServer(pCVar10);
      CHostOnlyNetwork::setNATServer(pCVar9);
    }
    CVirtualNetwork::getHostOnlyNetwork();
    bVar4 = (bool)CHostOnlyNetwork::getNATServer();
    CNATServer::setEnabled(bVar4);
    CVirtualNetwork::getHostOnlyNetwork();
    CHostOnlyNetwork::getNATServer();
    pCVar11 = (CTCPForwardsList *)CNATServer::getPortForwarding();
    if (pCVar11 == (CTCPForwardsList *)0x0) {
      pCVar11 = operator_new(0xa8);
      CPortForwarding::CPortForwarding((CPortForwarding *)pCVar11);
      CVirtualNetwork::getHostOnlyNetwork();
      pCVar12 = (CPortForwarding *)CHostOnlyNetwork::getNATServer();
      CNATServer::setPortForwarding(pCVar12);
    }
    if ((bVar2) && (lVar8 = CPortForwarding::getTCP(), lVar8 == 0)) {
      pCVar13 = operator_new(0xa0);
      CTCPForwardsList::CTCPForwardsList(pCVar13);
      CPortForwarding::setTCP(pCVar11);
    }
    if ((bVar3) && (lVar8 = CPortForwarding::getUDP(), lVar8 == 0)) {
      pCVar14 = operator_new(0xa0);
      CUDPForwardsList::CUDPForwardsList(pCVar14);
      CPortForwarding::setUDP((CUDPForwardsList *)pCVar11);
    }
  }
  plVar15 = (long *)FUN_1006d1b80(param_1);
  pQVar16 = (QArrayData *)*plVar15;
  iVar5 = *(int *)pQVar16;
  if (iVar5 == 0) {
    if ((int)*(uint *)(pQVar16 + 8) < 0) {
      pQVar16 = (QArrayData *)QArrayData::allocate(0x10,8,*(uint *)(pQVar16 + 8) & 0x7fffffff,0);
      local_40 = pQVar16;
      if (pQVar16 == (QArrayData *)0x0) {
        qBadAlloc();
      }
      pQVar16[0xb] = (QArrayData)((byte)pQVar16[0xb] | 0x80);
    }
    else {
      pQVar16 = (QArrayData *)QArrayData::allocate(0x10,8,(long)*(int *)(pQVar16 + 4),0);
      local_40 = pQVar16;
      if (pQVar16 == (QArrayData *)0x0) {
        iVar5 = qBadAlloc();
        goto LAB_1006cf487;
      }
    }
    if ((*(uint *)(local_40 + 8) & 0x7fffffff) != 0) {
      lVar8 = *plVar15;
      if (((long)*(int *)(lVar8 + 4) & 0xfffffffffffffffU) != 0) {
        puVar17 = (undefined8 *)(lVar8 + *(long *)(lVar8 + 0x10));
        puVar19 = puVar17 + (long)*(int *)(lVar8 + 4) * 2;
        pQVar16 = local_40 + *(long *)(local_40 + 0x10);
        do {
          piVar1 = (int *)*puVar17;
          *(int **)pQVar16 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar1 = (int *)puVar17[1];
          *(int **)(pQVar16 + 8) = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          puVar17 = puVar17 + 2;
          pQVar16 = pQVar16 + 0x10;
        } while (puVar17 != puVar19);
        lVar8 = *plVar15;
      }
      *(int *)(local_40 + 4) = *(int *)(lVar8 + 4);
    }
  }
  else {
LAB_1006cf487:
    local_40 = pQVar16;
    if (iVar5 != -1) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + 1;
      local_31 = *(int *)pQVar16 != 0;
      UNLOCK();
      local_40 = (QArrayData *)*plVar15;
    }
  }
  pQVar16 = local_40;
  pQVar23 = local_40;
  local_48 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      if ((int)*(uint *)(local_40 + 8) < 0) {
        pQVar16 = (QArrayData *)QArrayData::allocate(0x10,8,*(uint *)(local_40 + 8) & 0x7fffffff,0);
        local_48 = pQVar16;
        if (pQVar16 == (QArrayData *)0x0) {
          qBadAlloc();
        }
        pQVar16[0xb] = (QArrayData)((byte)pQVar16[0xb] | 0x80);
        pQVar16 = local_48;
        pQVar23 = local_48;
      }
      else {
        pQVar16 = (QArrayData *)QArrayData::allocate(0x10,8,(long)*(int *)(local_40 + 4),0);
        pQVar23 = pQVar16;
        local_48 = pQVar16;
        if (pQVar16 == (QArrayData *)0x0) {
          qBadAlloc();
          pQVar23 = (QArrayData *)0x0;
        }
      }
      if ((*(uint *)(pQVar23 + 8) & 0x7fffffff) != 0) {
        if ((long)*(int *)(local_40 + 4) * 0x10 != 0) {
          pQVar16 = local_40 + *(long *)(local_40 + 0x10);
          pQVar20 = pQVar16 + (long)*(int *)(local_40 + 4) * 0x10;
          pQVar22 = pQVar23 + *(long *)(pQVar23 + 0x10);
          do {
            piVar1 = *(int **)pQVar16;
            *(int **)pQVar22 = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            piVar1 = *(int **)(pQVar16 + 8);
            *(int **)(pQVar22 + 8) = piVar1;
            if (1 < *piVar1 + 1U) {
              LOCK();
              *piVar1 = *piVar1 + 1;
              local_31 = *piVar1 != 0;
              UNLOCK();
            }
            pQVar16 = pQVar16 + 0x10;
            pQVar22 = pQVar22 + 0x10;
            pQVar23 = local_48;
          } while (pQVar16 != pQVar20);
        }
        *(int *)(pQVar23 + 4) = *(int *)(local_40 + 4);
        pQVar16 = local_48;
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  pQVar23 = pQVar23 + *(long *)(pQVar23 + 0x10);
  if (pQVar23 != pQVar16 + (long)*(int *)(pQVar16 + 4) * 0x10 + *(long *)(pQVar16 + 0x10)) {
    iVar5 = 0;
    do {
      CPortForwardEntry::CPortForwardEntry((CPortForwardEntry *)local_108);
      local_118 = (QArrayData *)QString::fromAscii_helper("fw rule %1",10);
      QString::arg(&local_110,&local_118,iVar5,0,10,0x20);
      CPortForwardEntry::setRuleName((QTypedArrayData<unsigned_short> *)local_108);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006cf731;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1006cf731:
      if (*(int *)local_118 != -1) {
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          local_31 = *(int *)local_118 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006cf767;
        }
        QArrayData::deallocate(local_118,2,8);
      }
LAB_1006cf767:
      QString::toInt((bool *)pQVar23,0);
      uVar21 = (ushort)(QTypedArrayData<unsigned_short> *)local_108;
      CPortForwardEntry::setIncomingPort(uVar21);
      local_120 = (QArrayData *)QString::fromAscii_helper(":",1);
      QString::indexOf(pQVar23 + 8,&local_120,0,1);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006cf7ec;
        }
        QArrayData::deallocate(local_120,2,8);
      }
LAB_1006cf7ec:
      QString::left((int)&local_130);
      QHostAddress::QHostAddress(local_128,&local_130);
      CPortForwardEntry::setRedirectIp((QTypedArrayData<unsigned_short> *)local_108,local_128);
      QHostAddress::~QHostAddress(local_128);
      if (*(int *)local_130.field0_0x0 != -1) {
        if (*(int *)local_130.field0_0x0 != 0) {
          LOCK();
          *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
          local_31 = *(int *)local_130.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006cf856;
        }
        QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
      }
LAB_1006cf856:
      QString::right((int)&local_138);
      QString::toUInt((bool *)&local_138,0);
      CPortForwardEntry::setRedirectPort(uVar21);
      if (*(int *)local_138 != -1) {
        if (*(int *)local_138 != 0) {
          LOCK();
          *(int *)local_138 = *(int *)local_138 + -1;
          local_31 = *(int *)local_138 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006cf8c7;
        }
        QArrayData::deallocate(local_138,2,8);
      }
LAB_1006cf8c7:
      if (bVar2) {
        if (lVar6 != 0) {
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getNATServer();
          CNATServer::getPortForwarding();
          lVar8 = CPortForwarding::getTCP();
          pCVar18 = operator_new(0xc0);
          CPortForwardEntry::CPortForwardEntry(pCVar18,(CPortForwardEntry *)local_108);
          local_140 = pCVar18;
          FUN_1006d0700(lVar8 + 0x98,&local_140);
        }
        if (lVar7 != 0) {
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getNATServer();
          CNATServer::getPortForwarding();
          lVar8 = CPortForwarding::getTCP();
          pCVar18 = operator_new(0xc0);
          CPortForwardEntry::CPortForwardEntry(pCVar18,(CPortForwardEntry *)local_108);
          local_148 = pCVar18;
          FUN_1006d0700(lVar8 + 0x98,&local_148);
        }
      }
      else if (bVar3) {
        if (lVar6 != 0) {
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getNATServer();
          CNATServer::getPortForwarding();
          lVar8 = CPortForwarding::getUDP();
          pCVar18 = operator_new(0xc0);
          CPortForwardEntry::CPortForwardEntry(pCVar18,(CPortForwardEntry *)local_108);
          local_150 = pCVar18;
          FUN_1006d0700(lVar8 + 0x98,&local_150);
        }
        if (lVar7 != 0) {
          CVirtualNetwork::getHostOnlyNetwork();
          CHostOnlyNetwork::getNATServer();
          CNATServer::getPortForwarding();
          lVar8 = CPortForwarding::getUDP();
          pCVar18 = operator_new(0xc0);
          CPortForwardEntry::CPortForwardEntry(pCVar18,(CPortForwardEntry *)local_108);
          local_158 = pCVar18;
          FUN_1006d0700(lVar8 + 0x98,&local_158);
        }
      }
      CPortForwardEntry::~CPortForwardEntry((CPortForwardEntry *)local_108);
      iVar5 = iVar5 + 1;
      pQVar23 = pQVar23 + 0x10;
    } while (pQVar23 != pQVar16 + (long)*(int *)(pQVar16 + 4) * 0x10 + *(long *)(pQVar16 + 0x10));
  }
  if (*(int *)pQVar16 != -1) {
    if (*(int *)pQVar16 != 0) {
      LOCK();
      *(int *)pQVar16 = *(int *)pQVar16 + -1;
      local_31 = *(int *)pQVar16 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006cfb8a;
    }
    lVar8 = (long)*(int *)(pQVar16 + 4) << 4;
    if (lVar8 != 0) {
      pQVar23 = pQVar16 + *(long *)(pQVar16 + 0x10);
      do {
        pQVar20 = *(QArrayData **)(pQVar23 + 8);
        if (*(int *)pQVar20 != -1) {
          if (*(int *)pQVar20 != 0) {
            LOCK();
            *(int *)pQVar20 = *(int *)pQVar20 + -1;
            local_31 = *(int *)pQVar20 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cfb40;
            pQVar20 = *(QArrayData **)(pQVar23 + 8);
          }
          QArrayData::deallocate(pQVar20,2,8);
        }
LAB_1006cfb40:
        pQVar20 = *(QArrayData **)pQVar23;
        if (*(int *)pQVar20 != -1) {
          if (*(int *)pQVar20 != 0) {
            LOCK();
            *(int *)pQVar20 = *(int *)pQVar20 + -1;
            local_31 = *(int *)pQVar20 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cfb6e;
            pQVar20 = *(QArrayData **)pQVar23;
          }
          QArrayData::deallocate(pQVar20,2,8);
        }
LAB_1006cfb6e:
        pQVar23 = pQVar23 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    QArrayData::deallocate(pQVar16,0x10,8);
  }
LAB_1006cfb8a:
  pQVar16 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    lVar8 = (long)*(int *)(local_40 + 4) << 4;
    if (lVar8 != 0) {
      pQVar23 = local_40 + *(long *)(local_40 + 0x10);
      do {
        pQVar20 = *(QArrayData **)(pQVar23 + 8);
        if (*(int *)pQVar20 != -1) {
          if (*(int *)pQVar20 != 0) {
            LOCK();
            *(int *)pQVar20 = *(int *)pQVar20 + -1;
            local_31 = *(int *)pQVar20 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cfc00;
            pQVar20 = *(QArrayData **)(pQVar23 + 8);
          }
          QArrayData::deallocate(pQVar20,2,8);
        }
LAB_1006cfc00:
        pQVar20 = *(QArrayData **)pQVar23;
        if (*(int *)pQVar20 != -1) {
          if (*(int *)pQVar20 != 0) {
            LOCK();
            *(int *)pQVar20 = *(int *)pQVar20 + -1;
            local_31 = *(int *)pQVar20 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006cfc2e;
            pQVar20 = *(QArrayData **)pQVar23;
          }
          QArrayData::deallocate(pQVar20,2,8);
        }
LAB_1006cfc2e:
        pQVar23 = pQVar23 + 0x10;
        lVar8 = lVar8 + -0x10;
      } while (lVar8 != 0);
    }
    QArrayData::deallocate(pQVar16,0x10,8);
  }
  return;
}

