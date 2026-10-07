
void FUN_100344560(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x860) != param_2) {
    *(int *)(param_1 + 0x860) = param_2;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 0x10;
  }
  return;
}

