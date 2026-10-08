
void FUN_1005a7f30(QObject *param_1,undefined8 param_2,undefined4 param_3)

{
  QObject *this;
  
  CContentWindow::CContentWindow((CContentWindow *)param_1,0,0);
  *(undefined ***)param_1 = &PTR_FUN_10221dcb0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221de68;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10221deb8;
  this = operator_new(0x38);
  QObject::QObject(this,param_1);
  *(undefined **)this = &DAT_102274510;
  *(QObject **)(this + 0x10) = param_1;
  *(QObject **)(param_1 + 0x48) = this;
  *(undefined8 *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x20) = param_3;
  FUN_1005a7e90(this);
  return;
}

