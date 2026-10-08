
bool FUN_100acfd30(long param_1,char param_2)

{
  bool bVar1;
  
  bVar1 = param_2 != *(char *)(param_1 + 0xaa5);
  if (bVar1) {
    *(char *)(param_1 + 0xaa5) = param_2;
    FUN_100ae32e0();
  }
  return bVar1;
}

