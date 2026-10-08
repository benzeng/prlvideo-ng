
undefined8 * FUN_10012e180(undefined8 *param_1,int param_2,int param_3)

{
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_2 == 2) {
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,(int)PTR_s_Sound_10226e5d0);
    QString::operator=(&local_28,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012e2e1;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else if (param_2 == 1) {
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Video_Adapter_10226e5f8);
    QString::operator=(&local_28,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012e2e1;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  else {
    if (param_2 != 0) {
      *param_1 = PTR_shared_null_1021e1288;
      goto LAB_10012e39b;
    }
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,(int)PTR_s_Network_10226e5c8);
    QString::operator=(&local_28,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_19 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10012e2e1;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_10012e2e1:
  local_50 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
  QString::arg(&local_48,&local_50,&local_28,0,0x20);
  QString::arg(param_1,&local_48,(long)(param_3 + 1),0,10,0x20);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012e35e;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10012e35e:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10012e39b;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10012e39b:
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return param_1;
}

