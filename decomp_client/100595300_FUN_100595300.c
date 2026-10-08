
void FUN_100595300(CDataProvider *param_1,undefined8 param_2,QObject *param_3)

{
  QObject *this;
  
  CDataProvider::CDataProvider(param_1,param_3);
  *(undefined ***)param_1 = &PTR_FUN_10221d710;
  this = operator_new(0x20);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f3bd0;
  *(CDataProvider **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = param_2;
  *(QObject **)(param_1 + 0x18) = this;
  return;
}

