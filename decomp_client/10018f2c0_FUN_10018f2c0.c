
QString * FUN_10018f2c0(QString *param_1,long param_2,int param_3)

{
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (param_3 == 0xb) {
    FUN_10010b7b0(&local_30,1,*(undefined8 *)(param_2 + 0x80));
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
  }
  else if (param_3 == 10) {
    FUN_10010b7b0(&local_28,0,*(undefined8 *)(param_2 + 0x80));
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
  }
  else {
    FUN_100109d60(&local_38,*(undefined8 *)(param_2 + 0x80),0);
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

