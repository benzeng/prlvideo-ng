
undefined1  [16] FUN_10007e9b0(QWidget *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  QWidget *pQVar4;
  ulong uVar5;
  int extraout_var;
  int extraout_var_00;
  ulong uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  ulong local_40;
  QSize local_38;
  
  if (*(char *)(*(long *)(param_1 + 0x40) + 0x38) == '\0') {
    uVar3 = FUN_10007c850();
    iVar7 = (int)((double)(int)((ulong)uVar3 >> 0x20) +
                 *(double *)PTR__kDefaultTitleBarHeight_1021e19a8);
    local_38.field0_0x0 = (int)uVar3;
    iVar1 = local_38.field0_0x0;
    local_38.field1_0x4 = iVar7;
    QWidget::frameGeometry();
    pQVar4 = (QWidget *)QApplication::desktop();
    QDesktopWidget::availableGeometry(pQVar4);
    local_40 = QWidget::pos();
    if (extraout_var_00 < extraout_var) {
      pQVar4 = (QWidget *)QApplication::desktop();
      iVar2 = QDesktopWidget::screenNumber(pQVar4);
      local_40 = WidgetUtils::calculatePositionToEnsureWidgetVisible
                           (param_1,(QPoint *)&local_40,&local_38,iVar2);
      uVar5 = local_40 >> 0x20;
      uVar6 = ((uVar5 << 0x20) + (long)local_38) - 0x100000000 & 0xffffffff00000000 |
              (ulong)(local_38.field0_0x0 + (int)local_40 + -1);
    }
    else {
      uVar5 = local_40 >> 0x20;
      uVar6 = CONCAT44((int)(local_40 >> 0x20) + -1 + iVar7,iVar1 + (int)local_40 + -1);
    }
  }
  else {
    *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x38) = 0;
    local_40 = *param_2;
    uVar6 = param_2[1];
    uVar5 = local_40 >> 0x20;
  }
  auVar8._0_8_ = local_40 & 0xffffffff | uVar5 << 0x20;
  auVar8._8_8_ = uVar6;
  return auVar8;
}

