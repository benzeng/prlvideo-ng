
void FUN_1006d3810(undefined8 param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  undefined1 local_38 [8];
  QString QStack_30;
  undefined1 local_21;
  
  register0x00001208 = (int)PTR_shared_null_100ba20d0;
  local_38 = (undefined1  [8])PTR_shared_null_100ba20d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  lVar1 = FUN_1006d0760();
  if (lVar1 == 0) {
    QString::operator=((QString *)local_38,param_2);
    QString::operator=((QString *)(local_38 + 8),param_3);
    FUN_1006d4090(param_1,local_38);
  }
  else {
    QString::operator=((QString *)(lVar1 + 8),param_3);
  }
  if (*(int *)QStack_30.field0_0x0 != -1) {
    if (*(int *)QStack_30.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_30.field0_0x0 = *(int *)QStack_30.field0_0x0 + -1;
      local_21 = *(int *)QStack_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006d38ac;
    }
    QArrayData::deallocate((QArrayData *)QStack_30.field0_0x0,2,8);
  }
LAB_1006d38ac:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38,2,8);
  }
  return;
}

