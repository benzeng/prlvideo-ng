
QString * FUN_100d20b00(QString *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  uint uVar5;
  int iVar6;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  pQVar4 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar4;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    local_29 = *(int *)pQVar4 != 0;
    UNLOCK();
  }
  uVar1 = QDir::separator();
  pQVar4 = param_1->field0_0x0;
  uVar5 = *(uint *)(pQVar4 + 4);
  if ((1 < *(uint *)pQVar4) || ((*(uint *)(pQVar4 + 8) & 0x7fffffff) < uVar5 + 2)) {
    QString::reallocData((uint)param_1,SUB41(uVar5 + 2,0));
    pQVar4 = param_1->field0_0x0;
    uVar5 = *(uint *)(pQVar4 + 4);
  }
  *(uint *)(pQVar4 + 4) = uVar5 + 1;
  *(undefined2 *)(pQVar4 + (long)(int)uVar5 * 2 + *(long *)(pQVar4 + 0x10)) = uVar1;
  *(undefined2 *)(pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 2 + *(long *)(pQVar4 + 0x10)) = 0;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Library",7);
  uVar1 = QDir::separator();
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    local_29 = *(int *)pQVar2 != 0;
    UNLOCK();
  }
  iVar6 = *(int *)(pQVar2 + 4);
  local_40 = pQVar2;
  if ((1 < *(uint *)pQVar2) || ((*(uint *)(pQVar2 + 8) & 0x7fffffff) < iVar6 + 2U)) {
    QString::reallocData((uint)&local_40,SUB41(iVar6 + 2U,0));
    iVar6 = *(int *)(local_40 + 4);
  }
  *(int *)(local_40 + 4) = iVar6 + 1;
  *(undefined2 *)(local_40 + (long)iVar6 * 2 + *(long *)(local_40 + 0x10)) = uVar1;
  *(undefined2 *)(local_40 + (long)*(int *)(local_40 + 4) * 2 + *(long *)(local_40 + 0x10)) = 0;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("VirtualBox",10);
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_40;
  if (1 < *(int *)local_40 + 1U) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + 1;
    local_29 = *(int *)local_40 != 0;
    UNLOCK();
  }
  QString::append(&local_38);
  QString::append(param_1);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d20c82;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d20c82:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_29 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d20cb2;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100d20cb2:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d20ce2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100d20ce2:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100d20d0f;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d20d0f:
  uVar1 = QDir::separator();
  pQVar4 = param_1->field0_0x0;
  uVar5 = *(uint *)(pQVar4 + 4);
  if ((1 < *(uint *)pQVar4) || ((*(uint *)(pQVar4 + 8) & 0x7fffffff) < uVar5 + 2)) {
    QString::reallocData((uint)param_1,SUB41(uVar5 + 2,0));
    pQVar4 = param_1->field0_0x0;
    uVar5 = *(uint *)(pQVar4 + 4);
  }
  *(uint *)(pQVar4 + 4) = uVar5 + 1;
  *(undefined2 *)(pQVar4 + (long)(int)uVar5 * 2 + *(long *)(pQVar4 + 0x10)) = uVar1;
  *(undefined2 *)(pQVar4 + (long)(int)*(uint *)(pQVar4 + 4) * 2 + *(long *)(pQVar4 + 0x10)) = 0;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("VirtualBox.xml",0xe);
  QString::append(param_1);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}

