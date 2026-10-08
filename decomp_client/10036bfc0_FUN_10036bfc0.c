
void FUN_10036bfc0(QSize *param_1,ulong *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  int local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = *param_2;
  local_30 = param_2[1];
  local_48 = param_2[2];
  local_40 = param_2[3];
  iVar5 = *(int *)((long)param_2 + 0x24);
  if ((int)local_30 < (int)local_38) {
LAB_10036c008:
    if ((param_2[4] & 2) == 0) {
      uVar7 = (**(code **)((long)*param_1 + 0x70))(param_1);
      local_38 = 0;
      local_30 = CONCAT44((int)((ulong)uVar7 >> 0x20) + -1,(int)uVar7 + -1);
    }
  }
  else {
    local_38._4_4_ = (int)(local_38 >> 0x20);
    local_30._4_4_ = (int)(local_30 >> 0x20);
    bVar1 = local_30._4_4_ < local_38._4_4_;
    if (bVar1) goto LAB_10036c008;
  }
  if ((int)local_48 <= (int)local_40) {
    if (local_48._4_4_ <= local_40._4_4_) goto LAB_10036c073;
  }
  if ((param_2[4] & 2) == 0) {
    uVar7 = (**(code **)((long)*param_1 + 0x70))(param_1);
    local_48 = 0x1400000000;
    local_40 = CONCAT44((int)((ulong)uVar7 >> 0x20) + 0x13,(int)uVar7 + -1);
  }
LAB_10036c073:
  iVar3 = QApplication::desktop();
  iVar4 = QDesktopWidget::numScreens();
  if (iVar4 <= iVar5) {
    QDesktopWidget::primaryScreen();
  }
  auVar11 = QDesktopWidget::availableGeometry(iVar3);
  iVar9 = (local_30._4_4_ + 1) - local_38._4_4_;
  iVar5 = auVar11._12_4_;
  iVar4 = auVar11._4_4_;
  iVar3 = (iVar5 + 1) - iVar4;
  if (iVar9 <= iVar3) {
    iVar3 = iVar9;
  }
  iVar10 = (local_40._4_4_ + 1) - local_48._4_4_;
  iVar9 = (iVar5 + -0x13) - iVar4;
  if (iVar10 <= iVar9) {
    iVar9 = iVar10;
  }
  local_30._4_4_ = local_38._4_4_ + -1 + iVar3;
  local_40._4_4_ = local_48._4_4_ + -1 + iVar9;
  cVar2 = QRect::intersects((QRect *)&local_38);
  local_50 = auVar11._8_4_;
  iVar9 = auVar11._0_4_;
  iVar3 = local_38._4_4_;
  if (cVar2 == '\0') {
    iVar10 = iVar5;
    if (local_30._4_4_ <= iVar5) {
      iVar10 = local_30._4_4_;
    }
    local_30._4_4_ = local_38._4_4_ - local_30._4_4_;
    iVar3 = (int)local_38;
    iVar8 = iVar3;
    if (iVar3 < iVar9) {
      iVar8 = iVar9;
    }
    iVar3 = (int)local_30 - iVar3;
    local_30._0_4_ = iVar8 + iVar3;
    if (local_50 < (int)local_30) {
      local_30._0_4_ = local_50;
    }
    local_38 = (ulong)(uint)((int)local_30 - iVar3);
    iVar3 = local_30._4_4_ + iVar10;
    local_30._4_4_ = iVar10;
  }
  iVar10 = iVar4;
  if (iVar4 <= iVar3) {
    iVar10 = iVar3;
  }
  local_30 = CONCAT44((local_30._4_4_ - iVar3) + iVar10,(int)local_30);
  local_38 = CONCAT44(iVar10,(int)local_38);
  cVar2 = QRect::intersects((QRect *)&local_48);
  iVar3 = local_48._4_4_;
  if (cVar2 == '\0') {
    if (local_40._4_4_ <= iVar5) {
      iVar5 = local_40._4_4_;
    }
    local_40._4_4_ = local_48._4_4_ - local_40._4_4_;
    iVar3 = (int)local_48;
    iVar10 = iVar3;
    if (iVar3 < iVar9) {
      iVar10 = iVar9;
    }
    iVar3 = (int)local_40 - iVar3;
    local_40._0_4_ = iVar10 + iVar3;
    if (local_50 < (int)local_40) {
      local_40._0_4_ = local_50;
    }
    local_48 = (ulong)(uint)((int)local_40 - iVar3);
    iVar3 = local_40._4_4_ + iVar5;
    local_40._4_4_ = iVar5;
  }
  iVar5 = iVar4 + 0x14;
  if (iVar4 + 0x14 <= iVar3) {
    iVar5 = iVar3;
  }
  local_40._4_4_ = (local_40._4_4_ - iVar3) + iVar5;
  local_48._4_4_ = iVar5;
  if ((param_2[4] & 2) == 0) {
    uVar6 = QWidget::windowState();
    QWidget::setWindowState(param_1,uVar6 & 0xfffffff9);
    QWidget::move((QPoint *)param_1);
    QWidget::resize(param_1);
  }
  else {
    QWidget::setGeometry((QRect *)param_1);
    uVar6 = QWidget::windowState();
    QWidget::setWindowState(param_1,uVar6 | 2);
  }
  return;
}

