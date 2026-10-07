
void FUN_100464480(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  QArrayData *local_28;
  undefined1 local_1a;
  
  param_1[1] = PTR_shared_null_100ba2180;
  *param_1 = &PTR_FUN_100bc10f0;
  QString::toLatin1();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  iVar1 = _IORegistryEntryFromPath
                    (*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,
                     local_28 + *(long *)(local_28 + 0x10));
  *(int *)(param_1 + 2) = iVar1;
  if (*(int *)local_28 == -1) goto LAB_10046451e;
  if (*(int *)local_28 == 0) {
LAB_10046450c:
    QArrayData::deallocate(local_28,1,8);
  }
  else {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + -1;
    local_1a = *(int *)local_28 != 0;
    UNLOCK();
    if (!(bool)local_1a) goto LAB_10046450c;
  }
  iVar1 = *(int *)(param_1 + 2);
LAB_10046451e:
  if (iVar1 == 0) {
    puVar3 = (undefined8 *)___cxa_allocate_exception(8);
    *puVar3 = PTR_vtable_100ba2308 + 0x10;
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(puVar3,PTR_typeinfo_100ba22c8,PTR__exception_100ba21c0);
  }
  uVar2 = _CFStringGetTypeID();
  uVar2 = FUN_1004645d0(param_1,&cf_BatterySerialNumber,uVar2);
  param_1[3] = uVar2;
  return;
}

