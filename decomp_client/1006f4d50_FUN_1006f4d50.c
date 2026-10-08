
void FUN_1006f4d50(long param_1,int param_2)

{
  if (*(int *)(*(long *)(param_1 + 0x68) + 0x28) == param_2) {
    return;
  }
  *(int *)(*(long *)(param_1 + 0x68) + 0x28) = param_2;
  FUN_1006f3a90();
  return;
}

