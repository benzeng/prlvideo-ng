
void FUN_1003dc220(CDataProvider *param_1,QObject *param_2)

{
  QObject *this;
  
  CDataProvider::CDataProvider(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022107e0;
  this = operator_new(0x20);
  QObject::QObject(this,(QObject *)param_1);
  *(undefined ***)this = &PTR_FUN_1021f1ec0;
  *(CDataProvider **)(this + 0x10) = param_1;
  *(QObject **)(this + 0x18) = param_2;
  *(QObject **)(param_1 + 0x18) = this;
  return;
}

