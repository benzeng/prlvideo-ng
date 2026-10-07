
void FUN_10085f080(long param_1)

{
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_100857f90();
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_10084b440();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  FUN_10085c900(param_1);
  return;
}

