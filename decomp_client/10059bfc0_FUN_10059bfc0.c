
void FUN_10059bfc0(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  QHostAddress local_c0 [8];
  QVariant local_b8;
  QString local_a8;
  QArrayData *local_a0;
  QHostAddress local_98 [8];
  QVariant local_90;
  QString local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QHostAddress local_60 [8];
  QHostAddress local_58 [8];
  QHostAddress local_50 [8];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_100599810(local_60,param_1 + 0x28);
  uVar4 = QHostAddress::toIPv4Address();
  uVar5 = QHostAddress::toIPv4Address();
  local_70 = (QArrayData *)QString::fromAscii_helper("IPv4DHCPScopeInfo",0x11);
  QString::indexOf(param_1 + 0x20,&local_70,0,1);
  QString::left((int)&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c06e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10059c06e:
  puVar3 = PTR_s_NetworkConfigStorage_1022744a0;
  plVar1 = *(long **)(param_1 + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  iVar7 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar7 = (int)sVar6;
  }
  local_78 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e02dd6);
  QString::append(&local_80);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c116;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10059c116:
  QHostAddress::QHostAddress(local_98,(uVar5 & uVar4) + 2);
  if (DAT_102274478 == 0) {
    DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_90,DAT_102274478,local_98,0);
  (*pcVar2)(plVar1,&local_78,&local_80,&local_90);
  QVariant::~QVariant(&local_90);
  QHostAddress::~QHostAddress(local_98);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c1c9;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_10059c1c9:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c1f9;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10059c1f9:
  puVar3 = PTR_s_NetworkConfigStorage_1022744a0;
  plVar1 = *(long **)(param_1 + 0x40);
  pcVar2 = *(code **)(*plVar1 + 0x70);
  iVar7 = -1;
  if (PTR_s_NetworkConfigStorage_1022744a0 != (undefined *)0x0) {
    sVar6 = _strlen(PTR_s_NetworkConfigStorage_1022744a0);
    iVar7 = (int)sVar6;
  }
  local_a0 = (QArrayData *)QString::fromAscii_helper(puVar3,iVar7);
  local_a8.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_31 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e02df4);
  QString::append(&local_a8);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c2a3;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10059c2a3:
  QHostAddress::QHostAddress(local_c0,(uVar5 & uVar4) + 1);
  if (DAT_102274478 == 0) {
    DAT_102274478 = FUN_10059d7f0("QHostAddress",0xffffffffffffffff,1);
  }
  QVariant::QVariant(&local_b8,DAT_102274478,local_c0,0);
  (*pcVar2)(plVar1,&local_a0,&local_a8,&local_b8);
  QVariant::~QVariant(&local_b8);
  QHostAddress::~QHostAddress(local_c0);
  if (*(int *)local_a8.field0_0x0 != -1) {
    if (*(int *)local_a8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
      local_31 = *(int *)local_a8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c35d;
    }
    QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
  }
LAB_10059c35d:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c393;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10059c393:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10059c3c7;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10059c3c7:
  QHostAddress::~QHostAddress(local_50);
  QHostAddress::~QHostAddress(local_58);
  QHostAddress::~QHostAddress(local_60);
  return;
}

