
void FUN_1002623b0(long *param_1,long param_2,CVmSerialPort *param_3)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 local_60 [24];
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  *param_1 = (long)&PTR_FUN_101115ae8;
  QThread::QThread((QThread *)(param_1 + 1),(QObject *)0x0);
  *param_1 = (long)&PTR_FUN_100baeec0;
  param_1[1] = (long)&PTR_metaObject_100baef10;
  param_1[3] = param_2;
  CVmSerialPort::CVmSerialPort((CVmSerialPort *)(param_1 + 4),param_3);
  param_1[0x24] = (long)PTR_shared_null_100ba20d0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  iVar1 = FUN_100262770(param_1);
  if (iVar1 == 0) {
    FUN_1008e3970("","LocalDevices",0,"Lock failed");
    puVar3 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  CVmDevice::getSystemName();
  QString::toUtf8();
  iVar1 = _open((char *)(local_40 + *(long *)(local_40 + 0x10)),0x20006);
  *(int *)(param_1 + 0x23) = iVar1;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100262496;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100262496:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1002624c6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002624c6:
  if ((int)param_1[0x23] < 0) {
    piVar2 = ___error();
    FUN_1008e3970("","LocalDevices",0,"Can\'t open serial port. [%u]",*piVar2);
    puVar3 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  iVar1 = _ioctl((int)param_1[0x23],0x2000740d);
  if (iVar1 < 0) {
    piVar2 = ___error();
    FUN_1008e3970("","LocalDevices",0,"Can\'t lock serial port. [%u]",*piVar2);
    puVar3 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  (**(code **)(*(long *)param_1[3] + 0x20))((long *)param_1[3],local_60);
  (**(code **)(*param_1 + 0x28))(param_1,local_60);
  (**(code **)(*param_1 + 0x20))(param_1,local_60);
  (**(code **)(*(long *)param_1[3] + 0x28))((long *)param_1[3],local_60);
  QThread::start((QThread *)(param_1 + 1),6);
  return;
}

