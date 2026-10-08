
void FUN_1004dcca0(long *param_1)

{
  long lVar1;
  QListWidgetItem *pQVar2;
  
  lVar1 = FUN_1004dae30();
  if (lVar1 != 0) {
    pQVar2 = (QListWidgetItem *)(**(code **)(*param_1 + 0x228))(param_1);
    QListWidget::setCurrentItem(pQVar2);
    return;
  }
  return;
}

