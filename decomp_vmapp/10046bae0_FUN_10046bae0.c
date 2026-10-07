
void FUN_10046bae0(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = DAT_1011bbf90;
  if (*(int *)DAT_1011bbf90 != -1) {
    if (*(int *)DAT_1011bbf90 != 0) {
      LOCK();
      *(int *)DAT_1011bbf90 = *(int *)DAT_1011bbf90 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10046bb32;
    }
    QArrayData::deallocate(DAT_1011bbf90,2,8);
  }
LAB_10046bb32:
  pQVar1 = DAT_1011bbf88;
  if (*(int *)DAT_1011bbf88 != -1) {
    if (*(int *)DAT_1011bbf88 != 0) {
      LOCK();
      *(int *)DAT_1011bbf88 = *(int *)DAT_1011bbf88 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10046bb76;
    }
    QArrayData::deallocate(DAT_1011bbf88,2,8);
  }
LAB_10046bb76:
  pQVar1 = DAT_1011bbf80;
  if (*(int *)DAT_1011bbf80 != -1) {
    if (*(int *)DAT_1011bbf80 != 0) {
      LOCK();
      *(int *)DAT_1011bbf80 = *(int *)DAT_1011bbf80 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(DAT_1011bbf80,2,8);
  }
  return;
}

