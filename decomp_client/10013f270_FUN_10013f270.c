
QString * FUN_10013f270(QString *param_1)

{
  QArrayData *local_28;
  
  QLineEdit::text();
  QDir::fromNativeSeparators(param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

