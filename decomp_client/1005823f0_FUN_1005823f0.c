
undefined8 FUN_1005823f0(undefined8 param_1)

{
  QArrayData *local_28;
  
  QLineEdit::text();
  QString::trimmed();
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

