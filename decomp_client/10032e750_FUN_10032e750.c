
void FUN_10032e750(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10220bdf0;
  param_1[9] = &PTR_FUN_10220be80;
  FUN_100a4a070(param_1 + 9);
  pQVar1 = (QArrayData *)param_1[0xb];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10032e7b1;
      pQVar1 = (QArrayData *)param_1[0xb];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10032e7b1:
  FUN_100a4a040(param_1 + 9);
  FUN_100327dc0(param_1);
  return;
}

