
void FUN_100c853b0(long param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 8) & 2) != 0)) {
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

