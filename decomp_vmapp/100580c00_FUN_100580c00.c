
undefined4
FUN_100580c00(long *param_1,QString *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  QString local_30;
  long *local_28;
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_48 = param_3;
  local_40 = param_4;
  QString::operator=(&local_30,param_2);
  local_38 = param_5;
  local_28 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xb0))(param_1,&local_48);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return uVar1;
}

