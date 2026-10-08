
void FUN_100549680(QAbstractListModel *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  long local_30 [2];
  
  QAbstractListModel::QAbstractListModel(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_1021f2ab0;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  *(undefined **)(param_1 + 0x20) = PTR_shared_null_1021e15e8;
  FUN_100549790(param_1);
  QObject::connect(local_30,param_2,"2networkConfigChanged(CParallelsNetworkConfig)",param_1,
                   "1updateVirtualNetworkList()",0);
  if (local_30[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_30);
  return;
}

