
void FUN_100b3bd90(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x10);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return;
      }
      pQVar4 = *(QArrayData **)(param_1 + 0x10);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return;
}

