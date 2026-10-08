
void FUN_100ae5870(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_10223b2c8;
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ae58b8;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,0x20,8);
  }
LAB_100ae58b8:
  operator_delete(param_1);
  return;
}

