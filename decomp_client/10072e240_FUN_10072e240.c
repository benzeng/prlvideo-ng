
void FUN_10072e240(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x68) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x68) = param_2;
  FUN_1008556e0();
  return;
}

