
void FUN_10052f560(QObject *param_1)

{
  long lVar1;
  QAbstractItemDelegate *pQVar2;
  QWidget *pQVar3;
  int iVar4;
  QStandardItemModel *this;
  QStyledItemDelegate *this_00;
  int iVar5;
  QFont local_40 [16];
  undefined8 local_30;
  
  FUN_100532940(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  this = operator_new(0x10);
  QStandardItemModel::QStandardItemModel(this,param_1);
  (**(code **)(**(long **)(*(long *)(param_1 + 0x18) + 0x20) + 0x1c0))
            (*(long **)(*(long *)(param_1 + 0x18) + 0x20),this);
  lVar1 = *(long *)(param_1 + 0x18);
  pQVar2 = *(QAbstractItemDelegate **)(lVar1 + 0x20);
  this_00 = operator_new(0x10);
  QStyledItemDelegate::QStyledItemDelegate(this_00,*(QObject **)(lVar1 + 0x20));
  *(undefined **)this_00 = &DAT_102274140;
  QAbstractItemView::setItemDelegate(pQVar2);
  QAbstractItemView::setTextElideMode(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),2);
  local_30 = 0x2000000020;
  QAbstractItemView::setIconSize(*(QSize **)(*(long *)(param_1 + 0x18) + 0x20));
  QFont::QFont(local_40,(QFont *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x28) +
                                 0x38));
  QFont::setPointSizeF(DAT_100e1efd8);
  QWidget::setFont(*(QFont **)(*(long *)(param_1 + 0x18) + 0x20));
  iVar5 = 0;
  while( true ) {
    iVar4 = QStackedWidget::count();
    if (iVar4 <= iVar5) break;
    pQVar3 = *(QWidget **)(*(long *)(param_1 + 0x18) + 0x28);
    QStackedWidget::widget((int)pQVar3);
    QStackedWidget::removeWidget(pQVar3);
    iVar5 = iVar5 + 1;
  }
  QWidget::setFixedHeight((int)*(undefined8 *)(param_1 + 0x10));
  QFont::~QFont(local_40);
  return;
}

