
void FUN_10018c7a0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 100) == param_2) {
    return;
  }
  *(int *)(param_1 + 100) = param_2;
  FUN_100805240();
  return;
}

