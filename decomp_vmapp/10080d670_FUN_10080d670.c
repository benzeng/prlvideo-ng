
void FUN_10080d670(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_10088b320();
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_10088b320();
    FUN_10081e1a0(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(long *)(param_1 + 0xe0) != 0) {
    FUN_1008d7a40();
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    FUN_1008d7a40();
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  return;
}

