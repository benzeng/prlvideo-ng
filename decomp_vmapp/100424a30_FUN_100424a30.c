
void FUN_100424a30(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if ((*(byte *)(param_1 + 0x6f) & 1) == 0) {
    FUN_100424ff0();
    return;
  }
  FUN_100424f10();
  return;
}

