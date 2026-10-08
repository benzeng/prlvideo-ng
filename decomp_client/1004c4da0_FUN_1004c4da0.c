
void FUN_1004c4da0(long param_1)

{
  long *plVar1;
  QString *pQVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  char local_22;
  undefined1 local_21;
  
  lVar8 = FUN_10044e580();
  if (lVar8 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar9 = FUN_10044e580(param_1);
  uVar9 = FUN_1001766b0(uVar9);
  uVar4 = FUN_100615d30(uVar9,1,&local_22);
  if (local_22 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"No license restriction PLRK_VM_CPU_LIMIT.");
    uVar4 = 10000;
  }
  uVar9 = FUN_10044e580(param_1);
  FUN_10015a340(uVar9);
  CHostHardwareInfoBase::getCpu();
  uVar5 = CHwCpu::getNumber();
  uVar9 = FUN_10044e580(param_1);
  FUN_10015a340(uVar9);
  CHostHardwareInfoBase::getCpu();
  iVar6 = CHwCpu::getVtxMode();
  uVar7 = FUN_10011d8c0(uVar5,iVar6 != 0,uVar4);
  if (uVar7 < 2) {
    QWidget::setEnabled(SUB81(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78),0));
  }
  uVar9 = FUN_10044e660(param_1);
  bVar3 = FUN_1003bed60(uVar9);
  plVar1 = *(long **)(*(long *)(param_1 + 0x38) + 0x90);
  (**(code **)(*plVar1 + 0x68))(plVar1,(uint)bVar3);
  local_40 = (QArrayData *)QString::fromAscii_helper(" %1 { margin-left: %2; }",0x18);
  local_48 = (QArrayData *)QString::fromAscii_helper("QCheckBox",9);
  QString::arg(&local_38,&local_40,&local_48,0,0x20);
  iVar6 = WidgetUtils::getCheckBoxTextStartPos();
  QString::arg(&local_30,&local_38,(long)(int)(iVar6 * (bVar3 + 1)),0,10,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c4f35;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004c4f35:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_21 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c4f65;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004c4f65:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c4f95;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1004c4f95:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x58);
  QWidget::styleSheet();
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58;
  if (1 < *(int *)local_58 + 1U) {
    LOCK();
    *(int *)local_58 = *(int *)local_58 + 1;
    local_21 = *(int *)local_58 != 0;
    UNLOCK();
  }
  QString::append(&local_50);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_21 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c500b;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1004c500b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c503b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1004c503b:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x38) + 0x68);
  QWidget::styleSheet();
  local_60.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_68;
  if (1 < *(int *)local_68 + 1U) {
    LOCK();
    *(int *)local_68 = *(int *)local_68 + 1;
    local_21 = *(int *)local_68 != 0;
    UNLOCK();
  }
  QString::append(&local_60);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_21 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c50b1;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1004c50b1:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_21 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004c50e1;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1004c50e1:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

