
bool FUN_1000e06d0(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x21c) == 0) {
    bVar1 = *(int *)(param_1 + 0x218) != 0;
  }
  return bVar1;
}

