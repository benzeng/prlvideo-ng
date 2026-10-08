
undefined8 FUN_100b0ed90(long param_1)

{
  QString local_20;
  undefined1 local_11;
  
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x28))();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(undefined **)(param_1 + 0x30) != PTR_shared_null_1021e1288) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    QString::operator=((QString *)(param_1 + 0x30),&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        local_11 = *(int *)local_20.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_100b0ee10;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
LAB_100b0ee10:
  *(undefined8 *)(param_1 + 0x38) = 0x200;
  QString::truncate((int)param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 0;
}

