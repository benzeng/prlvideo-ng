
int FUN_100ab0470(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 1;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if ((param_1 != (long *)0x0) && (iVar3 == 0)) {
    (**(code **)(*param_1 + 0x18))();
  }
  return iVar3;
}

