
void FUN_100086450(QObject *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222fdf0;
  this = operator_new(0x40);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021edb50;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  *(undefined8 *)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x18) = param_3;
  *(undefined8 *)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x30) = param_5;
  FUN_100081530(this);
  return;
}

