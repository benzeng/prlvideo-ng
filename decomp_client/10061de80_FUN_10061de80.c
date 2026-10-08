
void FUN_10061de80(QObject *param_1,undefined8 param_2)

{
  QObject *this;
  void *pvVar1;
  
  QWidget::QWidget((QWidget *)param_1,param_2,0);
  *(undefined ***)param_1 = &PTR_FUN_102221470;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102221620;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f51e0;
  *(QObject **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0xb8);
  *(void **)(this + 0x18) = pvVar1;
  *(QObject **)(param_1 + 0x30) = this;
  FUN_10061ccd0(this);
  FUN_10061cd80(this);
  return;
}

