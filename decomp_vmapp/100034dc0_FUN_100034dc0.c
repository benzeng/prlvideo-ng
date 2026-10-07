
bool FUN_100034dc0(long param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + 0xa0) == param_2;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  return bVar1;
}

