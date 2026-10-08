
void FUN_100ace050(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = DAT_102313b40;
  if (*(int *)DAT_102313b40 != -1) {
    if (*(int *)DAT_102313b40 != 0) {
      LOCK();
      *(int *)DAT_102313b40 = *(int *)DAT_102313b40 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100ace08c;
    }
    QArrayData::deallocate(DAT_102313b40,2,8);
  }
LAB_100ace08c:
  pQVar1 = DAT_102313b30;
  if (*(int *)DAT_102313b30 != -1) {
    if (*(int *)DAT_102313b30 != 0) {
      LOCK();
      *(int *)DAT_102313b30 = *(int *)DAT_102313b30 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(DAT_102313b30,2,8);
  }
  return;
}

