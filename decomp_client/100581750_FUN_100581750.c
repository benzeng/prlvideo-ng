
undefined8 * FUN_100581750(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined1 local_29;
  
  puVar3 = PTR_shared_null_1021e15e8;
  puVar2 = PTR_shared_null_1021e1288;
  if (param_2 != (undefined8 *)0x0) {
    piVar1 = (int *)*param_2;
    *param_1 = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_29 = *piVar1 != 0;
      UNLOCK();
    }
    piVar1 = (int *)param_2[1];
    param_1[1] = piVar1;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      local_29 = *piVar1 != 0;
      UNLOCK();
    }
    FUN_1000ff290(param_1 + 2,param_2 + 2);
    return param_1;
  }
  local_38 = PTR_shared_null_1021e1288;
  local_40 = PTR_shared_null_1021e1288;
  local_48 = PTR_shared_null_1021e15e8;
  FUN_1005819a0(param_1,&local_38,&local_40,&local_48);
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10058187e;
    }
    FUN_1000feb90(&local_48,PTR_shared_null_1021e15e8);
  }
LAB_10058187e:
  if (*(int *)puVar2 == -1) {
    return param_1;
  }
  if (*(int *)puVar2 != 0) {
    LOCK();
    *(int *)puVar2 = *(int *)puVar2 + -1;
    local_29 = *(int *)puVar2 != 0;
    UNLOCK();
    if ((bool)local_29) goto LAB_1005818af;
  }
  QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
LAB_1005818af:
  if (*(int *)puVar2 != -1) {
    if (*(int *)puVar2 != 0) {
      LOCK();
      *(int *)puVar2 = *(int *)puVar2 + -1;
      local_29 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
  return param_1;
}

