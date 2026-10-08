
bool FUN_100b8efd0(long param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x20) == 3) {
    bVar1 = *(int *)(param_1 + 0x1c) == 7;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

