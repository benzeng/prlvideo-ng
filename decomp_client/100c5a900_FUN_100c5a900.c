
void FUN_100c5a900(long param_1)

{
  if (param_1 != 0) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_100bf3910();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_100bf3910();
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

