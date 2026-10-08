
bool FUN_10015a9e0(long param_1,int param_2)

{
  bool bVar1;
  
  if (*(char *)(param_1 + 0x118) == '\x01') {
    bVar1 = *(int *)(param_1 + 0x11c) == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

