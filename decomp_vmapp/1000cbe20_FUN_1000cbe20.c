
undefined8 * FUN_1000cbe20(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CBiParams *this;
  long *plVar4;
  CBaseNode *this_00;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  *param_1 = 0;
  if (param_2 == 0) {
    return param_1;
  }
  FUN_10012d650(&local_38);
  if (*(int *)(local_38 + 4) == 0) goto LAB_1000cbf75;
  this = operator_new(0xb8);
  CBiParams::CBiParams(this);
  plVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (plVar4 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x88))();
    *param_1 = 0;
    plVar4 = (long *)0x0;
    this_00 = (CBaseNode *)0x0;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 1;
    plVar4[2] = (long)this;
    *plVar4 = (long)&PTR_FUN_100bf0038;
    *param_1 = plVar4;
    this_00 = (CBaseNode *)plVar4[2];
  }
  local_40 = local_38;
  if (1 < *(int *)local_38 + 1U) {
    LOCK();
    *(int *)local_38 = *(int *)local_38 + 1;
    local_29 = *(int *)local_38 != 0;
    UNLOCK();
  }
  iVar3 = CBaseNode::fromString
                    (this_00,(QTypedArrayData<unsigned_short> *)&local_40,false,(QString *)0x0,
                     (int *)0x0,(int *)0x0);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000cbf32;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1000cbf32:
  if ((iVar3 != 0) && (*param_1 = 0, plVar4 != (long *)0x0)) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1000cbf75:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return param_1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return param_1;
}

