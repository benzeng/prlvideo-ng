
undefined4 FUN_100488690(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  QArrayData *local_30;
  long *local_28;
  undefined1 local_19;
  
  param_2 = (long *)*param_2;
  if (param_2 != (long *)0x0) {
    LOCK();
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    UNLOCK();
  }
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_28 = param_2;
  uVar3 = FUN_1004880c0(param_1,&local_28,6,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100488701;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100488701:
  if (param_2 != (long *)0x0) {
    LOCK();
    plVar1 = param_2 + 1;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*param_2 + 0x10))(param_2);
    }
  }
  return uVar3;
}

