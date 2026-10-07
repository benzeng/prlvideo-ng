
undefined1 FUN_1004ff7e0(undefined8 param_1,QString *param_2)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  QArrayData *local_38;
  QString local_30;
  QArrayData *local_28;
  QArrayData *local_20;
  undefined1 local_11;
  
  local_20 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
  cVar1 = FUN_100501480(param_2,&local_20,&local_28);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    local_38 = local_20;
    if (1 < *(uint *)local_20 + 1) {
      LOCK();
      *(uint *)local_20 = *(uint *)local_20 + 1;
      local_11 = *(uint *)local_20 != 0;
      UNLOCK();
    }
    uVar2 = *(uint *)(local_20 + 4);
    if ((1 < *(uint *)local_20) || ((*(uint *)(local_20 + 8) & 0x7fffffff) < uVar2 + 2)) {
      QString::reallocData((uint)&local_38,SUB41(uVar2 + 2,0));
      uVar2 = *(uint *)(local_38 + 4);
    }
    *(uint *)(local_38 + 4) = uVar2 + 1;
    *(undefined2 *)(local_38 + (long)(int)uVar2 * 2 + *(long *)(local_38 + 0x10)) = 0x2f;
    *(undefined2 *)(local_38 + (long)(int)*(uint *)(local_38 + 4) * 2 + *(long *)(local_38 + 0x10))
         = 0;
    if (1 < *(uint *)local_38 + 1) {
      LOCK();
      *(uint *)local_38 = *(uint *)local_38 + 1;
      local_11 = *(uint *)local_38 != 0;
      UNLOCK();
    }
    local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_38;
    QString::append(&local_30);
    QString::operator=(param_2,&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_11 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1004ff8e1;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
LAB_1004ff8e1:
    uVar3 = 1;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_11 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1004ff917;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_1004ff917:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_11 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_11) goto LAB_1004ff947;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1004ff947:
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar3;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar3;
}

