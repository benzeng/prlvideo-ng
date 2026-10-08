
void FUN_100594990(undefined8 param_1,undefined8 param_2,long *param_3)

{
  Node *pNVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined *puVar5;
  Node *pNVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  size_t sVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  QArrayData *local_1c0;
  QHostAddress local_1b8 [8];
  QHostAddress local_1b0 [8];
  QHostAddress local_1a8 [8];
  QArrayData *local_1a0;
  QArrayData *local_198;
  undefined1 local_190 [168];
  QArrayData *local_e8;
  QVariant local_e0;
  QArrayData *local_d0;
  Node *local_c8;
  Node *local_c0;
  Node *local_b8;
  QString local_b0;
  _func_void_Node_ptr *local_a8;
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
  
  lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar16;
  lVar10 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221c1d0);
  puVar5 = PTR_s_NetworkConfigStorage_1022744a0;
  if (lVar10 == 0) goto LAB_100594fec;
  iVar9 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar11 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar9 = (int)sVar11;
  }
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(puVar5,iVar9);
  plVar12 = (long *)*param_3;
  if ((*(int *)((long)plVar12 + 0x14) == 0) || (uVar3 = *(uint *)(plVar12 + 4), uVar3 == 0)) {
LAB_100594aa7:
    local_a8 = (_func_void_Node_ptr *)PTR_shared_null_1021e15d0;
  }
  else {
    uVar8 = qHash(&local_b0,*(uint *)((long)plVar12 + 0x24));
    uVar4 = (ulong)uVar8 % (ulong)uVar3;
    plVar15 = *(long **)(plVar12[1] + uVar4 * 8);
    if (plVar15 == plVar12) goto LAB_100594aa7;
    plVar14 = (long *)(plVar12[1] + uVar4 * 8);
    do {
      plVar17 = plVar12;
      if (*(uint *)(plVar15 + 1) == uVar8) {
        cVar7 = operator==(&local_b0,(QString *)(plVar15 + 2));
        plVar12 = (long *)*plVar14;
        plVar15 = plVar12;
        plVar17 = (long *)*param_3;
        if (cVar7 != '\0') break;
      }
      plVar12 = plVar17;
      plVar14 = plVar15;
      plVar15 = (long *)*plVar14;
      plVar17 = plVar12;
    } while (plVar15 != plVar12);
    lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
    if (plVar12 == plVar17) goto LAB_100594aa7;
    FUN_100076800(&local_a8,plVar12 + 3);
  }
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_99 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_100594af1;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_100594af1:
  FUN_100076800(&local_c8,&local_a8);
  pNVar1 = local_c8;
  iVar9 = *(int *)(local_c8 + 0x20);
  if (iVar9 != 0) {
    plVar12 = *(long **)(local_c8 + 8);
    do {
      local_c0 = (Node *)*plVar12;
      if (local_c0 != local_c8) {
        local_b8 = local_c8;
        if (local_c0 == local_c8) goto LAB_100594f86;
        goto LAB_100594b70;
      }
      iVar9 = iVar9 + -1;
      plVar12 = plVar12 + 1;
    } while (iVar9 != 0);
  }
  local_c0 = local_c8;
  local_b8 = local_c8;
  goto LAB_100594f86;
LAB_100594b70:
  do {
    pNVar6 = local_c0;
    local_c0 = (Node *)QHashData::nextNode(local_c0);
    local_d0 = *(QArrayData **)(pNVar6 + 0x10);
    if (1 < *(int *)local_d0 + 1U) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + 1;
      local_99 = *(int *)local_d0 != 0;
      UNLOCK();
    }
    local_b8 = pNVar6;
    QVariant::QVariant(&local_e0,(QVariant *)(pNVar6 + 0x18));
    puVar5 = PTR_s_PortForwarding_1022744e0;
    iVar9 = -1;
    if (PTR_s_PortForwarding_1022744e0 != (undefined *)0x0) {
      sVar11 = _strlen(PTR_s_PortForwarding_1022744e0);
      iVar9 = (int)sVar11;
    }
    local_e8 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar9);
    cVar7 = QString::endsWith(&local_d0,&local_e8,1);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_99 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_100594c38;
      }
      QArrayData::deallocate(local_e8,2,8);
    }
