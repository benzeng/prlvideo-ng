
void FUN_10010a600(long param_1,undefined4 *param_2)

{
  *param_2 = **(undefined4 **)(param_1 + 8);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x10);
  return;
}

