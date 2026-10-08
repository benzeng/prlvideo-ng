
void FUN_1007e6d60(void)

{
  QArrayData *pQVar1;
  
  pQVar1 = (QArrayData *)QString::fromLatin1_helper("#B0B0B0",7);
  QColor::setNamedColor((QString *)&DAT_1023123f0);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_1007e6dbe;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1007e6dbe:
  QColor::QColor((QColor *)&DAT_102312400,3);
  return;
}

