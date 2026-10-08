
undefined8 FUN_100161b90(long param_1)

{
  undefined8 uVar1;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  QString::toUtf8();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  uVar1 = _PrlSrv_FsGetDirEntries(uVar1,local_28 + *(long *)(local_28 + 0x10));
  local_30 = (QArrayData *)PTR_shared_null_1021e1288;
  uVar1 = FUN_10015c580(param_1,uVar1,0x808,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100161c36;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100161c36:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return uVar1;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_28,1,8);
  }
  return uVar1;
}

