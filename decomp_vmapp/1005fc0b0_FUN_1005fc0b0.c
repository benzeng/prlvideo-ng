
void FUN_1005fc0b0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100bc74a0;
  pQVar1 = (QArrayData *)param_1[0xf];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1005fc0f8;
      pQVar1 = (QArrayData *)param_1[0xf];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1005fc0f8:
  FUN_1005fa1b0(param_1);
  operator_delete(param_1);
  return;
}

