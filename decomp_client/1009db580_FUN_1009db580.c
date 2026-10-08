
undefined8 FUN_1009db580(undefined8 param_1)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  QMetaObject::tr((char *)&local_20,PTR_staticMetaObject_1021e1520,
                  (int)PTR_s_Problem_Report_for__1_10227e300);
  QCoreApplication::applicationName();
  QString::arg(param_1,&local_20,&local_28,0,0x20);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1009db5ff;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1009db5ff:
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

