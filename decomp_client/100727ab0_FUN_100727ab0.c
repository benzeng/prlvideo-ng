
void FUN_100727ab0(CBaseDialog *param_1,QObject *param_2,undefined4 param_3,undefined8 param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  CBaseDialog::CBaseDialog(param_1,param_4,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102226c10;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102226e00;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102226e50;
  pvVar1 = operator_new(0x58);
  *(void **)(param_1 + 0x60) = pvVar1;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_2;
  *(undefined4 *)(param_1 + 0x78) = param_3;
  FUN_100727b80(param_1);
  FUN_100727f10(param_1);
  return;
}

