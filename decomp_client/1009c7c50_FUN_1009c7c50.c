
bool FUN_1009c7c50(long param_1)

{
  bool bVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    bVar1 = false;
  }
  else if (*(long *)(param_1 + 8) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0x20) != -1;
  }
  return bVar1;
}

