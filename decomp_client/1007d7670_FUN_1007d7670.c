
void FUN_1007d7670(long param_1,undefined8 *param_2)

{
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_28 = (QArrayData *)*param_2;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    local_11 = *(int *)local_28 != 0;
    UNLOCK();
  }
  FUN_1007d71f0(&local_20,&local_28);
  CSbaInstallation::setDstPath((QTypedArrayData<unsigned_short> *)(param_1 + 0x140));
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      local_11 = *(int *)local_20 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d76e1;
    }
    QArrayData::deallocate(local_20,2,8);
  }
LAB_1007d76e1:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1007d7711;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1007d7711:
  FUN_1007d7460(param_1);
  return;
}

