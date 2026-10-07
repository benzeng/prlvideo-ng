
bool FUN_1004c6150(int *param_1,int param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (param_2 == iVar1) {
    *param_1 = param_2 + -1;
    iVar1 = param_2;
  }
  UNLOCK();
  return iVar1 == param_2;
}

