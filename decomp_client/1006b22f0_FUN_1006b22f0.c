
void FUN_1006b22f0(QObject *param_1)

{
  char cVar1;
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102225350;
  this = operator_new(0x20);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f5670;
  *(undefined **)(this + 0x18) = PTR_shared_null_1021e15e8;
  *(QObject **)(param_1 + 0x10) = this;
  *(QObject **)(this + 0x10) = param_1;
  cVar1 = FUN_1006b0ee0(this);
  if (cVar1 == '\0') {
    FUN_1006b10b0(this);
  }
  return;
}

