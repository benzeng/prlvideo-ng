
void FUN_1008242f0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102208e50;
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100824338;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100824338:
  pQVar1 = (QArrayData *)param_1[10];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100824368;
      pQVar1 = (QArrayData *)param_1[10];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100824368:
  FUN_100824650(param_1);
  return;
}

