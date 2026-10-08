
void FUN_10059c750(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  int iVar11;
  QVariant local_128;
  QHostAddress local_118 [8];
  QVariant local_110;
  QString local_100;
  QArrayData *local_f8;
  QHostAddress local_f0 [8];
  QVariant local_e8;
  QString local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (DAT_1022743f0 == 0) {
    DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
  }
  uVar8 = DAT_1022743f0;
  uVar7 = QVariant::userType();
  if (uVar8 == uVar7) {
    puVar9 = (undefined8 *)QVariant::constData();
    uStack_70 = puVar9[5];
    local_78 = puVar9[4];
    uStack_80 = puVar9[3];
    local_88 = puVar9[2];
    local_98 = *puVar9;
    uStack_90 = puVar9[1];
  }
  else {
    cVar6 = QVariant::convert((int)(QVariant *)(param_1 + 0x28),(void *)(ulong)uVar8);
    if (cVar6 == '\0') {
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
      local_98 = CONCAT71(uStack_67,local_68);
      uStack_90 = local_60;
    }
  }
  local_a8 = local_98;
  uStack_9a._0_1_ = (undefined1)((ulong)uStack_90 >> 0x30);
  uVar5 = (undefined1)uStack_9a;
  uStack_9a._1_1_ = (undefined1)((ulong)uStack_90 >> 0x38);
  uStack_a0 = (undefined6)uStack_90;
  _uStack_a0 = CONCAT16(uStack_9a._1_1_,uStack_a0);
  _uStack_a0 = CONCAT17(uVar5,_uStack_a0);
  uVar8 = (uint)uStack_9a;
  _uStack_a0 = CONCAT16((char)(uVar8 + 1 >> 8),uStack_a0);
  _uStack_a0 = CONCAT17((char)(uVar8 + 1),_uStack_a0);
  local_c8 = (QArrayData *)QString::fromAscii_helper("IPv6DHCPScopeInfo",0x11);
  QString::indexOf(param_1 + 0x20,&local_c8,0,1);
  QString::left((int)&local_c0);
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_68 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059c90c;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
LAB_10059c90c:
  puVar4 = PTR_s_NetworkConfigStorage_1022744a0;
  plVar1 = *(long **)(param_1 + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  iVar11 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar11 = (int)sVar10;
  }
  local_d0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
  local_d8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_68 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_b8,0x1e02e24);
  QString::append(&local_d8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_68 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059c9c6;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10059c9c6:
  QHostAddress::QHostAddress(local_f0,(QIPv6Address *)&local_98);
  if (DAT_102274478 == 0) {
    DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_e8,DAT_102274478,local_f0,0);
  (*pcVar2)(plVar1,&local_d0,&local_d8,&local_e8);
  QVariant::~QVariant(&local_e8);
  QHostAddress::~QHostAddress(local_f0);
  if (*(int *)local_d8.field0_0x0 != -1) {
    if (*(int *)local_d8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_d8.field0_0x0 = *(int *)local_d8.field0_0x0 + -1;
      local_68 = *(int *)local_d8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059ca81;
    }
    QArrayData::deallocate((QArrayData *)local_d8.field0_0x0,2,8);
  }
LAB_10059ca81:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_68 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059cab7;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10059cab7:
  puVar4 = PTR_s_NetworkConfigStorage_1022744a0;
  plVar1 = *(long **)(param_1 + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  iVar11 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar10 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar11 = (int)sVar10;
  }
  local_f8 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar11);
  local_100.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_c0;
  if (1 < *(int *)local_c0 + 1U) {
    LOCK();
    *(int *)local_c0 = *(int *)local_c0 + 1;
    local_68 = *(int *)local_c0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_b0,0x1e02e43);
  QString::append(&local_100);
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_68 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059cb69;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10059cb69:
  QHostAddress::QHostAddress(local_118,(QIPv6Address *)&local_a8);
  if (DAT_102274478 == 0) {
    DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_110,DAT_102274478,local_118,0);
  (*pcVar2)(plVar1,&local_f8,&local_100);
  QVariant::~QVariant(&local_110);
  QHostAddress::~QHostAddress(local_118);
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_68 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059cc24;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_10059cc24:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_68 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059cc5a;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_10059cc5a:
  if (DAT_1022743f0 == 0) {
    DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_128,DAT_1022743f0,&local_98,0);
  QVariant::operator=((QVariant *)(param_1 + 0x28),&local_128);
  QVariant::~QVariant(&local_128);
  lVar3 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_68 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_68) goto LAB_10059ccf8;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_10059ccf8:
  if (lVar3 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

