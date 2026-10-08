
void FUN_100c32600(long param_1)

{
  if (param_1 != 0) {
    FUN_100c266b0(param_1);
    FUN_100c266b0(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
      FUN_100bf3910(param_1);
      return;
    }
  }
  return;
}

