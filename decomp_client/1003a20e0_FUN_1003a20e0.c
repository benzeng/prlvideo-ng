
void FUN_1003a20e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  QPoint *pQVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = QStackedWidget::currentIndex();
  iVar4 = QStackedWidget::count();
  if (iVar3 != iVar4 + -1) {
    iVar3 = *(int *)(param_2 + 4);
    iVar4 = *(int *)(param_3 + 4);
    iVar5 = iVar3 - iVar4;
    if (iVar5 != 0) {
      if (iVar3 < iVar4) {
        iVar3 = -iVar5;
        if (0 < iVar5) {
          iVar3 = iVar5;
        }
      }
      else {
        lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
        iVar3 = ((1 - iVar3) + iVar4 + *(int *)(lVar1 + 0x20)) - *(int *)(lVar1 + 0x18);
      }
      QLayout::contentsMargins();
      QLayout::setContentsMargins(*(QMargins **)(*(long *)(param_1 + 0x18) + 8));
      if (3 < DAT_10230ffd0) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x28);
        FUN_100df99c0("[CFG_ED]","prl_client_app",4,
                      "onSectionSizeChanged margin top == %d warning pos == %d",iVar3,
                      ((iVar3 + -1) - *(int *)(lVar1 + 0x20)) + *(int *)(lVar1 + 0x18));
      }
      pQVar2 = *(QPoint **)(param_1 + 0x58);
      QWidget::pos();
      QWidget::move(pQVar2);
    }
  }
  return;
}

