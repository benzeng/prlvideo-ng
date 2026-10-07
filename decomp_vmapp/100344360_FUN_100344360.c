
void FUN_100344360(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x630) != param_2) {
    *(long *)(param_1 + 0x630) = param_2;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
  }
  return;
}

