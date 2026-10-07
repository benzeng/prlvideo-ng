
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10042fe30(long param_1)

{
  undefined *puVar1;
  int iVar2;
  QArrayData *local_40;
  QString local_38;
  undefined1 local_29;
  
  QMutex::lock();
  puVar1 = PTR_shared_null_100ba20d0;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  QString::operator=((QString *)(param_1 + 0x42b0),&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10042fea0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10042fea0:
  *(undefined8 *)(param_1 + 0x42d0) = 0;
  *(undefined8 *)(param_1 + 0x42c8) = 0;
  *(undefined8 *)(param_1 + 0x42c0) = 0;
  *(undefined8 *)(param_1 + 0x42b8) = 0;
  FUN_100432ba0(param_1,0);
  QMutex::unlock();
  if ((DAT_1011bbe60 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_1011bbe60), iVar2 != 0)) {
    _DAT_1011bbe58 = puVar1;
    ___cxa_atexit(FUN_10002f530,&DAT_1011bbe58,0x100000000);
    ___cxa_guard_release(&DAT_1011bbe60);
  }
  local_40 = (QArrayData *)puVar1;
  FUN_10042fc70(param_1,&DAT_1011bbe58,&local_40,0,0,0,0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}

