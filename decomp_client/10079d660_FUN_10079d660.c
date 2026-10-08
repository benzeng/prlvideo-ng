
void FUN_10079d660(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x180) = param_2[3];
  *(undefined8 *)(param_1 + 0x178) = param_2[2];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x170) = param_2[1];
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  FUN_1008616b0();
  return;
}

