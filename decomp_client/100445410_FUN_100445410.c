
void FUN_100445410(CBaseDialog *param_1,undefined8 param_2,QObject *param_3,QObject *param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  long local_38 [2];
  
  CBaseDialog::CBaseDialog(param_1,param_5,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102212930;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102212b20;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102212b70;
  pvVar1 = operator_new(0x30);
  *(void **)(param_1 + 0x60) = pvVar1;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  *(QObject **)(param_1 + 0x78) = param_3;
  uVar2 = 0;
  if (param_4 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_4);
  }
  *(undefined8 *)(param_1 + 0x80) = uVar2;
  *(QObject **)(param_1 + 0x88) = param_4;
  FUN_100445580(param_1);
  QObject::connect(local_38,param_4,"2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",
                   param_1,"1updateOkButton()",0);
  if (local_38[0] != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)local_38);
  return;
}

