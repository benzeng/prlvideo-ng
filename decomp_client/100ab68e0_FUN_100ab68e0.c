
void FUN_100ab68e0(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_102239e60;
  pQVar1 = (QArrayData *)param_1[0x35];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ab692e;
      pQVar1 = (QArrayData *)param_1[0x35];
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
LAB_100ab692e:
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

