
void FUN_10038cd50(QObject *param_1,undefined4 param_2,undefined8 param_3)

{
  QObject *this;
  void *pvVar1;
  
  QDialog::QDialog((QDialog *)param_1,param_3,0);
  *(undefined ***)param_1 = &PTR_FUN_10220f740;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10220f918;
  this = operator_new(0x28);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f1950;
  *(QObject **)(this + 0x10) = param_1;
  pvVar1 = operator_new(0xf8);
  *(void **)(this + 0x18) = pvVar1;
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (QObject)0x0;
  *(QObject **)(param_1 + 0x30) = this;
  FUN_10038ba60(this);
  FUN_10038c230(this);
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20) = param_2;
  return;
}

