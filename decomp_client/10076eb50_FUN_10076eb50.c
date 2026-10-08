
void FUN_10076eb50(QObject *param_1,undefined4 param_2,undefined4 param_3)

{
  QObject *this;
  
  CContentWindow::CContentWindow((CContentWindow *)param_1,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102229dc0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102229f78;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102229fc8;
  this = operator_new(0x30);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_metaObject_102274ed0;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x48) = this;
  *(undefined4 *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x1c) = param_3;
  FUN_10076e840(this);
  return;
}

