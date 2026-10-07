
void FUN_100857f90(long param_1)

{
  if (param_1 != 0) {
    FUN_10084b440(param_1 + 8);
    FUN_10084b440(param_1 + 0x20);
    FUN_10084b440(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

