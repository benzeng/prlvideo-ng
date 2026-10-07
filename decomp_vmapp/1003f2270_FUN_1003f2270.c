
void FUN_1003f2270(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bbf5a0;
  FUN_1003f2330();
  pQVar1 = (QArrayData *)param_1[0x24];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1003f22c3;
      pQVar1 = (QArrayData *)param_1[0x24];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1003f22c3:
  FUN_1003e07d0(param_1);
  return;
}

