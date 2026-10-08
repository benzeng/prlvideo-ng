
undefined4 FUN_100db48a0(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  QString local_30;
  undefined1 local_22;
  
  if (*(int *)(param_1[10] + 0x10) != -2) {
    FUN_100df99c0("","AbstractFile",0,
                  "Trying to set handle on non static handle abstraction (ID 0x%x)");
    return 0xffffffff;
  }
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Static handle file",0x12);
  QString::operator=((QString *)(param_1 + 3),&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_22 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100db491a;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100db491a:
  param_1[5] = 0;
  param_1[4] = 0;
  lVar2 = FUN_100db4670(param_1,1);
  if (lVar2 == 0) {
    FUN_100df99c0("","AbstractFile",0,"Can\'t create abstraction at Open(handle)");
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[2] + 0x20))((long *)param_1[2],param_2);
    (**(code **)(*param_1 + 0xd8))(param_1);
  }
  return uVar1;
}

