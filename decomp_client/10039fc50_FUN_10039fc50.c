
void FUN_10039fc50(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_1004e6b70();
  }
  lVar5 = FUN_10039faa0(param_1,param_2);
  if (lVar5 != 0) {
    iVar2 = QStackedWidget::currentIndex();
    uVar3 = QStackedWidget::indexOf(*(QWidget **)(param_1 + 0x38));
    iVar4 = QStackedWidget::count();
    if (iVar2 == iVar4 + -1) {
      FUN_1003a1d00(param_1,uVar3);
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    QStackedWidget::count();
    QStackedWidget::setCurrentIndex((int)uVar1);
    (**(code **)(**(long **)(param_1 + 0x58) + 0x68))(*(long **)(param_1 + 0x58),0);
    FUN_1003a1b20(param_1,lVar5);
    return;
  }
  return;
}

