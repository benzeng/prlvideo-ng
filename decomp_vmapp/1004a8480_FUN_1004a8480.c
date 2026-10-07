
void FUN_1004a8480(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  pQVar4 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1004a84b9;
      pQVar4 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1004a84b9:
  plVar2 = *(long **)(param_1 + 0x20);
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
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1004a8480();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_1004a8480();
  }
  return;
}

