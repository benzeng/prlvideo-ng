
void FUN_100db1fa0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_10225c0b0;
  pQVar4 = (QArrayData *)param_1[6];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100db1fe8;
      pQVar4 = (QArrayData *)param_1[6];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100db1fe8:
  plVar2 = (long *)param_1[3];
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
  FUN_100dacfa0(param_1);
  operator_delete(param_1);
  return;
}

