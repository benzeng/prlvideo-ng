
void FUN_1008649b0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10085ba80();
    return;
  }
  return;
}

