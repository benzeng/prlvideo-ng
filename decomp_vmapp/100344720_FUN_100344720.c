
void FUN_100344720(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x2750) != param_2) {
    *(long *)(param_1 + 0x2750) = param_2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x20;
  }
  return;
}

