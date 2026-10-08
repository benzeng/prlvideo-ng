
void FUN_100ab1c00(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 == 1) && (*(char *)(param_1 + 0xf0) != '\0')) {
    FUN_100ab19c0(param_1,0);
  }
  FUN_100ab0470(param_1);
  return;
}

