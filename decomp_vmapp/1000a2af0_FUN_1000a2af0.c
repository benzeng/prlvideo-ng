
void FUN_1000a2af0(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = DAT_1011b64d0;
  if (*(int *)DAT_1011b64d0 != -1) {
    if (*(int *)DAT_1011b64d0 != 0) {
      LOCK();
      *(int *)DAT_1011b64d0 = *(int *)DAT_1011b64d0 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000a2b42;
    }
    QArrayData::deallocate(DAT_1011b64d0,2,8);
  }
LAB_1000a2b42:
  pQVar1 = DAT_1011b64c8;
  if (*(int *)DAT_1011b64c8 != -1) {
    if (*(int *)DAT_1011b64c8 != 0) {
      LOCK();
      *(int *)DAT_1011b64c8 = *(int *)DAT_1011b64c8 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1000a2b86;
    }
    QArrayData::deallocate(DAT_1011b64c8,2,8);
  }
LAB_1000a2b86:
  pQVar1 = DAT_1011b64c0;
  if (*(int *)DAT_1011b64c0 != -1) {
    if (*(int *)DAT_1011b64c0 != 0) {
      LOCK();
      *(int *)DAT_1011b64c0 = *(int *)DAT_1011b64c0 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(DAT_1011b64c0,2,8);
  }
  return;
}

