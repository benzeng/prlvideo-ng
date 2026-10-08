
void FUN_10008f950(QObject *param_1)

{
  QObject *this;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_102230030;
  this = operator_new(0x48);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021ee0f0;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (QObject)0x0;
  QTimer::QTimer((QTimer *)(this + 0x20),(QObject *)0x0);
  *(undefined8 *)(this + 0x40) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  FUN_10008f220(this);
  return;
}

