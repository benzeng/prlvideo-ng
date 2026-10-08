
void FUN_10075e070(QObject *param_1)

{
  uint uVar1;
  QObject *this;
  
  FUN_100380f70(param_1,0);
  *(undefined ***)param_1 = &PTR_FUN_102228f60;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102229150;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_1022291a0;
  this = operator_new(400);
  QObject::QObject(this,param_1);
  *(undefined ***)this = &PTR_FUN_1021f6520;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(QObject **)(param_1 + 0x68) = this;
  uVar1 = CWindowInterface::customWindowFlags();
  CWindowInterface::setCustomWindowFlags(param_1 + 0x30,uVar1 | 0x80);
  FUN_10075c0f0(*(undefined8 *)(param_1 + 0x68));
  return;
}

