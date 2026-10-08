
void FUN_100418290(CWidgetIniter *param_1,QObject *param_2)

{
  QObject *this;
  
  CWidgetIniter::CWidgetIniter(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_102210ba0;
  this = operator_new(0x20);
  QObject::QObject(this,param_2);
  *(undefined ***)this = &PTR_FUN_1021f21c0;
  *(CWidgetIniter **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(QObject **)(param_1 + 0x10) = this;
  return;
}

