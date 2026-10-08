
undefined8 * FUN_10070d4e0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  QArrayData *local_30;
  QString local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  if ((DAT_102312398 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102312398), iVar2 != 0)) {
    DAT_102312390 = (int *)PTR_shared_null_1021e1288;
    ___cxa_atexit(FUN_100054e40,&DAT_102312390,0x100000000);
    ___cxa_guard_release(&DAT_102312398);
  }
  if (DAT_102312390[1] != 0) goto LAB_10070d62f;
  FUN_100d842d0(&local_30);
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_11 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_20,0x1e1350a);
  QString::append(&local_28);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10070d5bf;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_10070d5bf:
  QString::operator=((QString *)&DAT_102312390,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_10070d5ff;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_10070d5ff:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10070d62f;
      local_11 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10070d62f:
  piVar1 = DAT_102312390;
  *param_1 = DAT_102312390;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

