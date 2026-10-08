
void FUN_1003e6470(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102273ea8;
  param_1[2] = &PTR_FUN_102273ed8;
  pQVar1 = (QArrayData *)param_1[5];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1003e64c3;
      pQVar1 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1003e64c3:
  FUN_1002a9d80(param_1);
  return;
}

