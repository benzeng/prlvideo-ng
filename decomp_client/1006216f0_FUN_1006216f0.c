
undefined8 * FUN_1006216f0(undefined8 *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  FUN_100626730(&local_38);
  if (*(int *)(local_38 + 4) == 0) {
    if (param_2 == '\0') {
      QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e085d7);
    }
    else {
      QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1e0858d);
    }
    QString::operator=(&local_30,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100621876;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else {
    if (param_2 == '\0') {
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e08672);
    }
    else {
      QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e08609);
    }
    QString::arg(&local_48,&local_50,&local_38,0,0x20);
    QString::operator=(&local_30,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_19 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1006217e4;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_1006217e4:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_19 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100621876;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_100621876:
  QString::fromUtf8_helper((char *)&local_28,0x1e086c3);
  puVar2 = (undefined8 *)
           QString::insert((int)&local_30,(QChar *)0x0,
                           (int)*(undefined8 *)(local_28 + 0x10) + (int)local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006218d7;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1006218d7:
  piVar1 = (int *)*puVar2;
  *param_1 = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_19 = *piVar1 != 0;
    UNLOCK();
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10062191e;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10062191e:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

