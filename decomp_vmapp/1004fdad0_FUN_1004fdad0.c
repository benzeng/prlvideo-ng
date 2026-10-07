
undefined8 * FUN_1004fdad0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  plVar1 = operator_new(0x28);
  FUN_1004fdc30(&local_30);
  *(undefined2 *)(plVar1 + 1) = *(undefined2 *)(param_2 + 0x1a);
  *plVar1 = (long)&PTR_FUN_100bc3e68;
  plVar1[2] = (long)local_30;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_23 = *(int *)local_30 != 0;
    UNLOCK();
  }
  QMutex::QMutex((QMutex *)(plVar1 + 3),0);
  plVar1[4] = (long)PTR_shared_null_100ba2180;
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = plVar1;
    *puVar2 = &PTR_FUN_10111cca8;
  }
  *param_1 = puVar2;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return param_1;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return param_1;
}

