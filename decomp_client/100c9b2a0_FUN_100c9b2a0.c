
void FUN_100c9b2a0(long param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 4) & 1) != 0)) {
    if ((*(uint *)(param_1 + 4) & 2) != 0) {
      FUN_100bf3910(*(undefined8 *)(param_1 + 0x10));
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

