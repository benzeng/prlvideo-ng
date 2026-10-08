
QString * FUN_1001a0d80(QString *param_1,undefined4 param_2)

{
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  switch(param_2) {
  case 0:
  case 2:
    QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Tools_are_installed_10226e3d8);
    QString::operator=(param_1,&local_30);
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
    break;
  case 1:
    QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Tools_are_not_installe_10226e3d0);
    QString::operator=(param_1,&local_28);
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
    break;
  case 3:
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,
                    (int)PTR_s_Parallels_Tools_are_out_of_date_10226e3e0);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return param_1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return param_1;
}

