
long FUN_100caa020(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      if ((int)param_2 == 0) {
        return *(long *)(param_1 + 0x10);
      }
      param_2 = (ulong)((int)param_2 - 1);
    }
    lVar1 = FUN_100c60820(*(undefined8 *)(param_1 + 8),param_2);
  }
  return lVar1;
}

