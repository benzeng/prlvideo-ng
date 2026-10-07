
void FUN_1005f2a30(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100bc6f20;
  pQVar4 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005f2a78;
      pQVar4 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005f2a78:
  plVar2 = (long *)param_1[0xe];
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
  plVar2 = (long *)param_1[0xd];
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
  FUN_1005f29c0(param_1 + 7,param_1[8]);
  FUN_1005f29c0(param_1 + 4,param_1[5]);
  QMutex::~QMutex((QMutex *)(param_1 + 3));
  FUN_1005b6c60(param_1);
  return;
}

