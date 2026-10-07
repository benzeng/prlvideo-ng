
void FUN_100548290(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_100544d20(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_100544d20(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

