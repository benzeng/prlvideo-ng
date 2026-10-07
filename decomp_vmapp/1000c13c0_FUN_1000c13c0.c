
bool FUN_1000c13c0(long param_1)

{
  bool bVar1;
  
  bVar1 = *(uint *)(*(long *)(param_1 + 0x48) + 0x14) < 2;
  if (bVar1) {
    FUN_10008ec80(param_1,2);
    FUN_10008f4d0(param_1);
  }
  return bVar1;
}

