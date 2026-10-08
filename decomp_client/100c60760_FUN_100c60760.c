
void FUN_100c60760(int *param_1)

{
  if ((param_1 != (int *)0x0) && (0 < (long)*param_1)) {
    ___bzero(*(undefined8 *)(param_1 + 2),(long)*param_1 << 3);
    *param_1 = 0;
  }
  return;
}

