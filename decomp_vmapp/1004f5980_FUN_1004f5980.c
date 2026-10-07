
undefined8 * FUN_1004f5980(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  QArrayData *local_38;
  QString local_30;
  undefined1 local_21;
  
  local_38 = (QArrayData *)*param_2;
  if (1 < *(uint *)local_38 + 1) {
    LOCK();
    *(uint *)local_38 = *(uint *)local_38 + 1;
    local_21 = *(uint *)local_38 != 0;
    UNLOCK();
  }
  uVar3 = *(uint *)(local_38 + 4);
  if ((1 < *(uint *)local_38) || ((*(uint *)(local_38 + 8) & 0x7fffffff) < uVar3 + 2)) {
    QString::reallocData((uint)&local_38,SUB41(uVar3 + 2,0));
    uVar3 = *(uint *)(local_38 + 4);
  }
  *(uint *)(local_38 + 4) = uVar3 + 1;
  *(undefined2 *)(local_38 + (long)(int)uVar3 * 2 + *(long *)(local_38 + 0x10)) = 0x2f;
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
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004f5a56;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004f5a56:
  cVar2 = FUN_1004f5620(&local_30,(long)*(int *)(*param_2 + 4) + 1);
  if (cVar2 == '\0') {
    piVar1 = (int *)*param_3;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_21 = *piVar1 != 0;
      UNLOCK();
    }
  }
  else {
    QString::mid((int)param_1,(int)&local_30);
  }
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return param_1;
}

