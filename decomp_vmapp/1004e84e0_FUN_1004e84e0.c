
undefined8 * FUN_1004e84e0(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_40;
  undefined1 local_31;
  
  puVar1 = PTR_shared_null_100ba20d0;
  *param_1 = PTR_shared_null_100ba20d0;
  param_1[4] = puVar1;
  FUN_1004e7940(&local_40);
  *param_1 = local_40;
  puVar1 = PTR_shared_null_100ba20d0;
  local_40 = PTR_shared_null_100ba20d0;
  if (*(int *)PTR_shared_null_100ba20d0 != -1) {
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e8559;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_1004e8559:
  FUN_1004e7cb0(param_2);
  uVar2 = FUN_1004e7df0(param_2);
  *(undefined1 *)(param_1 + 1) = uVar2;
  uVar2 = FUN_1004e7df0(param_2);
  *(undefined1 *)((long)param_1 + 9) = uVar2;
  uVar3 = FUN_1004e7cb0(param_2);
  *(undefined4 *)((long)param_1 + 0xc) = uVar3;
  uVar3 = FUN_1004e7cb0(param_2);
  *(undefined4 *)(param_1 + 2) = uVar3;
  uVar3 = FUN_1004e7cb0(param_2);
  *(undefined4 *)((long)param_1 + 0x14) = uVar3;
  uVar2 = FUN_1004e7df0(param_2);
  *(undefined1 *)(param_1 + 3) = uVar2;
  uVar3 = FUN_1004e7cb0(param_2);
  *(undefined4 *)(param_1 + 7) = uVar3;
  if (param_3 < 0x12) {
    *(undefined1 *)((long)param_1 + 0x19) = 0;
  }
  else {
    uVar2 = FUN_1004e7df0(param_2);
    *(undefined1 *)((long)param_1 + 0x19) = uVar2;
  }
  FUN_1004e8300(&local_58,param_2);
  param_1[4] = local_58;
  puVar1 = PTR_shared_null_100ba20d0;
  local_58 = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 6) = local_48;
  param_1[5] = local_50;
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_31 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return param_1;
      }
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
  return param_1;
}

