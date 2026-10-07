
void FUN_10046ddb0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100bc17f8;
  pQVar4 = (QArrayData *)param_1[9];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_10046ddfc;
      pQVar4 = (QArrayData *)param_1[9];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_10046ddfc:
  QThread::~QThread((QThread *)(param_1 + 4));
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
  FUN_100473020(param_1);
  return;
}

