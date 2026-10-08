
void FUN_1004cd7f0(QObject *param_1)

{
  char cVar1;
  void *pvVar2;
  QStandardItemModel *this;
  undefined8 uVar3;
  
  FUN_1004b2670();
  *(undefined ***)param_1 = &PTR_FUN_102217a30;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102217c40;
  pvVar2 = operator_new(0xd0);
  *(void **)(param_1 + 0x38) = pvVar2;
  this = operator_new(0x10);
  QStandardItemModel::QStandardItemModel(this,param_1);
  *(QStandardItemModel **)(param_1 + 0x40) = this;
  FUN_1004ce510(*(undefined8 *)(param_1 + 0x38),param_1);
  uVar3 = FUN_10044e660(param_1);
  cVar1 = FUN_1003c0650(uVar3);
  if (cVar1 != '\0') {
    FUN_100418990(*(undefined8 *)(param_1 + 0x40));
  }
  return;
}

