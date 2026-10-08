
void FUN_100376bb0(QObject *param_1,QObject *param_2,QObject *param_3)

{
  undefined8 uVar1;
  CMacFullScreenDelegate *this;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10220e790;
  *(QObject **)(param_1 + 0x10) = param_2;
  uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(QObject **)(param_1 + 0x20) = param_3;
  param_1[0x48] = (QObject)0x0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined **)(param_1 + 0x50) = PTR_shared_null_1021e1288;
  this = operator_new(0x18);
  CMacFullScreenDelegate::CMacFullScreenDelegate(this,(QWidget *)param_2,param_1);
  *(CMacFullScreenDelegate **)(param_1 + 0x58) = this;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x66] = (QObject)0x0;
  return;
}

