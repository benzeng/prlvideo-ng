
void FUN_10072a430(CBaseDialog *param_1,QObject *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_38 [2];
  
  CBaseDialog::CBaseDialog(param_1,param_4,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102226fa8;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102227198;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022271e8;
  pvVar1 = operator_new(0x60);
  *(void **)(param_1 + 0x60) = pvVar1;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_2;
  FUN_10072a5a0(param_1);
  QLabel::setText(*(QString **)(*(long *)(param_1 + 0x60) + 0x48));
  QWidget::layout();
  QLayout::contentsMargins();
  (**(code **)(**(long **)(*(long *)(param_1 + 0x60) + 0x48) + 0x70))();
  QWidget::setMinimumWidth((int)param_1);
  QObject::connect(local_38,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x58),"2clicked()",param_1,
                   "1onShowButtonPressed()",0);
  if (local_38[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  return;
}

