
undefined4 FUN_100dd7020(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  QArrayData *local_20;
  undefined1 local_13;
  undefined1 local_12;
  
  local_20 = (QArrayData *)*param_1;
  if (1 < *(int *)local_20 + 1U) {
    LOCK();
    *(int *)local_20 = *(int *)local_20 + 1;
    local_13 = *(int *)local_20 != 0;
    UNLOCK();
  }
  uVar1 = FUN_100dd6f10((double)param_3,&local_20);
  if (*(int *)local_20 != -1) {
    if (*(int *)local_20 != 0) {
      LOCK();
      *(int *)local_20 = *(int *)local_20 + -1;
      UNLOCK();
      if (*(int *)local_20 != 0) {
        return uVar1;
      }
      local_12 = 0;
    }
    QArrayData::deallocate(local_20,2,8);
  }
  return uVar1;
}

