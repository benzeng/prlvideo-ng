
void FUN_10047e3d0(long *param_1)

{
  long *plVar1;
  long lVar2;
  QArrayData *pQVar3;
  
  pQVar3 = (QArrayData *)param_1[1];
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10047e40e;
      pQVar3 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10047e40e:
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    LOCK();
    plVar1 = param_1 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_1 + 0x10))();
    }
  }
  return;
}

