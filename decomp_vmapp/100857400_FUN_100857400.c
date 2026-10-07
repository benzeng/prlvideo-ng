
void FUN_100857400(long param_1)

{
  if (param_1 != 0) {
    FUN_10084b4b0(param_1);
    FUN_10084b4b0(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_10081e1a0(param_1);
      return;
    }
  }
  return;
}

