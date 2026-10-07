
long FUN_1003a23f0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x90) == 0) {
    FUN_1003a2100(param_1,param_1 + 0x90);
  }
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0xa8);
  }
  return lVar1;
}

