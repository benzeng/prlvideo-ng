
undefined8 FUN_1006ab250(undefined8 param_1)

{
  char cVar1;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  QString local_20;
  undefined1 local_11;
  
  FUN_1001c72e0(&local_20);
  cVar1 = FUN_100d80630(1);
  if (cVar1 != '\0') {
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,(int)PTR_s_Lite_102270a50);
    local_28 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
    }
    QString::insert(&local_28,0,0x20);
    QString::append(&local_20);
    if (*(int *)local_28 != -1) {
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        local_11 = *(int *)local_28 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006ab2ff;
      }
      QArrayData::deallocate(local_28,2,8);
    }
LAB_1006ab2ff:
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_11 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006ab32f;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_1006ab32f:
  QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1e0f238);
  QString::arg(param_1,&local_38,&local_20,0,0x20);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_11 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1006ab396;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1006ab396:
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return param_1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return param_1;
}

