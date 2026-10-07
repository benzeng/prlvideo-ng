
QByteArray * FUN_100414f50(QByteArray *param_1,int param_2)

{
  QByteArray *pQVar1;
  char *pcVar2;
  QArrayData *local_38;
  
  QByteArray::QByteArray
            (param_1,
             "<?xml version=\"1.0\"?><!DOCTYPE target SYSTEM \"gdb-target.dtd\"><target><architecture>"
             ,-1);
  if (param_2 == 1) {
    QByteArray::append((char *)param_1);
  }
  else if (param_2 == 2) {
    QByteArray::append((char *)param_1);
  }
  else {
    QByteArray::append((char *)param_1);
  }
  pQVar1 = (QByteArray *)QByteArray::append((char *)param_1);
  QString::toUtf8();
  pcVar2 = (char *)QByteArray::append(pQVar1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) goto LAB_100415013;
    }
    QArrayData::deallocate(local_38,1,8);
  }
LAB_100415013:
  QByteArray::append(pcVar2);
  if (param_2 == 1) {
    QByteArray::append((char *)param_1);
  }
  else if (param_2 == 2) {
    QByteArray::append((char *)param_1);
  }
  else {
    QByteArray::append((char *)param_1);
  }
  QByteArray::append((char *)param_1);
  QByteArray::append((char *)param_1);
  QByteArray::append((char *)param_1);
  return param_1;
}

