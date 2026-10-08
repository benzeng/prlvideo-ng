
void FUN_100565880(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  QObject *this;
  void *pvVar1;
  
  QWidget::QWidget((QWidget *)param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10221bd70;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221bf20;
  this = operator_new(0x50);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f3390;
  *(QObject **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0x68);
  *(void **)(this + 0x18) = pvVar1;
  QAbstractItemModel::QAbstractItemModel((QAbstractItemModel *)(this + 0x20),(QObject *)0x0);
  *(undefined ***)(this + 0x20) = &PTR_FUN_1021f3210;
  *(undefined **)(this + 0x30) = PTR_shared_null_1021e15d0;
  *(undefined **)(this + 0x38) = PTR_shared_null_1021e15e8;
  *(undefined8 *)(this + 0x48) = param_2;
  *(QObject **)(param_1 + 0x30) = this;
  FUN_100562180(this);
  FUN_100563b10(this);
  return;
}

