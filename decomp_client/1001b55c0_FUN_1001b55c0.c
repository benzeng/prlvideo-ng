
void FUN_1001b55c0(QTreeWidgetItem *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = QTreeWidget::topLevelItemCount();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      lVar3 = QTreeWidget::topLevelItem((int)param_1);
      if (lVar3 != 0) {
        QTreeWidget::closePersistentEditor(param_1,(int)lVar3);
        QTreeWidget::closePersistentEditor(param_1,(int)lVar3);
      }
      iVar1 = iVar1 + 1;
      iVar2 = QTreeWidget::topLevelItemCount();
    } while (iVar1 < iVar2);
  }
  return;
}

