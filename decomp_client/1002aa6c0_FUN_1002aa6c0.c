
void FUN_1002aa6c0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  param_1[-2] = &PTR_FUN_102272a88;
  *param_1 = &PTR_FUN_102272ab8;
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1002aa717;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1002aa717:
  FUN_1002a9d80(param_1 + -2);
  return;
}

