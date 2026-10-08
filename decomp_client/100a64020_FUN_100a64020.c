
void FUN_100a64020(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_100aaf5d0();
    return;
  }
  return;
}

