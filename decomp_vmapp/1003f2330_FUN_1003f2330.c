
undefined8 FUN_1003f2330(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  QString local_20;
  undefined1 local_11;
  
  uVar2 = FUN_1003f49c0();
  FUN_1003f59c0(uVar2,param_1);
  cVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x98))();
  if (cVar1 != '\0') {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x28))();
  }
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x18))();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(undefined **)(param_1 + 0x120) != PTR_shared_null_100ba20d0) {
    local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
    QString::operator=((QString *)(param_1 + 0x120),&local_20);
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return 0;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return 0;
}

