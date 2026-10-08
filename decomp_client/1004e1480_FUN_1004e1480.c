
int FUN_1004e1480(long param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = FUN_1004dd010();
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x28) + 0x28);
  return (iVar2 + 1 + *(int *)(lVar1 + 0x20)) - *(int *)(lVar1 + 0x18);
}

