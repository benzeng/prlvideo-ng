
undefined8 FUN_100473050(undefined8 param_1,undefined8 param_2)

{
  QArrayData *local_30;
  undefined1 local_21;
  
  QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1df6a53);
  QString::arg(param_1,&local_30,param_2,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

