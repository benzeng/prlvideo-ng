
bool FUN_100864930(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10084b440();
  }
  lVar1 = FUN_10084b840(param_2);
  *(long *)(param_1 + 0x18) = lVar1;
  return lVar1 != 0;
}

