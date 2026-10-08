
void FUN_100d05e10(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)param_1[0x11];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d05e54;
      pQVar1 = (QArrayData *)param_1[0x11];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d05e54:
  pQVar1 = (QArrayData *)param_1[1];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d05e84;
      pQVar1 = (QArrayData *)param_1[1];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100d05e84:
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

