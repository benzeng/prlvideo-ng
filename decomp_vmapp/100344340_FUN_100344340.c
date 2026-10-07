
void FUN_100344340(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x628) != param_2) {
    *(long *)(param_1 + 0x628) = param_2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
  }
  return;
}

