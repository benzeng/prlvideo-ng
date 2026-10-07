
void FUN_1004e5d70(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  QArrayData *pQVar5;
  
  *param_1 = &PTR_FUN_100bc3880;
  cVar4 = FUN_1004e3370(param_1[4]);
  if (cVar4 != '\0') {
    FUN_1004e32f0(param_1[4]);
  }
  FUN_1004e3270(param_1[4]);
  plVar2 = (long *)param_1[2];
  LOCK();
  plVar1 = plVar2 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 == 1) {
    (**(code **)(*plVar2 + 0x10))();
  }
  pQVar5 = (QArrayData *)param_1[3];
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) {
        return;
      }
      pQVar5 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
  return;
}

