
void FUN_1005fcba0(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  QArrayData *pQVar4;
  
  *param_1 = &PTR_FUN_100bc7d28;
  FUN_10057e7b0(param_1 + 0x11);
  plVar2 = (long *)param_1[0x10];
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
  *param_1 = &PTR_FUN_100bc74a0;
  pQVar4 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1005fcc22;
      pQVar4 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1005fcc22:
  FUN_1005fa1b0(param_1);
  return;
}

