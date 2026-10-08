
ulong FUN_1004dd010(long *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  int extraout_var;
  int extraout_var_00;
  uint uVar9;
  QVariant local_38;
  undefined4 local_28;
  int iStack_24;
  int iVar10;
  
  (**(code **)(*param_1 + 0x228))();
  iVar2 = QListWidget::count();
  if (iVar2 < 1) {
    uVar7 = (**(code **)(*param_1 + 0x78))(param_1);
    uVar7 = uVar7 >> 0x20;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x228))(param_1);
    plVar5 = (long *)QListWidget::item(iVar3);
    (**(code **)(*plVar5 + 0x20))(&local_38,plVar5,0xd);
    iVar3 = QVariant::userType();
    if (iVar3 == 0x15) {
      puVar6 = (undefined8 *)QVariant::constData();
      iVar3 = (int)((ulong)*puVar6 >> 0x20);
    }
    else {
      local_28 = 0xffffffff;
      iStack_24 = -1;
      cVar1 = QVariant::convert((int)&local_38,(void *)0x15);
      iVar3 = -1;
      if (cVar1 != '\0') {
        iVar3 = iStack_24;
      }
    }
    QVariant::~QVariant(&local_38);
    (**(code **)(*param_1 + 0x228))(param_1);
    iVar4 = QListView::spacing();
    iVar10 = 0x10;
    if (iVar2 < 0x10) {
      iVar10 = iVar2 + 1;
    }
    uVar9 = iVar10 * (iVar4 + iVar3);
    uVar7 = (ulong)uVar9;
    lVar8 = QWidget::layout();
    if (lVar8 != 0) {
      QWidget::layout();
      QLayout::contentsMargins();
      QWidget::layout();
      QLayout::contentsMargins();
      uVar7 = (ulong)(extraout_var + uVar9 + extraout_var_00);
    }
  }
  return uVar7;
}

