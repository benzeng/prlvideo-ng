
int FUN_1000c1bf0(undefined8 param_1,long param_2)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 1) {
    *(int *)(param_2 + 4) = 0;
    iVar1 = 1;
  }
  UNLOCK();
  return iVar1;
}

