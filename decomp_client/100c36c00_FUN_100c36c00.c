
bool FUN_100c36c00(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = FUN_100c26b50(param_2,param_1 + 0x28);
  bVar2 = false;
  if (lVar1 != 0) {
    bVar2 = *(int *)(param_1 + 0x30) != 0;
  }
  return bVar2;
}

