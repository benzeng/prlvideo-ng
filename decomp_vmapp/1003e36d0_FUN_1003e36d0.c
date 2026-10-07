
undefined8 FUN_1003e36d0(long *param_1)

{
  QString *this;
  int iVar1;
  QString local_30;
  undefined1 local_23;
  
  iVar1 = *(int *)((long)param_1 + 0xc4);
  if ((iVar1 != 2) && (iVar1 != 0x3c)) {
    return 0;
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[4];
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_23 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
    iVar1 = *(int *)((long)param_1 + 0xc4);
  }
  (**(code **)(*param_1 + 0x268))(param_1,0x23a00,param_1[0xc]);
  (**(code **)(*param_1 + 0xa0))(param_1);
  this = (QString *)___cxa_allocate_exception(0x10);
  this->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::operator=(this,&local_30);
  *(int *)&this[1].field0_0x0 = iVar1;
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(this,&PTR_vtable_101115c60,FUN_1003e3810);
}

