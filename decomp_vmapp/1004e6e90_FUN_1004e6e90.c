
void FUN_1004e6e90(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  QString local_30;
  undefined4 local_28;
  undefined4 local_24 [2];
  undefined1 local_19;
  
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (param_1 == 0) {
    uVar1 = ___cxa_allocate_exception(0x10);
    local_38 = QString::fromAscii_helper("Incorrect pointer passed",0x18);
    FUN_1004eb830(uVar1,&local_38);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar1,&PTR_vtable_10111cdf0,FUN_1004eb5a0);
  }
  if ((*(byte *)(param_1 + 0x38) & 0x20) != 0) {
    FUN_1004e6a80(param_1);
  }
  QString::operator=(&local_30,(QString *)(param_1 + 0x30));
  local_28 = *(undefined4 *)(param_1 + 0x38);
  local_24[0] = *(undefined4 *)(param_1 + 0x3c);
  FUN_100040e10(param_2,1,
                (QArrayData *)(local_30.field0_0x0 + *(long *)(local_30.field0_0x0 + 0x10)),
                *(int *)(local_30.field0_0x0 + 4) * 2 + 2);
  FUN_100040e10(param_2,3,&local_28,4);
  FUN_100040e10(param_2,3,local_24,4);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}

