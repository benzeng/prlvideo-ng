
void FUN_100bae080(long param_1)

{
  if ((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x1c) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((*(long *)(param_1 + 0x20) != 0) && ((*(byte *)(param_1 + 0x34) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(param_1 + 0x34) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    FUN_100bf3910();
  }
  if ((*(long *)(param_1 + 0x38) != 0) && ((*(byte *)(param_1 + 0x4c) & 2) == 0)) {
    FUN_100bf3910();
  }
  if ((*(byte *)(param_1 + 0x4c) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  FUN_100bf3910();
  return;
}

