
void FUN_1003fbc40(QString *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_38 [8];
  QString QStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_19;
  
  register0x00001208 = (int)PTR_shared_null_100ba20d0;
  local_38 = (undefined1  [8])PTR_shared_null_100ba20d0;
  register0x0000120c = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  QString::operator=((QString *)(local_38 + 8),param_1);
  local_28 = param_2;
  local_24 = param_3;
  FUN_1002592b0(FUN_1003fb950,local_38);
  if (*(int *)QStack_30.field0_0x0 != -1) {
    if (*(int *)QStack_30.field0_0x0 != 0) {
      LOCK();
      *(int *)QStack_30.field0_0x0 = *(int *)QStack_30.field0_0x0 + -1;
      local_19 = *(int *)QStack_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1003fbcb8;
    }
    QArrayData::deallocate((QArrayData *)QStack_30.field0_0x0,2,8);
  }
LAB_1003fbcb8:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38,2,8);
  }
  return;
}

