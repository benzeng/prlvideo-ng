
void FUN_1000701b0(long param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
    FUN_100850c20();
    return;
  }
  return;
}

