
void FUN_100099090(undefined4 *param_1,undefined4 param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = param_2;
  lVar1 = *param_3;
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}

