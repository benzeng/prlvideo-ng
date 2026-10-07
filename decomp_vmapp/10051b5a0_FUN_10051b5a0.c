
void FUN_10051b5a0(long param_1)

{
  do {
    FUN_100037320(param_1 + 0x28);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_10051b5a0();
    }
    param_1 = *(long *)(param_1 + 0x10);
  } while (param_1 != 0);
  return;
}

