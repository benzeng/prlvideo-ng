
void FUN_1007aad90(CBaseDialog *param_1,undefined8 param_2,QObject *param_3)

{
  undefined8 uVar1;
  
  CBaseDialog::CBaseDialog(param_1,param_2,1,0x100);
  *(undefined ***)param_1 = &PTR_FUN_10222d040;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_10222d248;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_10222d298;
  *(undefined8 *)(param_1 + 0x108) = 0;
  uVar1 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar1 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x118) = uVar1;
  *(QObject **)(param_1 + 0x120) = param_3;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  return;
}

