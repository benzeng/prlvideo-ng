
bool FUN_1008e2ae0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_1008e2200();
  *(long *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return lVar1 != 0;
}

