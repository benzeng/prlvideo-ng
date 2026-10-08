
void FUN_100c8b2f0(long param_1)

{
  if (param_1 != 0) {
    if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x10) & 0x10) == 0)) {
      FUN_100bf3910();
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

