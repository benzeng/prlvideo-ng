
QString * FUN_1005ae540(QString *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  uint uVar2;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar1 = QDir::separator();
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)*param_2;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_31 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_40.field0_0x0 + 4);
  if ((1 < *(uint *)local_40.field0_0x0) ||
     ((*(uint *)(local_40.field0_0x0 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_40,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_40.field0_0x0 + 4);
  }
  *(uint *)(local_40.field0_0x0 + 4) = uVar2 + 1;
  *(undefined2 *)
   (local_40.field0_0x0 + (long)(int)uVar2 * 2 + *(long *)(local_40.field0_0x0 + 0x10)) = uVar1;
  *(undefined2 *)
   (local_40.field0_0x0 +
   (long)(int)*(uint *)(local_40.field0_0x0 + 4) * 2 + *(long *)(local_40.field0_0x0 + 0x10)) = 0;
  FUN_1005ae1a0(&local_48,param_3,param_4);
  param_1->field0_0x0 = local_40.field0_0x0;
  if (1 < *(uint *)local_40.field0_0x0 + 1) {
    LOCK();
    *(uint *)local_40.field0_0x0 = *(uint *)local_40.field0_0x0 + 1;
    local_31 = *(uint *)local_40.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(param_1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005ae634;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005ae634:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}

