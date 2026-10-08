
void FUN_100739650(QSortFilterProxyModel *param_1,QObject *param_2)

{
  undefined *puVar1;
  QObject *this;
  
  QSortFilterProxyModel::QSortFilterProxyModel(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102227c70;
  this = operator_new(0x38);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f60c0;
  *(QSortFilterProxyModel **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  puVar1 = PTR_shared_null_1021e1288;
  *(undefined **)(this + 0x20) = PTR_shared_null_1021e1288;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined **)(this + 0x30) = puVar1;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

