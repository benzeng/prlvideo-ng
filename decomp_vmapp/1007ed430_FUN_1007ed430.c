
void FUN_1007ed430(long param_1)

{
  if (*(int *)(param_1 + 0x48) == 0x2120) {
    **(undefined4 **)(*(long *)(param_1 + 0x50) + 8) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0x2121;
    *(undefined4 *)(param_1 + 0x60) = 4;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  FUN_1007fd930(param_1,0x16);
  return;
}

