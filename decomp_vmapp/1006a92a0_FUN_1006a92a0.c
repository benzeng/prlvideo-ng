
void FUN_1006a92a0(undefined8 *param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  QString local_38;
  undefined1 local_29;
  
  FUN_1006ab840();
  *param_1 = &PTR_FUN_100bcd1a0;
  auVar1._8_4_ = (int)PTR_shared_null_100ba20d0;
  auVar1._0_8_ = PTR_shared_null_100ba20d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar1;
  *(undefined1 *)(param_1 + 0x10) = param_2;
  param_1[0xd] = 0;
  FUN_1006abcb0(param_1);
  if (((QString *)(param_1 + 0xe))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0xe),&local_38);
    if (*(int *)local_38.field0_0x0 != -1) {
      if (*(int *)local_38.field0_0x0 != 0) {
        LOCK();
        *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_38.field0_0x0 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    }
  }
  return;
}

