
void FUN_100c9c850(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
  return;
}

