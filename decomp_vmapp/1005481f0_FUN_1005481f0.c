
void FUN_1005481f0(long param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x69) != '\0') {
    FUN_100544e10(param_1 + 0x50,0,0);
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_100544d20(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_100544d20(*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  *(undefined1 *)(param_1 + 0x60) = param_2;
  FUN_1005446a0(param_1 + 0x50);
  return;
}

