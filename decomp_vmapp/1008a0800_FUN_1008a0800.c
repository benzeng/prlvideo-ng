
void FUN_1008a0800(long *param_1,long param_2)

{
  if (*param_1 != 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      FUN_10084b4b0();
    }
    else {
      FUN_10084b440();
    }
    *param_1 = 0;
  }
  return;
}

