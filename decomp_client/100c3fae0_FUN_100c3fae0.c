
bool FUN_100c3fae0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100c36170();
  }
  lVar1 = FUN_100c36a20(param_2);
  *(long *)(param_1 + 8) = lVar1;
  return lVar1 != 0;
}

