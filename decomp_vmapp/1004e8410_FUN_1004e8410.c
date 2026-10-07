
undefined8 * FUN_1004e8410(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *local_30;
  undefined1 local_21;
  
  *param_1 = PTR_shared_null_100ba20d0;
  FUN_1004e7940(&local_30);
  *param_1 = local_30;
  puVar1 = PTR_shared_null_100ba20d0;
  local_30 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004e847b;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1004e847b:
  uVar2 = FUN_1004e7cb0(param_2);
  *(undefined4 *)(param_1 + 1) = uVar2;
  uVar2 = FUN_1004e7cb0(param_2);
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  return param_1;
}

