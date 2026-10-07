
void FUN_1004db6b0(long param_1,long param_2)

{
  int iVar1;
  
  FUN_1004e5ea0();
  iVar1 = *(int *)(*(long *)(param_1 + 0x40) + 4);
  *(long *)(param_2 + 0x2c) = (long)iVar1;
  *(ulong *)(param_2 + 0x34) = (ulong)(iVar1 + 0x1ffU & 0xfffffe00);
  return;
}

