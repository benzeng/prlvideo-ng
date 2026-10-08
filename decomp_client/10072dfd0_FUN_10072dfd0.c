
void FUN_10072dfd0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x20) = param_2;
  FUN_100855400();
  return;
}

