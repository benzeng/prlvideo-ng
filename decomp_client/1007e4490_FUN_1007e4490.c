
void FUN_1007e4490(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102275248;
  param_1[2] = &PTR_FUN_102275278;
  FUN_100039a80(param_1 + 6);
  pQVar1 = (QArrayData *)param_1[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007e44ec;
      pQVar1 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007e44ec:
  FUN_100286490(param_1);
  operator_delete(param_1);
  return;
}

