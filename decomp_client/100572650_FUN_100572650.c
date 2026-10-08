
void FUN_100572650(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  QString this;
  long lVar9;
  QString local_130;
  QHostAddress local_128 [8];
  QArrayData *local_120;
  QString local_118;
  QTypedArrayData<unsigned_short> *local_110;
  QVariant local_108;
  CPortForwarding local_f8 [175];
  undefined1 local_49;
  QUuid local_48 [16];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar2;
  if (param_2 != 1) goto LAB_1005729fc;
  QObject::sender();
  lVar6 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221cf50);
  if (lVar6 == 0) goto LAB_1005729fc;
  CPortForwarding::CPortForwarding(local_f8,(CPortForwarding *)(*(long *)(param_1 + 0x58) + 0x20));
  QObject::property((char *)&local_108);
  if ((local_108.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) != 0) {
    iVar5 = QVariant::toInt((bool *)&local_108);
    lVar7 = CPortForwarding::getTCP();
    lVar3 = *(long *)(lVar7 + 0x98);
    iVar1 = *(int *)(lVar3 + 8);
    if (iVar1 < *(int *)(lVar3 + 0xc)) {
      lVar9 = 0;
      do {
        if (*(int *)(*(long *)(lVar3 + 0x10 + (long)iVar1 * 8 + lVar9 * 8) + 0x58) == iVar5) {
          if (-1 < (int)lVar9) {
            plVar8 = (long *)FUN_100577620(lVar7 + 0x98);
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 0x88))(plVar8);
            }
            goto LAB_1005727c3;
          }
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar3 + 0xc) - iVar1);
    }
    lVar7 = CPortForwarding::getUDP();
    lVar3 = *(long *)(lVar7 + 0x98);
    iVar1 = *(int *)(lVar3 + 8);
    if (iVar1 < *(int *)(lVar3 + 0xc)) {
      lVar9 = 0;
      do {
        if (*(int *)(*(long *)(lVar3 + 0x10 + (long)iVar1 * 8 + lVar9 * 8) + 0x58) == iVar5) {
          if ((-1 < (int)lVar9) &&
             (plVar8 = (long *)FUN_100577620(lVar7 + 0x98), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x88))(plVar8);
          }
          break;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar3 + 0xc) - iVar1);
    }
  }
LAB_1005727c3:
  this.field0_0x0 = operator_new(0xc0);
  CPortForwardEntry::CPortForwardEntry((CPortForwardEntry *)this.field0_0x0);
  local_110 = this.field0_0x0;
  CPortForwardEntry::setIncomingPort((ushort)this.field0_0x0);
  CPortForwardEntry::setRedirectPort((ushort)this.field0_0x0);
  local_118.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar6 + 0x108);
  if (1 < *(int *)local_118.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + 1;
    local_49 = *(int *)local_118.field0_0x0 != 0;
    UNLOCK();
  }
  QUuid::QUuid(local_48,&local_118);
  cVar4 = QUuid::isNull();
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_49 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100572870;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100572870:
  if (cVar4 == '\0') {
    local_120 = *(QArrayData **)(lVar6 + 0x108);
    if (1 < *(int *)local_120 + 1U) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + 1;
      local_49 = *(int *)local_120 != 0;
      UNLOCK();
    }
    CPortForwardEntry::setRedirectVm(this);
    if (*(int *)local_120 != -1) {
      if (*(int *)local_120 != 0) {
        LOCK();
        *(int *)local_120 = *(int *)local_120 + -1;
        local_49 = *(int *)local_120 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100572966;
      }
      QArrayData::deallocate(local_120,2,8);
    }
  }
  else {
    local_130.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(lVar6 + 0x108);
    if (1 < *(int *)local_130.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + 1;
      local_49 = *(int *)local_130.field0_0x0 != 0;
      UNLOCK();
    }
    QHostAddress::QHostAddress(local_128,&local_130);
    CPortForwardEntry::setRedirectIp(this.field0_0x0,local_128);
    QHostAddress::~QHostAddress(local_128);
    if (*(int *)local_130.field0_0x0 != -1) {
      if (*(int *)local_130.field0_0x0 != 0) {
        LOCK();
        *(int *)local_130.field0_0x0 = *(int *)local_130.field0_0x0 + -1;
        local_49 = *(int *)local_130.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100572966;
      }
      QArrayData::deallocate((QArrayData *)local_130.field0_0x0,2,8);
    }
  }
LAB_100572966:
  if (*(int *)(lVar6 + 0x100) == 0) {
    lVar6 = CPortForwarding::getTCP();
    FUN_100576230(lVar6 + 0x98,&local_110);
  }
  else {
    lVar6 = CPortForwarding::getUDP();
    FUN_100576230(lVar6 + 0x98,&local_110);
  }
  lVar6 = *(long *)(param_1 + 0x58);
  QAbstractItemModel::beginResetModel();
  CPortForwarding::operator=((CPortForwarding *)(lVar6 + 0x20),local_f8);
  QAbstractItemModel::endResetModel();
  CWidgetMapper::processValueChanged(*(QWidget **)(param_1 + 0x48));
  QVariant::~QVariant(&local_108);
  CPortForwarding::~CPortForwarding(local_f8);
LAB_1005729fc:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

