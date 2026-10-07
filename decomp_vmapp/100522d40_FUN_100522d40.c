
bool FUN_100522d40(long param_1,long param_2)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
    bVar1 = *(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

