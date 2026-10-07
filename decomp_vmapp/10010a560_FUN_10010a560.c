
void FUN_10010a560(undefined8 *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_100ba91c0;
  lVar1 = param_4 * 0x50;
  param_1[1] = param_2 + 0x18 + lVar1;
  param_1[2] = *(long *)(*(long *)(*param_3 + 0x10) + 0x20 + (long)(int)param_4 * 8) + param_2;
  param_1[3] = *(undefined8 *)(*(long *)(*param_3 + 0x10) + 0x18);
  *(undefined8 *)(param_2 + 0x60 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x58 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x50 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x48 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x40 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x38 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x30 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x28 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x20 + lVar1) = 0;
  *(undefined8 *)(param_2 + 0x18 + lVar1) = 0;
  return;
}

