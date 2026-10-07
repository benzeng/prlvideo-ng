
undefined8 FUN_1006be940(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = *(undefined8 *)(param_1 + 0x30);
  *param_2 = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  param_2[3] = *(undefined8 *)(param_1 + 0x20);
  param_2[2] = uVar1;
  return 0;
}

