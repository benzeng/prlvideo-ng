
bool FUN_100c36bd0(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = FUN_100c26b50(param_2,param_1 + 0x10);
  bVar2 = false;
  if (lVar1 != 0) {
    bVar2 = *(int *)(param_2 + 8) != 0;
  }
  return bVar2;
}

