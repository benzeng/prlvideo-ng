
undefined8 FUN_1006b0780(undefined8 param_1,long param_2)

{
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1df0cc4);
  FUN_10018d830(&local_30,*(undefined8 *)(param_2 + 0x20));
  QString::arg(param_1,&local_28,&local_30,0,0x20);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b0805;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1006b0805:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}

