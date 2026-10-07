
void FUN_1004db670(long param_1)

{
  int iVar1;
  long in_R8;
  
  iVar1 = FUN_1004e5f50();
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 4);
    *(long *)(in_R8 + 0x2c) = (long)iVar1;
    *(ulong *)(in_R8 + 0x34) = (ulong)(iVar1 + 0x1ffU & 0xfffffe00);
  }
  return;
}

