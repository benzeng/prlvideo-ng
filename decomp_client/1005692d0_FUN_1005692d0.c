
void FUN_1005692d0(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar2 = (long *)QTableView::verticalHeader();
  (**(code **)(*plVar2 + 0x68))(plVar2,0);
  QAbstractItemView::setSelectionBehavior(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),1);
  QAbstractItemView::setSelectionMode(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),1);
  plVar2 = (long *)QTableView::horizontalHeader();
  QHeaderView::setStretchLastSection(SUB81(plVar2,0));
  QHeaderView::setSectionResizeMode(plVar2,0,3);
  QHeaderView::setSectionResizeMode(plVar2,1,1);
  (**(code **)(*plVar2 + 0x68))(plVar2,0);
  FUN_100569900(param_1);
  lVar3 = QWidget::layout();
  if (lVar3 != 0) {
    iVar1 = QWidget::layout();
    QLayout::setSpacing(iVar1);
  }
  uVar4 = ItemViewWrapper::wrapQtView(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38),plVar2,0,0);
  QWidget::layout();
  uVar5 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e12d0);
  QBoxLayout::insertWidget(uVar5,2,uVar4,0,0);
  FUN_10056aa80(param_1);
  return;
}

