
bool FUN_100701090(long param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x10);
  }
  *param_2 = lVar1;
  return lVar1 != 0;
}

