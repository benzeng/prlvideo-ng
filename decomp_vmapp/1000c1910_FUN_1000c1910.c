
bool FUN_1000c1910(long param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x14) == 3;
  if (bVar1) {
    FUN_10008ec80(param_1,4);
    FUN_10008f910(param_1,0);
  }
  return bVar1;
}

