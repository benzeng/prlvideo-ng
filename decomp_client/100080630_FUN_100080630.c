
int FUN_100080630(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x20);
  return *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8);
}

