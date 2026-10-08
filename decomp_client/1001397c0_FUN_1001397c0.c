
void FUN_1001397c0(QTreeWidget *param_1,QWidget *param_2)

{
  undefined8 uVar1;
  
  QTreeWidget::QTreeWidget(param_1,param_2);
  *(undefined ***)param_1 = &PTR_metaObject_10226d750;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10226da80;
  QAbstractItemView::setTextElideMode(param_1,2);
  uVar1 = QTreeView::header();
  QAbstractItemView::setTextElideMode(uVar1,2);
  return;
}

