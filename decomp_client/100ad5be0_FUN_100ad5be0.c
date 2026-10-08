
bool FUN_100ad5be0(long param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0xaa0) != param_2;
  if (bVar1) {
    *(int *)(param_1 + 0xaa0) = param_2;
    FUN_100ae32c0();
  }
  return bVar1;
}

