
void FUN_1003ecf00(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  QArrayData *pQVar5;
  long lVar6;
  
  plVar2 = (long *)param_1[2];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  pQVar5 = (QArrayData *)param_1[1];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1003ecfac;
      pQVar5 = (QArrayData *)param_1[1];
    }
    lVar6 = (long)*(int *)(pQVar5 + 4) << 3;
    if (lVar6 != 0) {
      pQVar4 = pQVar5 + *(long *)(pQVar5 + 0x10);
      do {
        plVar2 = *(long **)pQVar4;
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
        pQVar4 = pQVar4 + 8;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    QArrayData::deallocate(pQVar5,8,8);
  }
LAB_1003ecfac:
  pQVar5 = (QArrayData *)*param_1;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
      pQVar5 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

