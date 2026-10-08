
void FUN_100d06fa0(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = DAT_1023187b0;
  if (*(int *)DAT_1023187b0 != -1) {
    if (*(int *)DAT_1023187b0 != 0) {
      LOCK();
      *(int *)DAT_1023187b0 = *(int *)DAT_1023187b0 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d06ff2;
    }
    QArrayData::deallocate(DAT_1023187b0,2,8);
  }
LAB_100d06ff2:
  pQVar1 = DAT_1023187a0;
  if (*(int *)DAT_1023187a0 != -1) {
    if (*(int *)DAT_1023187a0 != 0) {
      LOCK();
      *(int *)DAT_1023187a0 = *(int *)DAT_1023187a0 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100d07036;
    }
    QArrayData::deallocate(DAT_1023187a0,2,8);
  }
LAB_100d07036:
  pQVar1 = DAT_102318790;
  if (*(int *)DAT_102318790 != -1) {
    if (*(int *)DAT_102318790 != 0) {
      LOCK();
      *(int *)DAT_102318790 = *(int *)DAT_102318790 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(DAT_102318790,2,8);
  }
  return;
}

