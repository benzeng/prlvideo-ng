
QString * FUN_1003b83e0(QString *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  QString local_28;
  undefined1 local_1b;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  lVar1 = FUN_1003b7b00(param_2,param_3);
  if (lVar1 != 0) {
    CHwHardDisk::getDeviceId();
    QString::operator=(param_1,&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return param_1;
        }
        local_1b = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return param_1;
}

