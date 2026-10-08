
undefined8 * FUN_10055e850(undefined8 *param_1,int param_2)

{
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (param_2 == 2) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1e01967);
    QString::arg(param_1,&local_38,0x2318,0,0x20);
    if (*(int *)local_38 == -1) {
      return param_1;
    }
    local_30 = local_38;
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
  }
  else if (param_2 == 1) {
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1e01901);
    QString::arg(param_1,&local_30,0x2318,0,0x20);
    if (*(int *)local_30 == -1) {
      return param_1;
    }
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
  }
  else {
    if (param_2 != 0) {
      *param_1 = PTR_shared_null_1021e1288;
      return param_1;
    }
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1e01845);
    QString::arg(param_1,&local_28,0x2318,0,0x20);
    if (*(int *)local_28 == -1) {
      return param_1;
    }
    local_30 = local_28;
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
  }
  QArrayData::deallocate(local_30,2,8);
  return param_1;
}

