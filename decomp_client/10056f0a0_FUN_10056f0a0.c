
void FUN_10056f0a0(QAbstractTableModel *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  
  QAbstractTableModel::QAbstractTableModel(param_1,param_3);
  *(undefined **)param_1 = &DAT_1021f3730;
  uVar1 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(QObject **)(param_1 + 0x18) = param_2;
  CPortForwarding::CPortForwarding((CPortForwarding *)(param_1 + 0x20));
  return;
}

