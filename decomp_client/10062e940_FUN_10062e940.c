
void FUN_10062e940(CBaseDialog *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  
  CBaseDialog::CBaseDialog(param_1,param_3,param_4,param_5);
  *(undefined ***)param_1 = &PTR_FUN_102222140;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102222330;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102222380;
  pvVar1 = operator_new(0xb8);
  *(void **)(param_1 + 0x60) = pvVar1;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_2;
  param_1[0x78] = (CBaseDialog)0x0;
  FUN_10062ea10(param_1);
  FUN_100632aa0(param_1);
  return;
}

