
void FUN_1000701d0(long param_1)

{
  if (param_1 != 0) {
    if (0 < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    }
    FUN_100850c40();
    return;
  }
  return;
}

