
void FUN_10068d0e0(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  QTextStream QVar1;
  QTextStream *pQVar2;
  QString local_40;
  undefined1 local_32;
  
  pQVar2 = (QTextStream *)*param_2;
  QVar1 = pQVar2[0x20];
  pQVar2[0x20] = (QTextStream)0x0;
  QString::fromUtf8_helper((char *)&local_40,0x1e0dfd9);
  QTextStream::operator<<(pQVar2,&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10068d15a;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10068d15a:
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(*param_3 + 0x10) + *param_3);
  pQVar2 = (QTextStream *)*param_2;
  if (pQVar2[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar2,' ');
    pQVar2 = (QTextStream *)*param_2;
  }
  QTextStream::operator<<(pQVar2,',');
  if (((QTextStream *)*param_2)[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<((QTextStream *)*param_2,' ');
  }
  QDebug::putString((QChar *)param_2,*(long *)(param_3[1] + 0x10) + param_3[1]);
  pQVar2 = (QTextStream *)*param_2;
  if (pQVar2[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar2,' ');
    pQVar2 = (QTextStream *)*param_2;
  }
  QTextStream::operator<<(pQVar2,')');
  pQVar2 = (QTextStream *)*param_2;
  if (pQVar2[0x20] != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar2,' ');
    pQVar2 = (QTextStream *)*param_2;
  }
  pQVar2[0x20] = QVar1;
  if (QVar1 != (QTextStream)0x0) {
    QTextStream::operator<<(pQVar2,' ');
    pQVar2 = (QTextStream *)*param_2;
  }
  *param_1 = pQVar2;
  *(int *)(pQVar2 + 0x18) = *(int *)(pQVar2 + 0x18) + 1;
  return;
}

