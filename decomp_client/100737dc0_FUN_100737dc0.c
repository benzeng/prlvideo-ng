
void FUN_100737dc0(QAbstractListModel *param_1,QObject *param_2)

{
  QObject *this;
  undefined1 auVar1 [16];
  
  QAbstractListModel::QAbstractListModel(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102227aa0;
  this = operator_new(0x30);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f6000;
  *(QAbstractListModel **)(this + 0x10) = param_1;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e15e8;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar1._0_8_ = PTR_shared_null_1021e15d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(this + 0x20) = auVar1;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_100736c90(this);
  return;
}

