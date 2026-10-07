
void FUN_100344380(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x638) != param_2) {
    *(long *)(param_1 + 0x638) = param_2;
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 4;
  }
  return;
}

