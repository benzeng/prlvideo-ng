
void FUN_100b0e900(undefined8 *param_1)

{
  QString local_28;
  undefined1 local_19;
  
  *param_1 = &PTR_FUN_10223b980;
  param_1[5] = 0;
  param_1[4] = 0;
  if ((undefined *)param_1[6] != PTR_shared_null_1021e1288) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 6),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        local_19 = *(int *)local_28.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100b0e97d;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
LAB_100b0e97d:
  param_1[7] = 0x200;
  FUN_100b0d470(param_1);
  return;
}

