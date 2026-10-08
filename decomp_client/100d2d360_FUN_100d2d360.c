
undefined1 FUN_100d2d360(void)

{
  undefined1 uVar1;
  QArrayData *pQVar2;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("OSType",6);
  uVar1 = FUN_100d2d080();
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return uVar1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return uVar1;
}

