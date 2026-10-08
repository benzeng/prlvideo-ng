
QString * FUN_100b857e0(QString *param_1,undefined8 param_2)

{
  int iVar1;
  QString local_28;
  undefined1 local_20 [7];
  undefined1 local_19;
  
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  iVar1 = FUN_100b8df90(param_2,local_20);
  if (iVar1 != 0) {
    FUN_100b8f4b0(&local_28,local_20);
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
  return param_1;
}

