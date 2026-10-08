
bool FUN_100c3fa90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100c36280();
  }
  lVar1 = FUN_100c37330(param_2,*(undefined8 *)(param_1 + 8));
  *(long *)(param_1 + 0x10) = lVar1;
  return lVar1 != 0;
}

