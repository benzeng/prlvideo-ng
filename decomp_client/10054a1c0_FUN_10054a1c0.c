
void FUN_10054a1c0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  FUN_10054c050(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10));
  pvVar7 = operator_new(0x28);
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
  lVar2 = *(long *)(lVar1 + 0x38);
  uVar8 = 0;
  if ((lVar2 != 0) && (uVar8 = 0, *(int *)(lVar2 + 4) != 0)) {
    uVar8 = *(undefined8 *)(lVar1 + 0x40);
  }
  FUN_100549680(pvVar7,uVar8,param_1);
  *(void **)(param_1 + 0x28) = pvVar7;
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
  (**(code **)(*plVar3 + 0x1c0))(plVar3,pvVar7);
  plVar3 = *(long **)(*(long *)(param_1 + 0x18) + 8);
  uVar5 = (**(code **)(*plVar3 + 0xa8))(plVar3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10));
  uVar8 = ItemViewWrapper::wrapQtView(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),0,2,2);
  QBoxLayout::insertWidget(*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),uVar5,uVar8,0,0);
  iVar6 = QWidget::minimumSize();
  QWidget::setMinimumSize((int)uVar8,iVar6);
  iVar6 = QWidget::maximumSize();
  QWidget::setMaximumSize((int)uVar8,iVar6);
  QObject::connect(&local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x20),"2clicked()",param_1,
                   "1addNetwork()",0);
  if (local_28 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),"2clicked()",
                     param_1,"1removeNetwork()",0);
LAB_10054a425:
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar8 = QAbstractItemView::selectionModel();
    QObject::connect(&local_38,uVar8,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onVirtualNetworkSelectionChanged(QItemSelection,QItemSelection)",0);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_28);
    QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),"2clicked()",
                     param_1,"1removeNetwork()",0);
    if ((cVar4 == '\0') || (local_30 == 0)) goto LAB_10054a425;
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    uVar8 = QAbstractItemView::selectionModel();
    QObject::connect(&local_38,uVar8,"2selectionChanged(QItemSelection,QItemSelection)",param_1,
                     "1onVirtualNetworkSelectionChanged(QItemSelection,QItemSelection)",0);
    if ((cVar4 != '\0') && (local_38 != 0)) {
      cVar4 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_38);
      QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2modelReset()",param_1,
                       "1onVirtualNetworkModelReset()",0);
      if ((cVar4 != '\0') && (local_40 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10054a483;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x28),"2modelReset()",param_1,
                   "1onVirtualNetworkModelReset()",0);
LAB_10054a483:
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  return;
}

