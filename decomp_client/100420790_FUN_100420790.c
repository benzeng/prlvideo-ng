
void FUN_100420790(CBaseDialog *param_1,QObject *param_2,QObject *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  CWindowResizeController *pCVar3;
  
  CBaseDialog::CBaseDialog(param_1,param_5,0,0);
  *(undefined ***)param_1 = &PTR_FUN_102210f50;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_102211140;
  *(undefined ***)(param_1 + 0x30) = &PTR_FUN_102211190;
  pvVar1 = operator_new(0xe0);
  *(void **)(param_1 + 0x60) = pvVar1;
  uVar2 = 0;
  if (param_2 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(QObject **)(param_1 + 0x70) = param_2;
  uVar2 = 0;
  if (param_3 != (QObject *)0x0) {
    uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_3);
  }
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(QObject **)(param_1 + 0x80) = param_3;
  *(undefined8 *)(param_1 + 0x88) = param_4;
  param_1[0xa0] = (CBaseDialog)0x0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined **)(param_1 + 0xa8) = PTR_shared_null_1021e12f0;
  *(undefined **)(param_1 + 0xb0) = PTR_shared_null_1021e1288;
  pCVar3 = operator_new(0x88);
  CWindowResizeController::CWindowResizeController(pCVar3,param_1,param_1,8);
  *(CWindowResizeController **)(param_1 + 0xb8) = pCVar3;
  *(undefined8 *)(param_1 + 0xc0) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_100420a20(param_1);
  FUN_1004215a0(param_1);
  FUN_100421800(param_1);
  return;
}

