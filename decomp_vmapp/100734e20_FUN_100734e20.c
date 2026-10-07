
bool FUN_100734e20(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(long *)(param_1 + 0xd8) != 0) {
    lVar1 = FUN_10072d5c0(param_2,*(long *)(param_1 + 0xd8));
    bVar2 = lVar1 != 0;
  }
  return bVar2;
}

