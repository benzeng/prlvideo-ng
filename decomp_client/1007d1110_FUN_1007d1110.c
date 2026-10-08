
void FUN_1007d1110(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)QString::fromAscii_helper("window actions",0xe);
  FUN_1007d29c0();
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}

