
void FUN_10055b830(QObject *param_1,undefined8 param_2,undefined8 param_3)

{
  QObject *this;
  void *pvVar1;
  
  QWidget::QWidget((QWidget *)param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10221b8d0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221ba80;
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f3090;
  *(QObject **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0x58);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined8 *)(this + 0x20) = param_2;
  *(undefined **)(this + 0x28) = PTR_shared_null_1021e15e8;
  *(QObject **)(param_1 + 0x30) = this;
  FUN_10055a8c0(this);
  FUN_10055af90(this);
  return;
}

