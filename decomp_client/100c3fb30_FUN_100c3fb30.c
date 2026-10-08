
bool FUN_100c3fb30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100c26640();
  }
  lVar1 = FUN_100c26a40(param_2);
  *(long *)(param_1 + 0x18) = lVar1;
  return lVar1 != 0;
}

