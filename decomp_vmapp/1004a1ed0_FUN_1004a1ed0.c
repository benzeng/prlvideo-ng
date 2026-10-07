
bool FUN_1004a1ed0(long param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(long *)(param_1 + 8) == 0) {
    bVar1 = *(long *)(param_1 + 0x10) != 0;
  }
  return bVar1;
}

