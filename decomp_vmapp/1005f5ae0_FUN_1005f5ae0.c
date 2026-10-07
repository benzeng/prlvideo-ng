
void FUN_1005f5ae0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  QSemaphore::QSemaphore((QSemaphore *)(param_1 + 5),1);
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  uVar2 = (**(code **)(*(long *)*param_1 + 0x328))();
  uVar1 = (**(code **)(*(long *)*param_1 + 0x300))();
  param_1[9] = uVar2 / uVar1;
  param_1[10] = 0;
  FUN_1006a8e60(param_1 + 0xb);
  return;
}

