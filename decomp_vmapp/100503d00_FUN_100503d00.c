
undefined8 * FUN_100503d00(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  QArrayData *local_30;
  char local_24 [2];
  undefined1 local_22;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_100ba20d0;
  *param_1 = PTR_shared_null_100ba20d0;
  FUN_1006fa7b0(&local_30,param_2,param_3,1,local_24);
  pQVar3 = local_30;
  *param_1 = local_30;
  puVar2 = PTR_shared_null_100ba20d0;
  local_30 = (QArrayData *)puVar1;
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      local_22 = *(int *)puVar2 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_100503d70;
    }
    QArrayData::deallocate((QArrayData *)puVar1,2,8);
  }
LAB_100503d70:
  if ((*(int *)(pQVar3 + 4) != 0) && (local_24[0] == '\0')) {
    *param_1 = PTR_shared_null_100ba20d0;
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_21 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_21) {
          return param_1;
        }
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
  }
  return param_1;
}

