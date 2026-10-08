
QVariant * FUN_1005944e0(QVariant *param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  size_t sVar5;
  int iVar6;
  undefined8 in_R8;
  QArrayData *local_150;
  QHostAddress local_148 [8];
  QHostAddress local_140 [8];
  QHostAddress local_138 [8];
  QArrayData *local_130;
  CPortForwarding local_128 [168];
  QString local_80;
  QArrayData *local_78;
  undefined1 local_69;
  undefined1 local_68 [48];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar4 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221c1d0);
  puVar2 = PTR_s_PortForwarding_1022744e0;
  if (lVar4 != 0) {
    iVar6 = -1;
    if (PTR_s_PortForwarding_1022744e0 != (undefined *)0x0) {
      sVar5 = _strlen(PTR_s_PortForwarding_1022744e0);
      iVar6 = (int)sVar5;
    }
    local_78 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    cVar3 = QString::endsWith(in_R8,&local_78,1);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_69 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_100594592;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100594592:
    puVar2 = PTR_s_IPv4DHCPScopeInfo_1022744e8;
    if (cVar3 != '\0') {
      FUN_1005715d0(local_128,lVar4);
      CBaseNode::toString(SUB81(&local_80,0),SUB81(local_128,0));
      QVariant::QVariant(param_1,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_69 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_69) goto LAB_1005945f4;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1005945f4:
      CPortForwarding::~CPortForwarding(local_128);
      goto LAB_1005947c9;
    }
    iVar6 = -1;
    if (PTR_s_IPv4DHCPScopeInfo_1022744e8 != (undefined *)0x0) {
      sVar5 = _strlen(PTR_s_IPv4DHCPScopeInfo_1022744e8);
      iVar6 = (int)sVar5;
    }
    local_130 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    cVar3 = QString::endsWith(in_R8,&local_130,1);
    if (*(int *)local_130 != -1) {
      if (*(int *)local_130 != 0) {
        LOCK();
        *(int *)local_130 = *(int *)local_130 + -1;
        local_69 = *(int *)local_130 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_10059467f;
      }
      QArrayData::deallocate(local_130,2,8);
    }
LAB_10059467f:
    puVar2 = PTR_s_IPv6DHCPScopeInfo_1022744f0;
    if (cVar3 != '\0') {
      FUN_100572e30(local_148,lVar4);
      if (DAT_102274470 == 0) {
        DAT_102274470 = FUN_100599470("NetworkUtils::IPv4DHCPScopeInfo",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_102274470,local_148,0);
      QHostAddress::~QHostAddress(local_138);
      QHostAddress::~QHostAddress(local_140);
      QHostAddress::~QHostAddress(local_148);
      goto LAB_1005947c9;
    }
    iVar6 = -1;
    if (PTR_s_IPv6DHCPScopeInfo_1022744f0 != (undefined *)0x0) {
      sVar5 = _strlen(PTR_s_IPv6DHCPScopeInfo_1022744f0);
      iVar6 = (int)sVar5;
    }
    local_150 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
    cVar3 = QString::endsWith(in_R8,&local_150,1);
    if (*(int *)local_150 != -1) {
      if (*(int *)local_150 != 0) {
        LOCK();
        *(int *)local_150 = *(int *)local_150 + -1;
        local_69 = *(int *)local_150 != 0;
        UNLOCK();
        if ((bool)local_69) goto LAB_100594770;
      }
      QArrayData::deallocate(local_150,2,8);
    }
LAB_100594770:
    if (cVar3 != '\0') {
      FUN_100572b30(local_68,lVar4);
      if (DAT_1022743f0 == 0) {
        DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
      }
      QVariant::QVariant(param_1,DAT_1022743f0,local_68,0);
      goto LAB_1005947c9;
    }
  }
  (param_1->field0_0x0).field1_0x8.bitField0_30 = 0x80000000;
  (param_1->field0_0x0).field0_0x0.field7 = 0;
LAB_1005947c9:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

