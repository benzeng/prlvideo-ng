
void FUN_1002699f0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  QArrayData *pQVar3;
  long *plVar4;
  
  FUN_100269b40();
  plVar4 = (long *)param_1[1];
  if ((int)plVar4[2] != -1) {
    if ((int)plVar4[2] != 0) {
      LOCK();
      plVar4 = plVar4 + 2;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 != 0) goto LAB_100269a62;
      plVar4 = (long *)param_1[1];
    }
    plVar2 = (long *)*plVar4;
    if (plVar2 != plVar4) {
      do {
        plVar1 = (long *)*plVar2;
        if (plVar2 != (long *)0x0) {
          operator_delete(plVar2);
        }
        plVar2 = plVar1;
      } while (plVar1 != plVar4);
      if (plVar4 == (long *)0x0) goto LAB_100269a62;
    }
    operator_delete(plVar4);
  }
LAB_100269a62:
  pQVar3 = (QArrayData *)*param_1;
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) {
        return;
      }
      pQVar3 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar3,1,8);
  }
  return;
}

