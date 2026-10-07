
undefined1 FUN_1004de5d0(long param_1,QString *param_2)

{
  uint uVar1;
  QArrayData *local_30;
  QString local_28;
  QString local_20;
  undefined1 local_11;
  
  if ((undefined8 *)
      (*(long *)(param_1 + 0x10) + 0x10 + (long)*(int *)(*(long *)(param_1 + 0x10) + 0xc) * 8) <=
      *(undefined8 **)(param_1 + 0x20)) {
    return 0;
  }
  local_20.field0_0x0 = (QTypedArrayData<unsigned_short> *)**(undefined8 **)(param_1 + 0x20);
  if (1 < *(int *)local_20.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + 1;
    local_11 = *(int *)local_20.field0_0x0 != 0;
    UNLOCK();
  }
  local_30 = *(QArrayData **)(param_1 + 8);
  if (1 < *(uint *)local_30 + 1) {
    LOCK();
    *(uint *)local_30 = *(uint *)local_30 + 1;
    local_11 = *(uint *)local_30 != 0;
    UNLOCK();
  }
  uVar1 = *(uint *)(local_30 + 4);
  if ((1 < *(uint *)local_30) || ((*(uint *)(local_30 + 8) & 0x7fffffff) < uVar1 + 2)) {
    QString::reallocData((uint)&local_30,SUB41(uVar1 + 2,0));
    uVar1 = *(uint *)(local_30 + 4);
  }
  *(uint *)(local_30 + 4) = uVar1 + 1;
  *(undefined2 *)(local_30 + (long)(int)uVar1 * 2 + *(long *)(local_30 + 0x10)) = 0x2f;
  *(undefined2 *)(local_30 + (long)(int)*(uint *)(local_30 + 4) * 2 + *(long *)(local_30 + 0x10)) =
       0;
  if (1 < *(uint *)local_30 + 1) {
    LOCK();
    *(uint *)local_30 = *(uint *)local_30 + 1;
    local_11 = *(uint *)local_30 != 0;
    UNLOCK();
  }
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_30;
  QString::append(&local_28);
  QString::operator=(param_2,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_11 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004de6dc;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1004de6dc:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_11 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004de70c;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1004de70c:
  QString::operator=(param_2 + 1,&local_20);
  if (*(int *)local_20.field0_0x0 != -1) {
    if (*(int *)local_20.field0_0x0 != 0) {
      LOCK();
      *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_20.field0_0x0 != 0) {
        return 1;
      }
      local_11 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
  }
  return 1;
}

