
void FUN_1008cd440(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      FUN_1008cdb20();
    }
    if (param_1[1] != 0) {
      FUN_100885590(param_1[1],FUN_1008cdb20);
    }
    FUN_10081e1a0(param_1);
    return;
  }
  return;
}

