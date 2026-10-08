
void FUN_10072e610(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x80) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x80) = param_2;
  FUN_1008558a0();
  return;
}

