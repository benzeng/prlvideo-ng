
void FUN_10080eba0(long param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x6000;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x20);
  FUN_10080d670();
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10088ae30();
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_10088ae30();
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  return;
}

