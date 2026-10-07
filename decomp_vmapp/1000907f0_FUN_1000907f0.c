
void FUN_1000907f0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x30));
  }
  pQVar4 = *(QArrayData **)(param_1 + 0x20);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10009083c;
      pQVar4 = *(QArrayData **)(param_1 + 0x20);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10009083c:
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
  return;
}

