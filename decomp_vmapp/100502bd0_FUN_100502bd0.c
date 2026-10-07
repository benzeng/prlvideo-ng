
QString * FUN_100502bd0(long param_1)

{
  QString *this;
  undefined2 uVar1;
  uint uVar2;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  this = (QString *)(param_1 + 0x48);
  if (*(int *)(*(long *)(param_1 + 0x48) + 4) != 0) {
    return this;
  }
  uVar1 = QDir::separator();
  local_38 = *(QArrayData **)(param_1 + 0x10);
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  uVar2 = *(uint *)(local_38 + 4);
  if ((1 < *(uint *)local_38) || ((*(uint *)(local_38 + 8) & 0x7fffffff) < uVar2 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar2 + 2,0));
    uVar2 = *(uint *)(local_38 + 4);
  }
  *(uint *)(local_38 + 4) = uVar2 + 1;
  *(undefined2 *)(local_38 + (long)(int)uVar2 * 2 + *(long *)(local_38 + 0x10)) = uVar1;
  *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10)) =
       0;
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
  QString::append(&local_30);
  QString::operator=(this,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_21 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100502ccb;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_100502ccb:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return this;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return this;
}

