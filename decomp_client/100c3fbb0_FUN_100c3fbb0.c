
void FUN_100c3fbb0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100c36c80();
    return;
  }
  return;
}

