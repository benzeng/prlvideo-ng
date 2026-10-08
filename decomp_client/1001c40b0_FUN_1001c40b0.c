
void FUN_1001c40b0(long param_1)

{
  QArrayData *pQVar1;
  QArrayData *local_48;
  undefined *local_40;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_1 + 0x30) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x30) = 3;
    QProcess::terminate();
    return;
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  FUN_100d86380(&local_38);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_19 = *(int *)local_38 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_28,0x1dd7bde);
  QString::append(&local_30);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c414f;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001c414f:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c417f;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001c417f:
  pQVar1 = (QArrayData *)QString::fromAscii_helper("",0);
  local_40 = PTR_shared_null_1021e15e8;
  local_48 = pQVar1;
  FUN_1000341d0(&local_40,&local_48);
  QProcess::start(param_1 + 0x20,&local_30,&local_40,0);
  FUN_100039a80(&local_40);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      local_19 = *(int *)pQVar1 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001c41f8;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_1001c41f8:
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

