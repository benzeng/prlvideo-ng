
void FUN_1003806e0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)*param_1;
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)*param_1;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

