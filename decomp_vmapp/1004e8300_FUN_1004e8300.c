
undefined8 * FUN_1004e8300(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
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
      if ((bool)local_21) goto LAB_1004e836b;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1004e836b:
  uVar3 = FUN_1004e7b70(param_2);
  *(undefined4 *)(param_1 + 1) = uVar3;
  FUN_1004e7cb0(param_2);
  FUN_1004e7cb0(param_2);
  FUN_1004e7cb0(param_2);
  uVar2 = FUN_1004e7df0(param_2);
  *(undefined1 *)((long)param_1 + 0xc) = uVar2;
  FUN_1004e7df0(param_2);
  FUN_1004e7f40(param_2);
  FUN_1004e7f40(param_2);
  FUN_1004e7cb0(param_2);
  FUN_1004e8080(param_2);
  return param_1;
}

