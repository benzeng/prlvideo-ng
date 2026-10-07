
bool FUN_1008648e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10085af70();
  }
  lVar1 = FUN_10085b820(param_2);
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 != 0;
}

