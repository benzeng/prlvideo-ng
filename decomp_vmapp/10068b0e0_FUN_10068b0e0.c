
void FUN_10068b0e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_2[7] = *(undefined8 *)(param_1 + 0x84);
  param_2[6] = *(undefined8 *)(param_1 + 0x7c);
  param_2[5] = *(undefined8 *)(param_1 + 0x74);
  param_2[4] = *(undefined8 *)(param_1 + 0x6c);
  param_2[3] = *(undefined8 *)(param_1 + 100);
  param_2[2] = *(undefined8 *)(param_1 + 0x5c);
  uVar1 = *(undefined8 *)(param_1 + 0x4c);
  param_2[1] = *(undefined8 *)(param_1 + 0x54);
  *param_2 = uVar1;
  return;
}

