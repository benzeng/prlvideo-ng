
void FUN_1008e5180(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100be8e90;
  pQVar1 = (QArrayData *)param_1[0x35];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1008e51ce;
      pQVar1 = (QArrayData *)param_1[0x35];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_1008e51ce:
  pQVar1 = (QArrayData *)param_1[0x34];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = (QArrayData *)param_1[0x34];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
  return;
}

