
void FUN_100707670(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100bcdd00;
  FUN_1007079c0();
  pQVar4 = (QArrayData *)param_1[0xc];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1007076bd;
      pQVar4 = (QArrayData *)param_1[0xc];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1007076bd:
  QMutex::~QMutex((QMutex *)(param_1 + 0xb));
  plVar2 = (long *)param_1[6];
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

