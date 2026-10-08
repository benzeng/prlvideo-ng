
void FUN_100d31290(long param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = (*(int *)(param_1 + 8) * 100) / param_2 - *(int *)(param_1 + 8);
  return;
}

