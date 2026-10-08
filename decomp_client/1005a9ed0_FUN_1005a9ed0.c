
QString * FUN_1005a9ed0(QString *param_1)

{
  undefined *puVar1;
  long lVar2;
  QString local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar2 == 0) {
    QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fceb0);
    QMetaObject::tr((char *)&local_48,(char *)&PTR_staticMetaObject_10221df20,0x1e0360c);
    QString::operator=(param_1,&local_48);
    if (*(int *)local_48.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    return param_1;
  }
  QMetaObject::tr((char *)&local_38,(char *)&PTR_staticMetaObject_10221df20,0x1e035d0);
  lVar2 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1021fd420);
  if (lVar2 == 0) {
    local_40 = (QArrayData *)puVar1;
  }
  else {
    FUN_10018d830(&local_40,lVar2);
  }
  QString::arg(&local_30,&local_38,&local_40,0,0x20);
  QString::operator=(param_1,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005aa055;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1005aa055:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_21 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1005aa085;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005aa085:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

