
long * FUN_100408be0(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  QArrayData *pQVar4;
  bool bVar5;
  
  plVar2 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar3 = (long *)plVar2[2];
      bVar5 = (long *)*plVar3 != plVar2;
      plVar2 = plVar3;
    } while (bVar5);
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_1000e86c0(param_1[1],param_2);
  pQVar4 = (QArrayData *)param_2[4];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100408c64;
      pQVar4 = (QArrayData *)param_2[4];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100408c64:
  operator_delete(param_2);
  return plVar3;
}

