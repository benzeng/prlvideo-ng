
void FUN_1007e4650(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  param_1[-2] = &PTR_FUN_102275248;
  *param_1 = &PTR_FUN_102275278;
  FUN_100039a80(param_1 + 4);
  pQVar1 = (QArrayData *)param_1[3];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007e46ad;
      pQVar1 = (QArrayData *)param_1[3];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007e46ad:
  FUN_100286490(param_1 + -2);
  operator_delete(param_1 + -2);
  return;
}

