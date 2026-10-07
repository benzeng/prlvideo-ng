
undefined8 *
FUN_1004d02a0(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,long *param_7)

{
  int iVar1;
  QArrayData *pQVar2;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  
  QMutex::lock();
  *param_1 = PTR_shared_null_100ba20d0;
  if ((*param_7 == 0) || (*(long *)(*param_7 + 0x10) == 0)) {
    FUN_1004d08f0(&local_48,param_2,param_3,param_4,param_5,param_6);
    *param_1 = local_48;
    local_48 = PTR_shared_null_100ba20d0;
    if (*(int *)PTR_shared_null_100ba20d0 == -1) goto LAB_1004d03c0;
    pQVar2 = (QArrayData *)PTR_shared_null_100ba20d0;
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      iVar1 = *(int *)local_48;
      UNLOCK();
      pQVar2 = (QArrayData *)local_48;
      goto joined_r0x0001004d03ab;
    }
  }
  else {
    FUN_1004d0450(&local_40,param_2,param_3,param_4,param_5,param_6,param_7);
    *param_1 = local_40;
    pQVar2 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_40 = PTR_shared_null_100ba20d0;
    if (*(int *)PTR_shared_null_100ba20d0 == -1) goto LAB_1004d03c0;
    if (*(int *)PTR_shared_null_100ba20d0 != 0) {
      LOCK();
      *(int *)PTR_shared_null_100ba20d0 = *(int *)PTR_shared_null_100ba20d0 + -1;
      iVar1 = *(int *)pQVar2;
      UNLOCK();
      local_40 = pQVar2;
joined_r0x0001004d03ab:
      local_31 = iVar1 != 0;
      if ((bool)local_31) goto LAB_1004d03c0;
    }
  }
  QArrayData::deallocate(pQVar2,2,8);
LAB_1004d03c0:
  QMutex::unlock();
  FUN_1004d5770(*(undefined8 *)(*param_2 + 0xb0),0);
  return param_1;
}

