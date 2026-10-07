
QString * FUN_1006e60a0(QString *param_1)

{
  QArrayData *local_28;
  undefined1 local_1b;
  
  FUN_1006dc760(param_1,0,0,0);
  QString::fromUtf8_helper((char *)&local_28,0xae950c);
  QString::append(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1b = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

