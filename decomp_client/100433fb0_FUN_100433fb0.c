
void FUN_100433fb0(long param_1)

{
  undefined8 uVar1;
  Connection local_38 [8];
  Connection local_30 [8];
  Connection local_28 [8];
  
  QObject::connect(local_28,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x28),"2clicked()",param_1,
                   "1onAddItem()",0);
  QMetaObject::Connection::~Connection(local_28);
  QObject::connect(local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2clicked()",param_1,
                   "1onRemoveItem()",0);
  QMetaObject::Connection::~Connection(local_30);
  uVar1 = QAbstractItemView::selectionModel();
  QObject::connect(local_38,uVar1,"2currentChanged(const QModelIndex&, const QModelIndex&)",param_1,
                   "1onSelectionChanged(const QModelIndex&, const QModelIndex&)",0);
  QMetaObject::Connection::~Connection(local_38);
  return;
}

