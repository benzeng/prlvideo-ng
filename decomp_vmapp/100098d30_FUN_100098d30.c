
void FUN_100098d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  QString local_40;
  undefined1 local_32;
  
  puVar1 = param_1 + 10;
  *(undefined4 **)(param_1 + 10) = puVar1;
  *(undefined4 **)(param_1 + 0xc) = puVar1;
  *(undefined8 *)(param_1 + 0xe) = 0;
  FUN_1007d6870(param_1 + 0x11);
  puVar2 = PTR_shared_null_100ba20d0;
  *(undefined **)(param_1 + 0x16) = PTR_shared_null_100ba20d0;
  FUN_1007d6870(param_1 + 0x18);
  *(undefined **)(param_1 + 0x1c) = puVar2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[0x10] = 0;
  param_1[7] = 0x200;
  *(undefined8 *)(param_1 + 8) = 0x200;
  FUN_100098f20(puVar1);
  FUN_1007ea1f0(param_1 + 0x11);
  QByteArray::clear();
  FUN_1007ea1f0(param_1 + 0x18);
  if (((QString *)(param_1 + 0x1c))->field0_0x0 !=
      (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0) {
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar2;
    QString::operator=((QString *)(param_1 + 0x1c),&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_40.field0_0x0 != 0) {
          return;
        }
        local_32 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  return;
}

