
void FUN_10040e320(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *(uint *)(lVar1 + 0x68) = param_2 + *(int *)(lVar1 + 0x68) & *(uint *)(lVar1 + 0x70);
  return;
}

