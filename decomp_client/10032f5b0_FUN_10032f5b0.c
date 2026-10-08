
void FUN_10032f5b0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  FUN_100327cd0();
  *param_1 = &PTR_FUN_10220c000;
  param_1[9] = 0;
  pvVar1 = operator_new(0x38);
  uVar2 = 0;
  if ((param_1[2] != 0) && (uVar2 = 0, *(int *)(param_1[2] + 4) != 0)) {
    uVar2 = param_1[3];
  }
  FUN_100a4dc20(pvVar1,uVar2);
  param_1[9] = pvVar1;
  return;
}

