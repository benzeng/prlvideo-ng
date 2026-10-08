
undefined8 FUN_1006ab630(undefined8 param_1)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QMetaObject::tr((char *)&local_20,PTR_staticMetaObject_1021e1520,0x1dc895e);
  FUN_1001c72e0(&local_28);
  QString::arg(param_1,&local_20,&local_28,0,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006ab6ac;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006ab6ac:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return param_1;
}

