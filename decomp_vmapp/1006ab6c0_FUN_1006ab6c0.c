
undefined4 FUN_1006ab6c0(long param_1)

{
  undefined4 uVar1;
  QString local_28;
  undefined1 local_19;
  
  if (*(long **)(param_1 + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x68) + 0x28))();
  }
  uVar1 = FUN_1006abcb0(param_1);
  if (*(undefined **)(param_1 + 0x70) != PTR_shared_null_100ba20d0) {
    local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x70),&local_28);
    if (*(int *)local_28.field0_0x0 != -1) {
      if (*(int *)local_28.field0_0x0 != 0) {
        LOCK();
        *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_28.field0_0x0 != 0) {
          return uVar1;
        }
        local_19 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
    }
  }
  return uVar1;
}

