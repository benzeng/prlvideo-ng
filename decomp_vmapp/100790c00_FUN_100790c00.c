
void FUN_100790c00(int *param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = -1;
  UNLOCK();
  if (iVar1 != -1) {
    _close(iVar1);
    return;
  }
  return;
}

