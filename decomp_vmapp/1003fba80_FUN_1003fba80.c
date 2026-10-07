
void FUN_1003fba80(QString *param_1,QString *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_48 [8];
  QString QStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_21;
  
  register0x00001208 = (int)PTR_shared_null_100ba20d0;
  local_48 = (undefined1  [8])PTR_shared_null_100ba20d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  QString::operator=((QString *)local_48,param_1);
  QString::operator=((QString *)(local_48 + 8),param_2);
  local_38 = param_3;
  local_34 = param_4;
  FUN_1002592b0(FUN_1003fb950,local_48);
  if (*(int *)QStack_40.field0_0x0 != -1) {
    if (*(int *)QStack_40.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_40.field0_0x0 = *(int *)QStack_40.field0_0x0 + -1;
      local_21 = *(int *)QStack_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1003fbb0b;
    }
    QArrayData::deallocate((QArrayData *)QStack_40.field0_0x0,2,8);
  }
LAB_1003fbb0b:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      UNLOCK();
      if (*(int *)local_48 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48,2,8);
  }
  return;
}

