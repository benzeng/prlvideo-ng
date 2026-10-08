
void FUN_10056fa40(QWidget *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  
  QWidget::QWidget(param_1,param_5,0);
  *(undefined ***)param_1 = &PTR_FUN_10221c210;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10221c3c0;
  pvVar1 = operator_new(0x108);
  *(void **)(param_1 + 0x30) = pvVar1;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(QObject **)(param_1 + 0x40) = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  pvVar1 = operator_new(200);
  FUN_10056f0a0(pvVar1,param_2,param_1);
  *(void **)(param_1 + 0x58) = pvVar1;
  FUN_10056fb40(param_1);
  FUN_1005708e0(param_1);
  return;
}

