
void FUN_100538090(long param_1)

{
  long lVar1;
  
  lVar1 = QTreeWidget::currentItem();
  if (lVar1 != 0) {
    QTreeWidget::editItem(*(QTreeWidgetItem **)(*(long *)(param_1 + 0x48) + 0x78),(int)lVar1);
    FUN_1005375f0(param_1);
    return;
  }
  return;
}

