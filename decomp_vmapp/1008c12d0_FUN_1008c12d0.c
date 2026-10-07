
void FUN_1008c12d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}

