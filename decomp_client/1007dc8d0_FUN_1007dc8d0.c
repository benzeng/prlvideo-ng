
void FUN_1007dc8d0(QObject *param_1,undefined4 param_2)

{
  QObject *this;
  
  CContentWindow::CContentWindow((CContentWindow *)param_1,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10222e670;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222e828;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222e878;
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_metaObject_102275100;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x48) = this;
  *(undefined4 *)(this + 0x18) = param_2;
  FUN_1007dc790(this);
  return;
}

