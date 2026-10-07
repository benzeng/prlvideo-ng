
void FUN_10035cc90(long param_1,undefined8 param_2,long param_3)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
  *(long *)(*(long *)(param_3 + 8) + 0x10) = param_1;
  *(long *)(param_3 + 8) = param_1;
  return;
}

