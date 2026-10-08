
undefined1 FUN_10059bad0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  QStringList *pQVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  QStringList *pQVar9;
  undefined1 uVar10;
  undefined1 local_100 [40];
  int *local_d8 [4];
  QVariant local_b8 [2];
  QHostAddress local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  if (DAT_1022743f0 == 0) {
    DAT_1022743f0 = FUN_1005996a0("NetworkUtils::IPv6DHCPScopeInfo",0xffffffffffffffff,1);
  }
  uVar4 = DAT_1022743f0;
  uVar6 = QVariant::userType();
  if (uVar4 == uVar6) {
    puVar8 = (undefined8 *)QVariant::constData();
    uStack_70 = puVar8[5];
    local_78 = puVar8[4];
    uStack_80 = puVar8[3];
    local_88 = puVar8[2];
    local_98 = *puVar8;
    uStack_90 = puVar8[1];
  }
  else {
    cVar5 = QVariant::convert((int)param_1 + 0x28,(void *)(ulong)uVar4);
    if (cVar5 == '\0') {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      uStack_70 = local_38;
      local_78 = local_40;
      uStack_80 = local_48;
      local_88 = local_50;
      local_98 = CONCAT71(uStack_5f,local_60);
      uStack_90 = local_58;
    }
  }
  QHostAddress::QHostAddress(local_a0,(QIPv6Address *)&local_98);
  iVar7 = QHostAddress::protocol();
  if (((iVar7 == 1) && (cVar5 = QHostAddress::operator==(local_a0,3), cVar5 == '\0')) &&
     (cVar5 = QHostAddress::operator==(local_a0,5), cVar5 == '\0')) {
    FUN_10059c750(param_1);
    uVar10 = 0;
    goto LAB_10059bd5f;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  local_100._32_8_ = QString::fromAscii_helper("1onRejectedMessageClosed()",0x1a);
  local_100._24_4_ = 0x80000000;
  local_100._16_8_ = (QMetaObject *)0x0;
  FUN_100a1c600(local_d8,uVar2,local_100 + 0x20,local_100 + 0x10);
  QVariant::~QVariant((QVariant *)(local_100 + 0x10));
  if (*(int *)local_100._32_8_ != -1) {
    if (*(int *)local_100._32_8_ != 0) {
      LOCK();
      *(int *)local_100._32_8_ = *(int *)local_100._32_8_ + -1;
      local_60 = *(int *)local_100._32_8_ != 0;
      UNLOCK();
      if ((bool)local_60) goto LAB_10059bcaa;
    }
    QArrayData::deallocate((QArrayData *)local_100._32_8_,2,8);
  }
LAB_10059bcaa:
  iVar7 = CMessageManager::instance();
  pQVar3 = *(QStringList **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10);
  pQVar9 = (QStringList *)0x0;
  if ((pQVar3 != (QStringList *)0x0) &&
     (pQVar9 = (QStringList *)0x0, (*(byte *)((long)pQVar3[1].field0_0x0.field1 + 0x20) & 1) != 0))
  {
    pQVar9 = pQVar3;
  }
  local_100._8_8_ = PTR_shared_null_1021e15e8;
  local_100._0_8_ = PTR_shared_null_1021e15e8;
  CMessageManager::showMessageBox
            (iVar7,(QWidget *)0x80015143,pQVar9,(QStringList *)(local_100 + 8),
             (CSlotInfo *)local_100,SUB81(local_d8,0));
  FUN_100039a80(local_100);
  FUN_100039a80(local_100 + 8);
  QVariant::~QVariant(local_b8);
  if (local_d8[0] != (int *)0x0) {
    LOCK();
    *local_d8[0] = *local_d8[0] + -1;
    local_60 = *local_d8[0] != 0;
    UNLOCK();
    if ((!(bool)local_60) && (local_d8[0] != (int *)0x0)) {
      operator_delete(local_d8[0]);
    }
  }
  uVar10 = 1;
LAB_10059bd5f:
  QHostAddress::~QHostAddress(local_a0);
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

