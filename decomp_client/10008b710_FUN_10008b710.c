
void FUN_10008b710(QObject *param_1,undefined8 param_2)

{
  QObject *this;
  undefined8 uVar1;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10222feb0;
  this = operator_new(0x60);
  QObject::QObject(this,(QObject *)0x0);
  *(undefined ***)this = &PTR_FUN_1021edf10;
  uVar1 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___PDVmData_10226aa50,PTR_s_new_102269070);
  *(undefined8 *)(this + 0x18) = uVar1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(QObject **)(param_1 + 0x10) = this;
  *(QObject **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x40) = param_2;
  FUN_100089f20(this);
  return;
}

