
void FUN_100bdfa00(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_100c66e70(*(undefined8 *)(param_1 + 0x30));
    FUN_100c66030(*(undefined8 *)(param_1 + 0x38));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_100bf3910();
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_100bf3910();
  }
  FUN_100bf3910(param_1);
  return;
}

