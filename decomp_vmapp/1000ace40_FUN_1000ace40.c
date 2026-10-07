
int FUN_1000ace40(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1164);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x5d8);
    *(int *)(param_1 + 0x1164) = iVar1;
  }
  return (int)(1L << ((byte)iVar1 & 0x3f)) + -1;
}

