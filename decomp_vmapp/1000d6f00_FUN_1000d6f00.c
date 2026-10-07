
bool FUN_1000d6f00(long param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x24) == 0x40001) {
    bVar1 = *(uint *)(param_1 + 0x28) < 0x3008e;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

