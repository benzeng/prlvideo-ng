
void FUN_1007b9ec0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  QMutex::lock();
  lVar2 = *param_2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(long **)(param_1 + 0xe8);
  *(long *)(param_1 + 0xe8) = lVar2;
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  QMutex::unlock();
  return;
}

