
undefined8 FUN_10009d990(undefined8 param_1)

{
  QArrayData *local_28;
  undefined1 local_1a;
  
  FUN_1006fb960(&local_28);
  QString::left((int)param_1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_1a = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

