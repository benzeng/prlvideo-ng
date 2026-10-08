
long * FUN_10073f670(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  QTextStream *pQVar3;
  QString local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar3 = (QTextStream *)*param_2;
  pQVar3[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_60,0x1e144b9);
  QTextStream::operator<<(pQVar3,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f6e5;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_10073f6e5:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(*param_3 + 0x10) + *param_3);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_58,0x1e144c3);
  QTextStream::operator<<(pQVar3,&local_58);
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      local_31 = *(int *)local_58.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f77c;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
LAB_10073f77c:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[1] + 0x10) + param_3[1]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_50,0x1e144cc);
  QTextStream::operator<<(pQVar3,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f814;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_10073f814:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[2] + 0x10) + param_3[2]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e144d6);
  QTextStream::operator<<(pQVar3,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f8ac;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_10073f8ac:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[3] + 0x10) + param_3[3]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e144e9);
  QTextStream::operator<<(pQVar3,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10073f944;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10073f944:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[4] + 0x10) + param_3[4]);
  pQVar3 = (QTextStream *)*param_2;
  if (pQVar3[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar3,' ');
    pQVar3 = (QTextStream *)*param_2;
  }
  pQVar3[0x20] = (QTextStream)0x1;
  QTextStream::operator<<(pQVar3,' ');
  lVar2 = *param_2;
  *param_1 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  return param_1;
}

