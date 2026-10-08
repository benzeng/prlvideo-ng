
bool FUN_10013ba10(int param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  iVar1 = QTreeWidget::topLevelItemCount();
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    iVar1 = QTreeWidget::topLevelItemCount();
    bVar3 = true;
    if (iVar1 == 1) {
      lVar2 = QTreeWidget::topLevelItem(param_1);
      bVar3 = *(int *)(*(long *)(lVar2 + 0x30) + 0xc) != *(int *)(*(long *)(lVar2 + 0x30) + 8);
    }
  }
  return bVar3;
}

