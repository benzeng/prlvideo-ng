
void FUN_100ca5c10(long param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 1) != 0)) {
    if ((*(uint *)(param_1 + 8) & 2) != 0) {
      FUN_100bf3910(*(undefined8 *)(param_1 + 0x18));
      FUN_100bf3910(*(undefined8 *)(param_1 + 0x20));
    }
    FUN_100bf3910(param_1);
    return;
  }
  return;
}

