
void FUN_1001f6f07(long param_1)

{
  if ((*(uint *)(param_1 + 0x30) & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 1;
  }
  if ((*(uint *)(param_1 + 0x30) >> 1 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 2;
  }
  if ((*(uint *)(param_1 + 0x30) >> 2 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 4;
  }
  if ((*(uint *)(param_1 + 0x30) >> 3 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 8;
  }
  if ((*(uint *)(param_1 + 0x30) >> 4 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 0x10;
  }
  if ((*(uint *)(param_1 + 0x30) >> 5 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 0x20;
  }
  if ((*(uint *)(param_1 + 0x30) >> 6 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 0x40;
  }
  if ((*(uint *)(param_1 + 0x30) >> 7 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 0x80;
  }
  if ((*(uint *)(param_1 + 0x30) >> 8 & 1) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) ^ 0x100;
  }
  return;
}

