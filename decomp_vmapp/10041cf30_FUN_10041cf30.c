
undefined8 FUN_10041cf30(undefined8 param_1)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  QByteArray::QByteArray((QByteArray *)&local_28,"E0",-1);
  FUN_100419170(param_1,(QByteArray *)&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return 1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return 1;
}

