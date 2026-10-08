
void FUN_100456590(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long local_20;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x18);
  uVar2 = FUN_10044e620();
  QObject::connect(&local_20,uVar1,
                   "2currentItemChanged( CPrlFileDevSelectorItem::FileDevSelectorItemType, const QString &, const QString &)"
                   ,uVar2,"1onPreprocessedValueChanged()",0);
  if (local_20 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_20);
  FUN_100459060(param_1);
  return;
}