LAB_100594c38:
    puVar5 = PTR_s_IPv4DHCPScopeInfo_1022744e8;
    if (cVar7 == '\0') {
      iVar9 = -1;
      if (PTR_s_IPv4DHCPScopeInfo_1022744e8 != (undefined *)0x0) {
        sVar11 = _strlen(PTR_s_IPv4DHCPScopeInfo_1022744e8);
        iVar9 = (int)sVar11;
      }
      local_1a0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar9);
      cVar7 = QString::endsWith(&local_d0,&local_1a0,1);
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_99 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_100594d54;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100594d54:
      puVar5 = PTR_s_IPv6DHCPScopeInfo_1022744f0;
      if (cVar7 == '\0') {
        iVar9 = -1;
        if (PTR_s_IPv6DHCPScopeInfo_1022744f0 != (undefined *)0x0) {
          sVar11 = _strlen(PTR_s_IPv6DHCPScopeInfo_1022744f0);
          iVar9 = (int)sVar11;
        }
        local_1c0 = (QArrayData *)QString::fromAscii_helper(puVar5,iVar9);
        cVar7 = QString::endsWith(&local_d0,&local_1c0,1);
        if (*(int *)local_1c0 != -1) {
          if (*(int *)local_1c0 != 0) {
            LOCK();
            *(int *)local_1c0 = *(int *)local_1c0 + -1;
            local_99 = *(int *)local_1c0 != 0;
            UNLOCK();
            if ((bool)local_99) goto LAB_100594e34;
          }
          QArrayData::deallocate(local_1c0,2,8);
        }
LAB_100594e34:
        if (cVar7 != '\0') {
          if (DAT_1022743f0 == 0) {
            DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
          }
          uVar3 = DAT_1022743f0;
          uVar8 = QVariant::userType();
          if (uVar3 == uVar8) {
            puVar13 = (undefined8 *)QVariant::constData();
            uStack_70 = puVar13[5];
            local_78 = puVar13[4];
            uStack_80 = puVar13[3];
            local_88 = puVar13[2];
            local_98 = *puVar13;
            uStack_90 = puVar13[1];
          }
          else {
            cVar7 = QVariant::convert((int)&local_e0,(void *)(ulong)uVar3);
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
          FUN_100572cb0(lVar10,&local_98);
        }
      }
      else {
        FUN_100599810(local_1b8,&local_e0);
        FUN_1005730f0(lVar10,local_1b8);
        QHostAddress::~QHostAddress(local_1a8);
        QHostAddress::~QHostAddress(local_1b0);
        QHostAddress::~QHostAddress(local_1b8);
      }
    }
    else {
      CPortForwarding::CPortForwarding((CPortForwarding *)local_190);
      QVariant::toString();
      CBaseNode::fromString
                ((QTypedArrayData<unsigned_short> *)local_190,SUB81(&local_198,0),(QString *)0x0,
                 (int *)0x0,(int *)0x0);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_99 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_99) goto LAB_100594cac;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_100594cac:
      FUN_1005715f0(lVar10,(QTypedArrayData<unsigned_short> *)local_190);
      CPortForwarding::~CPortForwarding((CPortForwarding *)local_190);
    }
    QVariant::~QVariant(&local_e0);
    if (*(int *)local_d0 != -1) {
      if (*(int *)local_d0 != 0) {
        LOCK();
        *(int *)local_d0 = *(int *)local_d0 + -1;
        local_99 = *(int *)local_d0 != 0;
        UNLOCK();
        if ((bool)local_99) goto LAB_100594f64;
      }
      QArrayData::deallocate(local_d0,2,8);
    }
LAB_100594f64:
  } while (local_c0 != pNVar1);
  lVar16 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100594f86:
  if (*(int *)(local_c8 + 0x10) != -1) {
    if (*(int *)(local_c8 + 0x10) != 0) {
      LOCK();
      pNVar1 = local_c8 + 0x10;
      *(int *)pNVar1 = *(int *)pNVar1 + -1;
      local_99 = *(int *)pNVar1 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_100594fb8;
    }
    QHashData::free_helper((_func_void_Node_ptr *)local_c8);
  }
LAB_100594fb8:
  if (*(int *)(local_a8 + 0x10) != -1) {
    if (*(int *)(local_a8 + 0x10) != 0) {
      LOCK();
      pcVar2 = local_a8 + 0x10;
      *(int *)pcVar2 = *(int *)pcVar2 + -1;
      local_99 = *(int *)pcVar2 != 0;
      UNLOCK();
      if ((bool)local_99) goto LAB_100594fec;
    }
    QHashData::free_helper(local_a8);
  }
LAB_100594fec:
  if (lVar16 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

