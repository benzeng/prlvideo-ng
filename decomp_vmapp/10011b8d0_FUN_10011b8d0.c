
undefined8 * FUN_10011b8d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  plVar1 = operator_new(0x18);
  local_40 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_48 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_100133b10(plVar1,0x882,&local_40,&local_48,param_2,param_3);
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = plVar1;
    *puVar2 = &PTR_FUN_10110d3a8;
  }
  *param_1 = puVar2;
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011b998;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10011b998:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return param_1;
}

