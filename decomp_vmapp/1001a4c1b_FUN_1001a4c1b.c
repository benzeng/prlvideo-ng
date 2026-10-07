
double FUN_1001a4c1b(void)

{
  ulong uVar1;
  
  if (DAT_1011b7e88 == 0.0) {
    uVar1 = FUN_1001a4bd7();
    DAT_1011b7e88 = (double)(uVar1 ^ DAT_100b35d20);
  }
  return DAT_1011b7e88;
}

