
void FUN_10085f030(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100857f90();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10084b4b0();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_10085c8c0(param_1);
  return;
}

