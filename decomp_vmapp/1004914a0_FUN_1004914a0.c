
undefined4 FUN_1004914a0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  FUN_1004916a0(&local_38,param_2,*(undefined8 *)(DAT_1011c3698 + 0x110));
  puVar3 = PTR_shared_null_100ba20d0;
  local_40 = PTR_shared_null_100ba2188;
  local_48 = PTR_shared_null_100ba2188;
  local_50 = PTR_shared_null_100ba20d0;
  param_3 = (long *)*param_3;
  if (param_3 != (long *)0x0) {
    LOCK();
    *(int *)(param_3 + 1) = (int)param_3[1] + 1;
    UNLOCK();
  }
  local_58 = param_3;
  uVar4 = FUN_100486cb0(param_1,param_2,&local_38,&local_40,&local_48,0x3800,&local_58,&local_50,
                        FUN_10048f3b0,2);
  if (param_3 != (long *)0x0) {
    LOCK();
    plVar1 = param_3 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_3 + 0x10))(param_3);
    }
  }
  if (*(int *)puVar3 != -1) {
    if (*(int *)puVar3 != 0) {
      LOCK();
      *(int *)puVar3 = *(int *)puVar3 + -1;
      local_29 = *(int *)puVar3 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10049159a;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_100ba20d0,2,8);
  }
LAB_10049159a:
  FUN_100013180(&local_48);
  FUN_100013180(&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) {
        return uVar4;
      }
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return uVar4;
}

