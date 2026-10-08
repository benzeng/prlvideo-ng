
void FUN_100241d30(long param_1,int param_2)

{
  if (param_2 == 0x18a88) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    if (param_2 == 0x18a8f) {
      *(undefined4 *)(param_1 + 0x2c) = 1;
      return;
    }
    if (param_2 == 0x18a90) {
      *(undefined4 *)(param_1 + 0x2c) = 2;
      return;
    }
  }
  return;
}

