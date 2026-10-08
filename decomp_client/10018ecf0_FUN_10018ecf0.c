
bool FUN_10018ecf0(long param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 100) == 1) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x48) != 0;
  }
  return bVar1;
}

