
QString * FUN_1002bf4b0(QString *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  QString local_50;
  QString local_48;
  QString local_40;
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  puVar1 = PTR_shared_null_1021e1288;
  auVar2._8_4_ = (int)PTR_shared_null_1021e1288;
  auVar2._0_8_ = PTR_shared_null_1021e1288;
  auVar2._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  *(undefined1 (*) [16])param_1 = auVar2;
  param_1[2].field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar1;
  if (param_3 != 2) {
    if (param_3 != 1) {
      if (param_3 != 0) {
        return param_1;
      }
      QMetaObject::tr((char *)&local_28,PTR_staticMetaObject_1021e1520,0x1de3f26);
      QString::operator=(param_1,&local_28);
      if (*(int *)local_28.field0_0x0 != -1) {
        if (*(int *)local_28.field0_0x0 != 0) {
          LOCK();
          *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
          local_19 = *(int *)local_28.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_1002bf6d4;
        }
        QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
      }
LAB_1002bf6d4:
      QMetaObject::tr((char *)&local_30,PTR_staticMetaObject_1021e1520,0x1de3f75);
      QString::operator=(param_1 + 2,&local_30);
      if (*(int *)local_30.field0_0x0 == -1) {
        return param_1;
      }
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
      return param_1;
    }
    QMetaObject::tr((char *)&local_38,PTR_staticMetaObject_1021e1520,0x1de3fdf);
    QString::operator=(param_1,&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        local_19 = *(int *)local_38.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1002bf544;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
LAB_1002bf544:
    QMetaObject::tr((char *)&local_40,PTR_staticMetaObject_1021e1520,0x1de3f75);
    QString::operator=(param_1 + 2,&local_40);
    if (*(int *)local_40.field0_0x0 == -1) {
      return param_1;
    }
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    return param_1;
  }
  QMetaObject::tr((char *)&local_48,PTR_staticMetaObject_1021e1520,0x1de401c);
  QString::operator=(param_1,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_19 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002bf608;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_1002bf608:
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e41978);
  QString::operator=(param_1 + 2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_50.field0_0x0 != 0) {
        return param_1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
  return param_1;
}

