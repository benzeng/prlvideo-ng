
QString * FUN_100601990(QString *param_1,long param_2)

{
  undefined2 uVar1;
  uint uVar2;
  QString local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  (**(code **)(**(long **)(*(long *)(param_2 + 8) + 0x10) + 0xf0))(&local_30);
  uVar1 = QDir::separator();
  local_38.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_2 + 0x10);
  if (1 < *(uint *)local_38.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_38.field0_0x0 = *(uint *)local_38.field0_0x0 + 1;
    local_21 = *(uint *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_38.field0_0x0 + 4);
  if ((1 < *(uint *)local_38.field0_0x0) ||
     ((*(uint *)(local_38.field0_0x0 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_38.field0_0x0 + 4);
  }
  *(uint *)(local_38.field0_0x0 + 4) = uVar2 + 1;
  *(undefined2 *)
   (local_38.field0_0x0 + (long)(int)uVar2 * 2 + *(long *)(local_38.field0_0x0 + 0x10)) = uVar1;
  *(undefined2 *)
   (local_38.field0_0x0 +
   (long)(int)*(uint *)(local_38.field0_0x0 + 4) * 2 + *(long *)(local_38.field0_0x0 + 0x10)) = 0;
  param_1->field0_0x0 = local_38.field0_0x0;
  if (1 < *(uint *)local_38.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_38.field0_0x0 = *(uint *)local_38.field0_0x0 + 1;
    local_21 = *(uint *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100601a80;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100601a80:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

