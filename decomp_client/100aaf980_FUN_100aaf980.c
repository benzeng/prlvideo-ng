
int FUN_100aaf980(int *param_1)

{
  int iVar1;
  
  if ((*param_1 == 1) && ((param_1[0x1e] & 1U) == 0)) {
    FUN_100aaf610(param_1 + 2);
  }
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + -1;
  UNLOCK();
  return iVar1;
}

