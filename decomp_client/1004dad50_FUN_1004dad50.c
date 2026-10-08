
void FUN_1004dad50(long *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  QWidget *pQVar4;
  QListWidgetItem *pQVar5;
  
  plVar3 = (long *)FUN_1004dc960();
  if (plVar3 != (long *)0x0) {
    pQVar4 = (QWidget *)(**(code **)(*param_1 + 0x220))(param_1);
    QStackedWidget::removeWidget(pQVar4);
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  plVar3 = (long *)FUN_1004dae30(param_1,param_2,param_3);
  if (plVar3 != (long *)0x0) {
    pQVar5 = (QListWidgetItem *)(**(code **)(*param_1 + 0x228))(param_1);
    iVar1 = QListWidget::row(pQVar5);
    iVar2 = (**(code **)(*param_1 + 0x228))(param_1);
    QListWidget::takeItem(iVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3);
    (**(code **)(*param_1 + 0x228))(param_1);
    iVar2 = QListWidget::count();
    if (iVar1 < iVar2) {
      iVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      QListWidget::setCurrentRow(iVar1);
      return;
    }
  }
  return;
}

