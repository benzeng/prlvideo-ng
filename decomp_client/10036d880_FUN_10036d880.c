
undefined1 FUN_10036d880(QSize *param_1,long param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  int extraout_EDX;
  
  if (*(short *)(param_2 + 0x10) == 0x11) {
    lVar6 = *(long *)((long)param_1[8] + 0x18);
    if ((((lVar6 == 0) || (*(int *)(lVar6 + 4) == 0)) || (*(long *)((long)param_1[8] + 0x20) == 0))
       || (cVar1 = FUN_10018ffc0(), cVar1 == '\0')) {
      WidgetUtils::setWindowResizeEnabled((QWidget *)param_1,true);
      lVar6 = *(long *)((long)param_1[8] + 0x28);
      uVar3 = 0;
      if (((lVar6 != 0) && (*(int *)(lVar6 + 4) != 0)) &&
         ((uVar3 = 0, *(long *)((long)param_1[8] + 0x30) != 0 &&
          (lVar6 = FUN_1003797e0(), lVar6 != 0)))) {
        lVar6 = *(long *)((long)param_1[8] + 0x28);
        uVar7 = 0;
        if ((lVar6 != 0) && (uVar7 = 0, *(int *)(lVar6 + 4) != 0)) {
          lVar6 = *(long *)((long)param_1[8] + 0x30);
          uVar7 = 0;
          if (lVar6 != 0) {
            uVar7 = FUN_1003797e0(lVar6);
          }
        }
        uVar3 = FUN_100325aa0(uVar7);
      }
      iVar4 = FUN_10037a280(uVar3);
      iVar5 = QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::setMinimumSize((int)param_1,iVar4 + iVar5 + extraout_EDX);
    }
    else {
      QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::contentsMargins();
      QWidget::resize(param_1);
      WidgetUtils::setWindowResizeEnabled((QWidget *)param_1,false);
    }
    uVar2 = QMainWindow::event((QEvent *)param_1);
    if ((*(byte *)(param_2 + 0x12) & 2) == 0) {
      FUN_10036d2f0(param_1);
    }
  }
  else {
    uVar2 = QMainWindow::event((QEvent *)param_1);
  }
  return uVar2;
}

